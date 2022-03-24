#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=4e5+10;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
#define sl " "
#pragma GCC optimize("O3","unroll-loops")
#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int n, d=0, num=0, dis[MAX], cnt[MAX];
vector<int>adj[MAX];
void dfs (int v, int pa) {
    dis[v]=0; cnt[v]=1;
    for (int idx: adj[v]) {
        if (idx==pa) continue;
        dfs(idx,v);
        if (dis[v]+dis[idx]+1>d) {
            d=dis[v]+dis[idx]+1;
            num=cnt[v]*cnt[idx];
        }
        else if (dis[v]+dis[idx]+1==d) num+=cnt[v]*cnt[idx];
        if (dis[idx]+1>dis[v]) {
            dis[v]=dis[idx]+1; cnt[v]=cnt[idx];
        }
        else if (dis[idx]+1==dis[v]) cnt[v]+=cnt[idx];
    }
}
int32_t main() {
    fio;
    cin>>n;
    for (int i=1; i<n; i++) {
        int u,v; cin>>u>>v;
        adj[u].push_back(v); adj[v].push_back(u);
    }
    dfs (1,-1);
    cout<<d+1<<sl<<num<<endl;
}