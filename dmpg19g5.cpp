#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=2e6+5;
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
int n, k, sz[MAX], totcnt=0, freq[MAX], tmp[4*MAX], cnt[MAX], ans[MAX], par; vector<pi>adj[MAX], path;
bool block[MAX];
#define dst first
#define wt second
int gcd (int a, int b) {
    if (b==0) return a;
    return gcd(b, a%b);
}
void lf (int a, int b) {
    if (a==0) {cout<<"0 / 1"<<endl; return;}
    int d=gcd(a, b);
    a/=d, b/=d;
    cout<<a<<" / "<<b<<endl;
}
int cent(int v, int p, int tot) {
    for (auto i:adj[v]) {
        if (i.dst!=p&&!block[i.dst]&&sz[i.dst]*2>tot) 
        return cent(i.dst, v, tot);
    }
    return v; 
}
void getsz (int v, int p) {
    sz[v]=1;
    for (auto u: adj[v]) {
        if (!block[u.dst] && u.dst!=p) {getsz(u.dst, v); sz[v]+=sz[u.dst];}
    }
}   
void updt (int v, int p, int d, int val) {
    freq[d]+=val; tmp[par++]=d;
    for (auto u: adj[v]) {
        if (!block[u.dst] && u.dst!=p && d+u.wt<=k) 
        updt(u.dst, v, d+u.wt, val);
    }
}
void dfs (int v, int p, int d, int cent) {
    cnt[v]=freq[k-d], totcnt+=freq[k-d];
    if (d==k) totcnt++, cnt[cent]++;
    for (auto u: adj[v]) {
        if (!block[u.dst] && u.dst!=p && d+u.wt<=k)
        {dfs(u.dst, v, d+u.wt, cent); cnt[v]+=cnt[u.dst];}
    }
    ans[v]+=cnt[v];
}
void solve (int rt) {
    getsz(rt, -1); rt=cent(rt, -1, sz[rt]); block[rt]=1; freq[0]=1; cnt[rt]=0;
    par=0; tmp[par++]=0;
    for (auto u: adj[rt]) {
        if (!block[u.dst] && u.wt<=k) updt(u.dst, rt, u.wt, 1);
    }
    for (auto u: adj[rt]) {
        if (block[u.dst] || u.wt>k) continue;
        updt(u.dst, rt, u.wt, -1); 
        dfs(u.dst, rt, u.wt, rt); cnt[rt]+=cnt[u.dst];
        updt(u.dst, rt, u.wt, 1);
    }
    ans[rt]+=cnt[rt]/2;
    for (int i=0; i<par; i++) freq[tmp[i]]=0;
    for (auto u: adj[rt]) if (!block[u.dst]) solve(u.dst);
}
int32_t main() {
    fio;
    scan(n); scan(k);
    for (int i=1, a, b, c; i<n; i++) {scan(a); scan(b); scan(c); adj[a].pb({b, c}), adj[b].pb({a,c});}

    // dfs(1, -1); 
    // for (int i=1; i<=n; i++) cout<<sz[i]<<endl; cout<<endl;
    // int rt=1;
    // rt=cent(rt, 0, sz[rt]);
    // for (int i=0; i<MAX; i++) t[i]=0;
    // wts(rt, -1);
    // for (int i=1; i<=n; i++) cout<<adj[i][0].wt<<endl; cout<<endl;
    // for (int i=1; i<=n; i++) cout<<t[i]<<endl;

    solve(1); totcnt/=2;
    for (int i=1; i<=n; i++) lf(ans[i], totcnt);
}