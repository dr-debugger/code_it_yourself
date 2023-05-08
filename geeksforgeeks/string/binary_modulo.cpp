#include <iostream>
#include <string>
using namespace std;

int modulo(string s, int m)
{
  int binary_to_decimal = stoi(s, nullptr, 2);

  return binary_to_decimal % m;
}

int main()
{
  cout << modulo("101", 2);

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/7488b7721e8aa5e5fc37d56af8b9c89e329c796f/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */