#include <bits/stdc++.h>

using namespace std;

int main() {
    const int INF = 0x3f3f3f3f;
    int n;
    vector<int> h(100005,INF), dp(100005,INF);
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> h[i];
    }
    dp[0] = 0;
    dp[1] = abs(h[1]-h[0]);
    for(int i=2;i<n;i++) {
        dp[i] = min(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
        dp[i] = min(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout << dp[n-1];
}