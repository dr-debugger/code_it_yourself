#include <iostream>
#include <string>
using namespace std;

int distributeTicket(int N, int K)
{
  int first = 1, last = N;
  int lastCount = N;

  // true means first block will be removed, and opposite indicates to remove second block
  bool turn = true;

  while (first <= last)
  {
    // first turn
    if (turn)
    {
      if ((first + K) >= last)
      {
        lastCount = last;
      }
      first += K;
    }

    // second turn
    if (!turn)
    {
      if ((last - K) <= first)
      {
        lastCount = first; // on second turn item will be deleting from last
      }
      last -= K;
    }

    turn = !turn;
  }

  return lastCount;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/ticket-counter-2731/1
 *
 * TC: O(N/K)
 * SC: O(1)
 */