#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e6;
const int MOD=1e9+7;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
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
vector<int>adj[MAX]; int dp[MAX], ans, clr[MAX];
void dfs (int v, int p, int tot) {
    int v1=0, v2=0; 
    for (auto u: adj[v]) {
        if (u==p) continue;
        dfs(u, v, tot); 
        v2+=(v1+v2)*dp[u];
        v1+=dp[u]; 
        v1%=MOD, v2%=MOD;
    }
    if (clr[v]==tot) {
        dp[v]=(1+v1+v2)%MOD;
        ans=(ans+dp[v])%MOD;
    }
    else {
        dp[v]=(v1+v2)%MOD;
        ans=(ans+v2)%MOD;
    }
}
int n; string s;
int32_t main() {
    fio;
    cin>>n>>s;
    for (int i=1; i<=n; i++) clr[i]=s[i-1]=='R';
    for (int i=1, u, v; i<n; i++) {
        cin>>u>>v;
        adj[u].pb(v), adj[v].pb(u);
    }
    dfs(1,0,1); dfs(1,0,0);
    cout<<ans<<endl;
}