#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e6;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
// #define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
// char _;
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int max(int a, int b) {return (a>b)?a:b;}
int min(int a, int b) {return (a<b)?a:b;}
int ceil (int x, int y) {return (x+y-1)/y;}
int dp[MAX][3];
bool is[MAX]; int a[MAX];
vector<int>adj[MAX];

void dfs(int v, int p){
    int sum0=0, sum1=0, sum2=0, mn1=INF, mn2=INF;
    for (int to:adj[v]){
        if (to==p) continue;
        dfs(to, v);
        sum0+=dp[to][0];
        sum1+=dp[to][1];
        sum2+=dp[to][2];
        mn1=min(mn1, -dp[to][1] + dp[to][2]);
        mn2=min(mn2, -dp[to][0] + dp[to][2] + a[v]);
    }
    if (is[v]){
        dp[v][0]=sum1;
        dp[v][1]=sum1;
        dp[v][2]=sum0 + a[v];
    }
    else{
        dp[v][0]=min(sum0 + a[v], sum1);
        dp[v][1]=sum1 + mn1;
        dp[v][2]=sum0 + mn2;
    }
    dp[v][1]=min(dp[v][1], dp[v][2]);
    dp[v][0]=min(dp[v][0], dp[v][1]);
}

int32_t main(){
    fio;
    int n; cin>>n;
    for (int i=1; i<=n-1; ++i){
        int a, b; cin>>a>>b;
        adj[a].push_back(b),adj[b].push_back(a);
    }
    for (int i=1; i<=n; ++i){
        char c; cin>>c;
        is[i]=c=='Y';
    }
    for (int i=1; i<=n; ++i) cin>>a[i];
    dfs(1, 1);
    cout<<dp[1][1]<<endl;
}