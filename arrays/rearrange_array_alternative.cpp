/**
 *
 * Given a sorted array arrange it, so that it alternates between largest and smallest elements.
 *  [1,2,3,4]
 * [4,3,2,1]
 */
#include <bits/stdc++.h>
using namespace std;
void rearrange(vector<int> &arr)
{
  int n = arr.size();
  int j = n - 1;
  int i = 0;
  vector<int> ans;
  while (i <= j)
  {
    if (i == j)
    {
      ans.push_back(arr[j]);
      break;
    }
    ans.push_back(arr[i]);
    ans.push_back(arr[j]);
    i++;
    j--;
  }
  for (int i = 0; i < ans.size(); i++)
  {
    arr[i] = ans[i];
  }
}

int main()
{
  vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  rearrange(arr);
  for (auto i : arr)
    cout << i << " ";
  return 0;
}
