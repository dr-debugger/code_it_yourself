#include<iostream>
#include<vector>
#include<string>
using namespace std;

int addMinChar(string str){
  // vector<string> strArr;

  int length = str.length() - 1, i = 0;
  int j = length;

  int count = 0;

  while (i <= j)
  {
    if(str[i] == str[j]){
      i++;
      j--;
      continue;
    }

    count++;
    i = 0;
    j = length - count;
  }

  return count;
}

int main(){
  string s = "ABCD";
 cout <<  addMinChar(s);
  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/55dbfdc246f3f62d6a7bcee7664cacf6be345527/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 * 
 */