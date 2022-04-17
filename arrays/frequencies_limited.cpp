
#include <bits/stdc++.h>
using namespace std;
// 12. Frequencies of Limited Range Array Elements
void frequencyCount(vector<int> &arr, int N, int P)
{
  vector<int> res(N);
  for (int i = 0; i < N; i++)
  {
    if (arr[i] <= N)
    {
      res[arr[i] - 1]++;
    }
  }
  for (int i = 0; i < N; i++)
  {
    arr[i] = res[i];
  }
}

int main()
{
  vector<int> arr = {2, 3, 2, 3, 5};
  int N = arr.size();
  int P = 5;
  frequencyCount(arr, N, P);
  for (int i = 0; i < N; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}