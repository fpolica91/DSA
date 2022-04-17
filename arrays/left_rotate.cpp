#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int start, int end)
{
  while (start < end)
  {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

void leftRotate(int arr[], int d, int n)
{
  reverse(arr, 0, d - 1);

  reverse(arr, d, n - 1);

  reverse(arr, 0, n - 1);
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7}, n = 7, d = 2;

  cout << "Before Rotation" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  leftRotate(arr, d, n);

  cout << "After Rotation" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}