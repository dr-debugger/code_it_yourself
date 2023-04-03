#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int xmod11(string x){

  long long evenTotal = 0;
  long long oddTotal = 0;

  for (int i = 0; i < x.length(); i++){
    int val = x[i] - '0';
    if(i % 2 == 0){
      oddTotal += val;
    }else{
      evenTotal += val;
    }
  }

  long long remainder = (oddTotal - evenTotal) % 11;

 if(x.length() % 2 == 0)
          return abs(remainder - 11) % 11;
   
  return remainder;
}

int main(){
  string s = "928174653";

 cout<< xmod11(s);

  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/aa8c89caad6b5c3a76ba5e6d65454f77aac3f3543526/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 * 
 */