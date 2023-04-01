#include<iostream>
#include<string>
#include<map>
using namespace std;


int firstElementKTime(int a[], int n, int k){
  map<int, int> m;

  for (int i = 0; i < n; i++){
      if(m.find(a[i]) != m.end()){
        m[a[i]] = m[a[i]] + 1;
      }else{
        m[a[i]] = 1;
      }

      if(m[a[i]] == k)
          return a[i];
  }

  return -1;
}

int main(){
  int arr[] = {1, 7, 4, 3, 4, 8, 7};
  cout << firstElementKTime(arr, 7, 2);
  return 0;
}

/**
 * @brief https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1?page=1&curated[]=1&sortBy=submissions
 * Time complexity O(N + nlog(N)) => O(N) // after removing the less term
 * Space Complexity O(N) // for the map object
 */