
#include <bits/stdc++.h>
using namespace std;
// 13. Equilibrium Point
// Given an array of integers, find the equilibrium index of the array.
// An equilibrium index is an index such that the sum of elements at lower
// indexes is equal to the sum of elements at higher indexes.

int equilibriumPoint(vector<int> &arr, int size)
{
  int leftSum = 0, rightSum = 0, i, j;
  if (size == 1)
  {
    return 1;
  }
  for (i = 0, j = size - 1; i <= j;)
  {
    if (j == i and leftSum == rightSum)
    {
      return i + 1;
    }
    if (leftSum < rightSum)
    {
      leftSum += arr[i++];
    }
    else
    {
      rightSum += arr[j--];
    }
  }

  return -1;
}

int main()
{
  vector<int> arr = {1, 3, 5, 2, 2};
  int n = arr.size();
  cout << equilibriumPoint(arr, n) << endl;
  return 0;
}