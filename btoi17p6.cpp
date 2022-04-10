#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e7;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int n, d, dis[MAX]; vector<int>adj[MAX];
int ans;
void dfs (int u) {
    deque<int>q; 
    for (int v: adj[u]) {
        dfs(v); q.push_back(dis[v]+1); 
    }
    sort(q.begin(),q.end());
    while (q.size()>=2&&q[0]+q[1]<d) {
        q.pop_front(); ans--;
    }
    if (!q.empty()) dis[u]=q[0]%d;
    if (dis[u]==0) ans++;
}
int32_t main() {
    fio;
    cin>>n>>d;
    for (int i=1; i<n; i++) {
        int a; cin>>a;
        adj[a].push_back(i);
    }
    dfs(0); cout<<ans<<endl;
}