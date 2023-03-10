#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int pageCount(int n, int p) {
  if(p == 1)
    return 0;
  else if(n-p == 1 && n %2 == 0)
    return 1;
  else if(n-p < p)
    return floor((n - p) / 2);
  else
    return floor(p / 2);

  // int middle = floor(n / 2);

  // if(middle % 2 == 0){
  //   if(p >= middle)  
  //     ceil((double)(n - p) / 2);
  //   else
  //     return floor(p / 2);
  // }

  // if(middle % 2 != 0){
  //   if(p <= middle)
  //     return floor(p / 2);
  //   else
  //     return ceil((double)(n - p) / 2);
  // }
}

int main(){
  int page = pageCount(6, 5);
  cout << page;
  return 0;
}


/**
 * @Ques
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-drawing-book/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-three
 * 
 */