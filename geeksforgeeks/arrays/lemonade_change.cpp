#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool lemonadeChange(int N, vector<int> &bills)
{

  int fiveCount = 0, tenCount = 0, twentyCount = 0;
  for (int i = 0; i < N; i++)
  {
    if (bills[i] == 5)
    {
      fiveCount++;
      continue;
    }

    if (bills[i] == 10)
    {
      if (fiveCount > 0)
      {
        fiveCount--;
      }else{
        return false;
      }
      tenCount++;
    }

    if(bills[i] == 20){
      twentyCount++;
      if (tenCount > 0 && fiveCount > 0)
      {
        tenCount--;
        fiveCount--;
      }
      else if (fiveCount >= 3)
      {
        fiveCount -= 3;
      }else{
        return false;
      }
    }

  }

  return true;
}

int main()
{

  cout << 0 - 4;

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/lemonade-change/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */