// not done yet
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

bool isEven(int num){
  return (num % 2) == 0;
}

int minimumSum(string s)
{

  int size = s.length();
  int end, start, count = 0, middle = floor(size / 2);

  if(isEven){
    start = middle - 1;
    end = middle + 1;
  }else{
    start = end = middle;
  }

  while (start >= 0 && end < size)
  {
    char first = s[start], second = s[end];

    if(first == second) continue;

    if(first != '?' && second != '?' && first != second){
      return -1;
    }

    if(first == '?' && second != '?'){
      s[start] = second;
    }

    if(first != '?' && second == '?'){
      s[end] = first;
    }
    
    if(first == '?' && second == '?'){
      // s[start] = s[end] = s[]
    }
    start--;
    end++;
  }

  return count;
}

int main(){
  string s = "abcde";
  char r = 'r';
  int v = 'R' - r;
  cout << v;

  return 0;
}

/**
 * @brief
 *
 * https://practice.geeksforgeeks.org/problems/32dc957908c2eb8beeeaeedf81f37df20d37c308/1
 */