#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;


int solve(int a, int b, int c) {
  int sum2=0;

  vector<int>ans={a,b,c};
  sort(begin(ans),end(ans));
  
  sum2=ans[0]+ans[1];
  
  if(ans[2]>(sum2+1)*2)
    return -1;
  else return a+b+c;
}


int main(){
  
  return 0;
}

 /**
  * @brief https://practice.geeksforgeeks.org/problems/84963d7b5b84aa24f7807d86e672d0f97f41a4b5/1?utm_source=geeksforgeeks&utm_medium=newui_home&utm_campaign=potd
  * 
  */