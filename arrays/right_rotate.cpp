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

void right_rotate(int arr[], int d, int n)
{
  reverse(arr, d + 1, n - 1); // reverse the right part of the array
  reverse(arr, 0, d);         // reverse the left part of the array
  reverse(arr, 0, n - 1);     // reverse the whole array
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7}, n = 7, d = 3;

  cout << "Before Rotation" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;

  right_rotate(arr, d, n);

  cout << "After Rotation" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}