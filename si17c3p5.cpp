#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e5+5;
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
int n, a, b, ans; char c;
vector<pair<int,int>>adj[MAX];
unordered_map<int,int>mp;
#define dst first
#define wt second
bool block[MAX]; int sz[MAX];
void dfs(int v, int p) {
    sz[v]=1;
    for (auto i:adj[v]) {
        if (i.dst==p || block[i.dst]) continue;
        dfs(i.dst, v);
        sz[v]+=sz[i.dst];
    }
}
int cent(int v, int p, int tot) {
    for (auto i:adj[v]) {
        if (i.dst!=p&&!block[i.dst]&&sz[i.dst]*2>tot) 
        return cent(i.dst, v, tot);
    }
    return v; 
}
void getpath (int v, int p, int d, vector<int>&path) {
    ans+=mp[1-d]+mp[-1-d];
    path.pb(d);
    for (auto i:adj[v]) {
        if (i.dst!=p&&!block[i.dst]) 
        getpath(i.dst, v, d+i.wt, path);
    }
}
void solve (int rt, int p) {
    dfs(rt, 0); rt=cent(rt, 0, sz[rt]); block[rt]=1;
    mp.clear(); mp[0]=1;
    for(auto i : adj[rt]) {
        vector<int>path; 
        if (!block[i.dst]) getpath(i.dst, rt, i.wt, path);
        for (auto x:path) mp[x]++;
    }
    for (auto i: adj[rt]) 
    if (!block[i.dst]) solve(i.dst, rt);
}
int32_t main() {
    fio;
    cin>>n;
    for (int i=1, w; i<=n-1; i++) {
        cin>>a>>b>>c;
        w=(c=='r')?1:-1;
        adj[a].pb({b, w}); adj[b].pb({a, w});
    }
    solve(1, 0); 
    cout<<ans-n+1<<endl;
}