#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=200000;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define pb push_back
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f3f3f3f3f
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int max(int a, int b) {return (a>b)?a:b;}
int min(int a, int b) {return (a<b)?a:b;}
int ceil (int x, int y) {return (x+y-1)/y;}
typedef pair<int,int>pi;    
#define dst first
#define wt second
int n, k, sz[MAX], centr, ans=INF; vector<pi>adj[MAX];
unordered_map<int,int>cnt[MAX];
bool block[MAX];
void dfs (int v, int p) {
    sz[v]=1;
    for (auto u: adj[v]) {
        if (u.dst==p || block[u.dst]) continue;
        dfs(u.dst, v); 
        sz[v]+=sz[u.dst];
    }
}
int cent (int v, int p, int tot) {
    for (auto u: adj[v]) {
        if (!block[u.dst]&&u.dst!=p&&sz[u.dst]*2>tot) 
        return cent(u.dst, v, tot);
    }
    return v;
}
void dfs1 (int u, int p , int lvl, int w) {
    if (k>=w && cnt[centr].find(k-w)!=cnt[centr].end()) 
    ans=min(ans, lvl+cnt[centr][k-w]);
    for (auto v: adj[u]) {
        if (v.dst==p || block[v.dst]) continue;
        dfs1(v.dst, u, lvl+1, w+v.wt);
    }
}
void dfs2 (int u, int p, int lvl, int w) {
    if (cnt[centr].find(w)==cnt[centr].end()) 
    cnt[centr][w]=lvl;
    else
    cnt[centr][w]=min(cnt[centr][w], lvl);
    for (auto v: adj[u]) {
        if (v.dst==p || block[v.dst]) continue;
        dfs2(v.dst, u, lvl+1, w+v.wt);
    }
}
int solve (int u) {
    dfs(u, -1); int p=cent(u, -1, sz[u]); centr=p;
    block[p]=true; cnt[centr][0]=0;
    for (auto v: adj[p]) {
        if (block[v.dst]) continue;
        dfs1(v.dst, p, 1, v.wt); 
        dfs2(v.dst, p, 1, v.wt);
    }
    for (auto v: adj[p]) {
        if (block[v.dst]) continue;
        int q=solve(v.dst);
    }
    // cout<<p<<endl;
    return p;
}
int32_t main() {
    fio;
    cin>>n>>k; 
    for (int i=0, x, y, w; i<n-1; i++) {
        cin>>x>>y>>w;
        adj[x].pb({y, w}); adj[y].pb({x, w});
    }
    solve(0);
    cout<<(ans==INF?-1:ans)<<endl;
}