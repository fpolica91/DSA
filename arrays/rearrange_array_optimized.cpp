#include <bits/stdc++.h>
using namespace std;

void rerrange_array(vector<int> &arr)
{
  int n = arr.size();
  int max_index = n - 1;
  int min_index = 0;

  int max_elem = arr[n - 1] + 1;
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      arr[i] += (arr[max_index] % max_elem) * max_elem;
      max_index--;
    }
    else
    {
      arr[i] += (arr[min_index] % max_elem) * max_elem;
      min_index++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    arr[i] /= max_elem;
  }
}

int main()
{

  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  rerrange_array(arr);
  for (auto i : arr)
    cout << i << " ";
  return 0;
}
