#include <bits/stdc++.h>
using namespace std;

void sortInWave(vector<int> &arr, int size)
{
  // we do +=2 to check for even against odd
  for (int i = 0; i < size; i += 2)
  {
    if (i > 0 and arr[i - 1] > arr[i])
    {
      swap(arr[i - 1], arr[i]);
    }
    if (i < size - 1 and arr[i + 1] > arr[i])
    {
      swap(arr[i + 1], arr[i]);
    }
  }
}

int main()
{
  vector<int> arr = {10, 90, 49, 2, 1, 5, 23};
  int n = arr.size();
  sortInWave(arr, n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  return 0;
}