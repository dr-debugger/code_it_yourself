#include<iostream>
#include<string>
using namespace std;

int setBits(int N)
{

  int number = N;
  int count = 0;

  while (number)
  {
    count += number & 1; // if both operand 1 than return 1 otherwise 0;
    number >>= 1;        // equivalent to: number = number / 2^1;
  }

  return count;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/set-bits0143/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 *
 * Number of set bits means how much 1 present in the binary form of given input(integer);
 * 
 * We're using "bitwise AND" and "right shifts" operator here to calculate this.
 */