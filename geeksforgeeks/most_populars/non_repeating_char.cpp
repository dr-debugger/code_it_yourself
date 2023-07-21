#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

char nonrepeatingCharacter(string S)
{
  unordered_map<char, int> freq;
  for (char c : S)
    freq[c]++;
  for (char c : S)
    if (freq[c] == 1)
      return c;
  return '$';
}

// zxvczbtxyzvy

int main(){
  
  return 0; 
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */