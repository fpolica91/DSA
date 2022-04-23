#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int smallest_positive(vector<int> nums)
{
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    if (nums[i] <= 0)
    {
      nums[i] = n + 1;
    }
  }
  for (int i = 0; i < n; i++)
  {
    int current = abs(nums[i]);
    if (current >= 1 and current <= n and nums[current - 1] > 0)
    {
      nums[current - 1] *= -1;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (nums[i] > 0)
    {
      return i + 1;
    }
  }
  return n + 1;
}

int main()
{
  vector<int> nums = {3, 4, -1, 1};
  int n = nums.size();
  cout << "what in the fukkkk" << endl;
  smallest_positive(nums);
  return 0;
}