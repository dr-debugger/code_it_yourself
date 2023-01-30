#include<iostream>
#include<string>
using namespace std;

int fibonacchi(int value){
  if(value <= 2){
    return 1;
  }

  return fibonacchi(value - 1) + fibonacchi(value - 2);
}

int main(){
  int sum = fibonacchi(2);
  cout << sum << endl;

  return 0;
}

/**
 * sum of n fiboncci numbers
 * 
 */