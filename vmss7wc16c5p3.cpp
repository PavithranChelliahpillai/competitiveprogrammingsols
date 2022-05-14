#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e4+10;
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
int n, x, y; vector<int>adj[MAX];
int updist[MAX], downdist[MAX];
void dfs(int v, int p, int d[]) {
    for (auto i:adj[v]) {
        if (i==p) continue;
        d[i]=d[v]+1;
        dfs(i, v, d);
    }
}
int fur(int d[]) {return (int) (max_element(d+1, d+n+1)-d);}
int32_t main() {
    memset(updist, 0, sizeof(updist));
    memset(downdist, 0, sizeof(downdist));
    fio; scan(n);  
    for (int i=1; i<n; i++) {
        scan(x); scan(y);
        adj[x].pb(y), adj[y].pb(x);
    }    
    dfs(1, -1, updist);
    dfs(fur(updist), -1, downdist);
    memset(updist, 0, sizeof(updist));
    dfs(fur(downdist), -1, updist);
    int sol=0;
    for (int i=1; i<=n; i++) sol=max(sol,max(updist[i], downdist[i]));
    cout<<sol<<endl;
}