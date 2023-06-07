#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> leastPrimeFactor(int n)
{
  vector<int> res(n + 1, 0);
  res[1] = 1; // prime factor for 1 is 1;

  // 2 is the smallest prime number
  for (int i = 2; i <= n; i++)
  {
    if (res[i] == 0)
    {
      res[i] = i;
    }

    // now every multiplier of "i", the least prime factor will be i itself;
    for (int j = i * 2; j <= n; j += i)
    {
      if (res[j] == 0)
      {
        res[j] = i;
      }
    }
  }

  return res;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/least-prime-factor5216/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */