#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int bitMagic(int n, vector<int> &arr)
{
  int size = n - 1;
  int count = 0;

  int start = 0, end = size;

  while (start < end)
  {
    int leftVal = arr[start], rightVal = arr[end];
    cout << leftVal << " " << rightVal << endl;
    if (leftVal != rightVal)
    {
      int power = pow(leftVal, rightVal);
      arr[start] = arr[end] = power;
      count++;
    }
    start++;
    end--;
  }

  return count;
}

int main()
{
  int v = pow(0, 1);
  int b = pow(1, 0);

  cout << v << b << endl;

  vector<int> vec = {1, 1, 1, 0, 0, 1, 0, 1, 1};
  int s = vec.size();
  bitMagic(s, vec);

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/ed0422e992899f3f46340ce97b0090683ceebd67/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */