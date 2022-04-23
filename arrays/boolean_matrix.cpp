#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > set_matrix_zeros(vector<vector<int> > &arr)
{
  bool zeroth_row = false;
  bool zeroth_col = false;
  int n = arr.size();
  int m = arr[0].size();
  // checks if there is already a 0 on the zeroth row
  for (int i = 0; i < m; i++)
  {
    if (arr[0][i] == 0)
    {
      zeroth_row = true;
      break;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i][0] == 0)
    {
      zeroth_col = true;
      break;
    }
  }
  // we are going ot use the first row and column as a marker
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; i < m; i++)
    {
      if (arr[i][j] == 0)
      {
        arr[i][0] = 0;
        arr[0][j] = 0;
      }
    }
  }
  //  / STEP-3: Update the inner matrix according the values at the corresponding buckets.
  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j < m; j++)
    {
      if (arr[i][0] == 0 or arr[0][j] == 0)
      {
        arr[i][j] = 0;
      }
    }
  }
  // STEP-4: Make updates according to the value of `zeroth_row` and `zeroth_col`.
  if (zeroth_row)
  {
    for (int j = 0; j < m; j++)
    {
      arr[0][j] = 0;
    }
  }
  if (zeroth_col)
  {
    for (int i = 0; i < n; i++)
    {
      arr[i][0] = 0;
    }
  }
  return arr;
}

int main()
{
  vector<vector<int> > arr = {
      {1, 1, 1},
      {1, 0, 1},
      {1, 1, 1}};

  set_matrix_zeros(arr);
  int n = arr.size();
  int m = arr[0].size();
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}