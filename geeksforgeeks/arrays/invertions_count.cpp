// not done yet
#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long int mergeArr(long long arr[], long long begin, long long end, long long mid)
{

  long long leftStartInd = begin, rightStartInd = mid + 1;

  auto *tempArr = new long long[end + 1];

  long long int count = 0;

  long long mainInd = 0;

  while (leftStartInd <= mid && rightStartInd <= end)
  {
    if (arr[leftStartInd] <= arr[rightStartInd])
    {
      tempArr[mainInd] = arr[leftStartInd];
      leftStartInd++;
    }
    else
    {
      tempArr[mainInd] = arr[rightStartInd];
      rightStartInd++;

      // we only care about if element is bigger than its right element(s)
      count += (mid - leftStartInd + 1); 
    }
    mainInd++;
  }

  //  if elements on the left half are still remains
  while (leftStartInd <= mid)
  {
    tempArr[mainInd] = arr[leftStartInd];
    leftStartInd++;
    mainInd++;
  }

  //  if elements on the right half are still remains
  while (rightStartInd <= end)
  {
    tempArr[mainInd] = arr[rightStartInd];
    rightStartInd++;
    mainInd++;
  }

  // transfering element in actual array in sorted order
  for (auto i = begin; i <= end; i++)
  {
    arr[i] = tempArr[i - begin];
  }

  delete[] tempArr;

  return count;
}

long long int mergeSort(long long arr[], long long begin, long long end)
{

  long long count = 0;

  if (begin >= end)
    return count;

  long long mid = (begin + end) / 2;

  count += mergeSort(arr, begin, mid);
  count += mergeSort(arr, mid + 1, end);

  count += mergeArr(arr, begin, end, mid);

  return count;
}

long long int inversionCount(long long arr[], long long N)
{
  long long int res = mergeSort(arr, 0, N - 1);
  return res;
}

int main()
{

  return 0;
}

/**
 * @brief
 * https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1?page=2&curated[]=1&sortBy=submissions
 *
 * * we need to use merge sort here *
 * TC: O(nlogn)
 * SC: O(n)
 */