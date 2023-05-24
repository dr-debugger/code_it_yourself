#include<iostream>
#include<string>
#include<vector>
using namespace std;

int getMaximum(int N, vector<int> &arr)
{

  long long sum = 0;
  for (int i = 0; i < N; i++)
  {
    sum += arr[i];
  }

  for (int i = N; i > 0; i--){
    if(sum%i == 0)
      return i;
  }

  return 0;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/5bfe93cc7f5a214bc6342709c78bc3dceba0f1c1/1
 *
 */