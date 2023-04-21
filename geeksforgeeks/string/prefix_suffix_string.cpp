#include<iostream>
#include<vector>
#include<string>
using namespace std;

int prefixSuffixString(vector<string> &s1, vector<string> s2)
{

  int res = 0;

  for (int i = 0; i < s2.size(); i++){
    for (int j = 0; j < s1.size(); j++){
      int mainStrLength = s1[j].length(), subStrlength = s2[i].length();
      if (mainStrLength > subStrlength)
      {
        string prefix = s1[j].substr(0, subStrlength);
        string suffix = s1[j].substr(mainStrLength - subStrlength, subStrlength);

        int isSuffixEqual = suffix.compare(s2[i]), isPrefixEqual = prefix.compare(s2[i]);

        if (isSuffixEqual == 0 || isPrefixEqual == 0)
        {
          res++;
          break;
        }
      }
    }
  }

  return res;
}


int main(){

  vector<string> s1 = {"x78x"},
                 s2 = {"cat"};

  cout << prefixSuffixString(s1, s2);

  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/5be83263c7f2cb866c60b23b73bb38f88de2461c/1
 *
 */