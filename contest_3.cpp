#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<int>> dp(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> dp[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i>0 && j>0){
                dp[i][j] = dp[i][j]+max({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
            }
            else if(i==0&&j>0){
                dp[i][j] = dp[i][j]+dp[i][j-1];
            }
            else if(j==0&&i>0){
                dp[i][j] = dp[i][j]+dp[i-1][j];
            }
            else if(i==0 && j==0){
                dp[i][j] = dp[i][j];
            }
        }
    }
    printf("%d\n", dp[n-1][m-1]);
}
