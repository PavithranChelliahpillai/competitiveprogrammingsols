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
int t, n, m, g, dist[MAX];
vector<int>strs;
vector<pair<int,int>>adj[MAX];
#define d second
#define w first
void dijk (int src) {
    dist[src]=0; 
    priority_queue<pair<int,int>>pq; pq.push({0, 0});
    while (!pq.empty()) {
        auto cur=pq.top(); pq.pop();
        for (auto i:adj[cur.d]) {
            int temp=dist[cur.d]+i.w;
            if (temp<dist[i.d]) {
                dist[i.d]=temp; pq.push({i.w, i.d});
            }
        }
    }
}
int32_t main() {
    fio;
    scan(t); scan(n); scan(m); scan(g);
    for (int i=0, a; i<g; i++) {scan(a); strs.pb(a);}
    for (int i=0, s, dv, wv; i<m; i++) {scan(s); scan(dv); scan(wv); adj[s].pb({wv, dv});}
    for (int i=0; i<MAX; i++) dist[i]=INF; 
    dijk(0); 
    int ans=0;
    for (auto i:strs) if (dist[i]<=t) ans++;
    cout<<ans<<endl;
}