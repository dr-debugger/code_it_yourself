#include<iostream>
#include<string>
#include<vector>
using namespace std;

int stockBuyAndSell(int n, vector<int> &prices)
{
  int profit = 0;
  for (int i = 0; i < n -1; i++)
  {
    if(prices[i + 1] > prices[i]){
      profit += prices[i + 1] - prices[i];
    }
  }

  return profit;
}

int main(){
  
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/stock-buy-and-sell2615/1
 * 
 * TC: O(n)
 * SC: O(1)
 *
 */