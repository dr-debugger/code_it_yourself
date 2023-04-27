#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

vector<char> easyTask(int n, string s, int q, vector<vector<string>> &queries)
{
  vector<char> ans;

  char *copy_str = new char[n + 1];
  strcpy(copy_str, s.c_str());

  priority_queue<char> pq;

  for (int i = 0; i < q; i++)
  {
    int type = stoi(queries[i][0]);

    if (type == 1)
    {
      char *tempStr = new char[2];
      strcpy(tempStr, queries[i][2].c_str());

      int index = stoi(queries[i][1]);
      copy_str[index] = tempStr[0];
      delete[] tempStr;
    }
    else
    {
      int startIndex = stoi(queries[i][1]), lastIndex = stoi(queries[i][2]);

      for (int i = startIndex; i <= lastIndex; i++)
      {
        pq.push(copy_str[i]);
      }

      int tempK = stoi(queries[i][3]);
      while (--tempK)
      {
        pq.pop();
      }

      ans.push_back(pq.top());

      while (!pq.empty())
      {
        pq.pop();
      }
    }
  }

  delete[] copy_str;
  return ans;
}

int main()
{
  vector<vector<string>> v = {{"1", "1", "g"}};
  easyTask(3, "abc", v.size(), v);
  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/c928f229cc972671d91c5e9f6b222414912cc88a/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
 *
 */

// for (int j = 0; j < queries[i].size(); j++){
//   string *str = new string(queries[i][j]);
//   cout << str[0] << endl;
// }