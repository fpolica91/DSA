#include <bits/stdc++.h>
using namespace std;

int maxIndexDiff(vector<int> nums)
{
  int index = 0;
  int maxDiff = -1;
  for (int i = 0; i < nums.size(); i++)
  {
    int j = index + 1;
    while (j < nums.size())
    {
      if (nums[i] <= nums[j])
      {
        maxDiff = max(maxDiff, j - i);
        index = j;
      }
      j++;
    }
  }
  return maxDiff;
}

int main()
{
  vector<int> nums = {1, 2, 3, 4, 5};
  vector<int> nums2 = {5, 4, 3, 2, 1};
  vector<int> nums3 = {9, 2, 3, 4, 5, 1};
  cout << maxIndexDiff(nums) << endl;
  cout << maxIndexDiff(nums2) << endl;
  cout << maxIndexDiff(nums3) << endl;
  return 0;
}