#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e6;
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
int n, k, f, cntr=0, maxd=0, num=0, ans1, ans2; vector<int>g, adj[MAX];
bool req[MAX];
bool dfs (int v, int p, int dep) {
    bool reqv=req[v];
    if (reqv) maxd=max(maxd, dep);
    for (auto u: adj[v]) {
        if (u==p || !dfs(u, v, dep+1)) continue;
        reqv=1, num++;
    }
    return reqv;
}
int32_t main() {
    fio;
    scan(n); scan(k); scan(f);
    g.resize(k); for (auto &i:g) scan(i);
    for (int i=0, a, b; i<n-1; i++) {scan (a); scan(b); adj[a].pb(b), adj[b].pb(a);}
    for (auto i:g) req[i]=1;
    dfs (1, -1, 0);
    ans1=num*2-maxd, req[f]=1, num=maxd=0;
    dfs (1, -1, 0);
    cout<<min(num, ans1)<<endl;
}