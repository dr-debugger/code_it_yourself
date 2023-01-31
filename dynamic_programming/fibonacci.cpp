#include<iostream>
#include<string>
#include<map>
using namespace std;


class Fib{
  map<int, double> mapObj;

public:
  Fib(){
    mapObj.insert(pair<int, double>(1, 1));
    mapObj[2] = 1;
  }
  
  double fibonacchi(int value){
    if(value <= 2){
      return 1;
    }

    map<int, double>::iterator itr = mapObj.find(value);
    if(itr == mapObj.end()){
      return mapObj[value] = fibonacchi(value - 1) + fibonacchi(value - 2);
    }

    return itr->second;
  }

  void displayNmbers(){
    map<int, double>::iterator itr = mapObj.begin();

    while(itr != mapObj.end()){
      cout << "key : " << itr->first << " value: " << itr->second << endl;
      ++itr;
    }
  }

};



int main(){

  int num;
  cout << "Enter the number of terms : ";
  cin >> num;

  Fib f;
  double sum = f.fibonacchi(num);
  cout << sum << endl;

  f.displayNmbers();

  return 0;
}

/**
 * sum of n fiboncci numbers
 *
 * f(n) = f(n-1) + f(n-2)
 * we're using map object for memoized the value;
 * serching for the key in map object in O(log n) complexity;
 *
 * for generating the sum of n Numbers the complexity is O(nlogn)
 * for displaying the n Numbers the complexity is O(n);
 * 
 * 
 * **Note** : while generating sum of n Numbers , we are generating fibonacci value of every individual Number.
 *
 */