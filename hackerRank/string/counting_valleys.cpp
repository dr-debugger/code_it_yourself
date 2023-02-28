#include<iostream>
#include<string>
using namespace std;

int countingValleys(int steps, string path) {
  int strLength = path.length();
  int level = 0; // up from sea level will be 1, down -1, and on sea level it will be 0;
  bool enteredvalley = false;
  int valleyCount = 0;

  for (int i = 0; i < strLength; i++){
    if(path[i] == 'D')
      level--;
    if(path[i] == 'U')
      level++;


    
  }

  return 0;
}

int main(){

  countingValleys(5, "valley");

  return 0;
}