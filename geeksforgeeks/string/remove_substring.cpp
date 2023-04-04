#include<iostream>
#include<string>
using namespace std;


int removeSubstringByMinimumSteps(string str){
  int count=1;
    for(int i=1;i<str.length();i++)
    {
        if(str[i]==str[i-1]) continue;
        count++;
    }
    return (count+2)/2;
}

int main(){
  
  return 0;
}

/**
 * @brief 
 * 
 */