#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e5;
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
int n, dis[MAX], cnt[MAX], d=0, num=0; vector<int>adj[MAX];
void dfs(int v, int p) {
    dis[v]=0; cnt[v]=1;
    for (int u:adj[v]) {
        if (u==p) continue;
        dfs(u, v); 
        if (dis[v]+dis[u]+1>d) d=dis[v]+dis[u]+1, num=cnt[v]*cnt[u];
        else if (dis[v]+dis[u]+1==d) num+=cnt[v]*cnt[u];
        if (dis[u]+1>dis[v]) dis[v]=dis[u]+1, cnt[v]=cnt[u];
        else if (dis[u]+1==dis[v]) cnt[v]+=cnt[u];
    }
}
int32_t main() {
    fio;
    memset(dis, 0, sizeof(dis)); memset(cnt, 0, sizeof(cnt));
    scan(n); n--;
    while (n--) {
        int a, b; scan(a); scan(b);
        adj[a].pb(b); adj[b].pb(a);
    }
    dfs(1, -1); 
    cout<<num<<endl;
}