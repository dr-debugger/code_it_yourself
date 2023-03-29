#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

class GetCount{
  public:
    int solution(string s){
      unordered_map<int, int> prevVal;
      int result = 0;
      int currentSum = 0;

      for (int i = 0; i < s.length(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
          currentSum++;
        }else{
          currentSum--;
        }

        if(currentSum == 0){
          result++;
        }

        if(prevVal.find(currentSum) != prevVal.end()){
          result += (prevVal[currentSum]);
        }

        prevVal[currentSum]++;
      }

      return result;
    }
};

int main(){
    GetCount a;
     string S = "Arij";
     cout << a.solution(S);
     return 0;
}

/**
 * @brief Number of substrings having an equal number of lowercase and uppercase letters
 * 
 */