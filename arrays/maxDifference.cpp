#include <bits/stdc++.h>
using namespace std;

int maxDiffereceNaive(vector<int> nums)
{
  int n = nums.size();
  int maxDiff = nums[1] - nums[0];
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      maxDiff = max(maxDiff, nums[j] - nums[i]);
    }
  }
  return maxDiff;
}

int maxDifferenceOptimized(vector<int> nums)
{
  int n = nums.size();
  int maxDiff = nums[1] - nums[0];
  int minNum = nums[0];
  for (int i = 1; i < n; i++)
  {
    int currentElement = nums[i];
    maxDiff = max(maxDiff, currentElement - minNum);
    minNum = min(minNum, currentElement);
  }
  return maxDiff;
}

int main()
{
  cout << maxDifferenceOptimized({2, 3, 10, 6, 4, 8, 1}) << endl;
  return 0;
}