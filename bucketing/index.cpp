#include <bits/stdc++.h>
using namespace std;

int smallest_positive(vector<int> nums)
{
  int n = nums.size();
  // handle if the number is negative
  for (int i = 0; i < n; i++)
  {
    if (nums[i] <= 0)
    {
      nums[i] = n + 1;
    }
  }

  for (int i = 0; i < n; i++)
  {
    int element = abs(nums[i]);
    if (element >= 1 and element <= n and nums[element - 1] > 0)
    {
      nums[element - 1] *= -1;
    }
  }
  for (int i = 0; i < n; i++)
  {
    // find the first positive number
    if (nums[i] > 0)
    {
      return i + 1;
    }
  }
  return n + 1;
}

int main()
{

  cout << smallest_positive({1, 2, 3, 4, 5}) << endl;
  cout << "what in the fukkkk" << endl;
  return 0;
}