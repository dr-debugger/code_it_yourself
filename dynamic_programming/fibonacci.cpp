#include<iostream>
#include<string>
using namespace std;

class Fib{
  int *memoized;

  public:
  Fib(int n){
    memoized = new int[n];
  }
  int fibonacchi(int value){
    if(value <= 2){
      return 1;
    }

    return fibonacchi(value - 1) + fibonacchi(value - 2);
  }

};



int main(){
  // int sum = fibonacchi(2);
  // cout << sum << endl;

  int arr[8];


  return 0;
}

/**
 * sum of n fiboncci numbers
 * 
 */