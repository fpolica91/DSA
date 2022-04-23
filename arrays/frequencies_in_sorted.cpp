#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void frequenciesInSortedNaive(vector<int> nums)
{
  unordered_map<int, int> freq;
  for (auto num : nums)
  {
    freq[num]++;
  }
  for (auto it = freq.begin(); it != freq.end(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }
}

int main()
{

  frequenciesInSortedNaive({2, 2, 2, 3, 3, 3, 20});
  return 0;
}