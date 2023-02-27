#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> gradingStudents(vector<int> grades) {
  vector<int> result(grades.size());

  for (int i = 0; i < grades.size(); i++){

    int next_multiple_of_five = (grades[i] + 5) - ((grades[i] + 5) % 5);

    if((next_multiple_of_five - grades[i]) < 3 && next_multiple_of_five >= 40){
      result[i] = next_multiple_of_five;
      continue;
    }

    result[i] = grades[i];
  }

    return result;
}

int main(){
    vector<int> grades{20, 70, 89, 45, 76};
    vector<int> res = gradingStudents(grades);
    return 0;
}


/**
 * @Ques 
 * https://www.hackerrank.com/challenges/three-month-preparation-kit-grading/problem?isFullScreen=true&h_l=interview&playlist_slugs%5B%5D=preparation-kits&playlist_slugs%5B%5D=three-month-preparation-kit&playlist_slugs%5B%5D=three-month-week-two
 * 
 */
