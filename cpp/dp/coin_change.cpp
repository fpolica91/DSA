#include <bits/stdc++.h>
using namespace std;

int coin_helper(vector<int> coins, int amount, int i)

{
  if (amount == 0)
  {
    return 1;
  }
  if (i == coins.size())
  {
    return 0;
  }

  int res = coin_helper(coins, amount, i + 1);
  if (coins[i] <= amount)
  {
    res = res + coin_helper(coins, amount - coins[i], i);
  }

  return res;
}

vector<vector<int>> memo;
int coin_helper_iterative(vector<int> coins, int sum)
{
  int n = coins.size();
  int memo[sum + 1][n + 1];
  for (int i = 0; i <= n; i++)
  {
    memo[0][i] = 1;
  }
  for (int i = 0; i <= sum; i++)
  {
    memo[i][0] = 0;
  }

  for (int i = 1; i <= sum; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      memo[i][j] = memo[i][j - 1];
      if (coins[j - 1] <= i)
      {
        int prev = coins[j - 1];
        memo[i][j] += memo[i - prev][j];
      }
    }
  }
  return memo[sum][n];
}

int coin_change(vector<int> coins, int amount)
{
  return coin_helper(coins, amount, 0);
}

int main()
{

  cout << coin_change({1, 2, 3}, 4) << endl;
  cout << coin_helper_iterative({1, 2, 3}, 4) << endl;
  return 0;
}
