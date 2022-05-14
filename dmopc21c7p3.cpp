#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e6+10;
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
int n, m, a[MAX], val[MAX], out[MAX], ans;
bool done[MAX]; vector<int>adj[MAX];
queue<int>q;
int32_t main() {
    fio; scan(n); scan(m);
    for (int i=1; i<=n; i++) {scan(a[i]); val[i]=a[i];}
    for (int i=1, u, v; i<=m; i++) {
        scan(u); scan(v); 
        val[v]^=a[u]; out[u]++; adj[v].pb(u);
    }
    for (int i=1; i<=n; i++) if (!out[i]) q.push(i);
    while (!q.empty()) {
        int u=q.front(); q.pop();
        ans+=val[u], done[u]=true;
        for (auto v:adj[u]) {
            if (--out[v]==0) q.push(v);
        }
    }
    for (int i=1; i<=n; i++) {
        if (a[i]&&!done[i]) {cout<<-1<<endl; return 0;}
    }
    cout<<ans<<endl;
}