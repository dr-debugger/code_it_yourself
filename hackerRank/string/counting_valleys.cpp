#include<iostream>
#include<string>
using namespace std;

int countingValleys(int steps, string path) {
  int strLength = path.length();
  int level = 0; // up from sea level will be 1, down -1, and on sea level it will be 0;
  
  int valleyCount = 0;

  for (int i = 0; i < strLength; i++){
    if(path[i] == 'U' && (level + 1) == 0 ){
      valleyCount++;
      level++;
      continue;
    }

    if(path[i] == 'U'){
      level++;
    }

    if(path[i] == 'D'){
      level--;
    }
    
  }

  return valleyCount;
}

int main(){

  cout << countingValleys(8, "UDDDUDUU");

  return 0;
}


/**
 * @Ques 
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-counting-valleys/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two
 * 
 */