#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_possible_to_get_seats(int n, int m, vector<int> &seats)
{

  int seat = 0;

  int i = 0;

  while (i < m && seat <= n)
  {

    if(seats[i] == 0){
      if ((i == 0 && seats[i + 1] == 0) || ((i == m - 1) && seats[i - 1] == 0) || (seats[i + 1] == 0 && seats[i - 1] == 0)){
        seats[i] = 1;
        seat++;
      }
    }
    i++;
  }

  return seat >= n;
}

int main(){
    vector<int> v{0, 0, 0, 0 ,0, 0, 0, 0, 0, 0};
is_possible_to_get_seats(3, v.size(), v);
return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/6bb49b563cc171335c6564b00307a6d867e0268d/1
 *
 */