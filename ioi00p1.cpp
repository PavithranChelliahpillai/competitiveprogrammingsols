#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=5050;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define pb push_back
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f3f3f3f3f
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int max(int a, int b) {return (a>b)?a:b;}
int min(int a, int b) {return (a<b)?a:b;}
int ceil (int x, int y) {return (x+y-1)/y;}
int n, dp[2][MAX]; string s,r;
#define comp(x) (x)&1^1
int32_t main() {
    fio;
    cin>>n>>s;
    r=s; reverse(r.begin(), r.end());
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (s[i-1]==r[j-1]) dp[comp(i)][j]=dp[comp(i^1)][j-1]+1;
            else dp[comp(i)][j]=max(dp[comp(i^1)][j], dp[comp(i)][j-1]);
        }
    }
    cout<<n-dp[comp(n)][n]<<endl;
}