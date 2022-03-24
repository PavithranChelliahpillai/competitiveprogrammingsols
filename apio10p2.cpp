#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=100001;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
vector<vector<int>>adj(MAX);
vector<int>par(MAX);
vector<map<int,int>>use(MAX);
void dfs (int u, int pa, int d, int &D, int &N) {
    if (d>D) D=d,N=u;
    for (auto &i:adj[u]) {
        if (i==pa) continue;
        par[i]=u; 
        dfs(i, u, d+1, D, N);
    }
}
int mxr (int u, int pa, int &D) {
    int b1=0, b2=0; 
    for (auto &i:adj[u]) {
        if (i==pa) continue;
        int bt=mxr(i, u, D)+use[u][i];
        if (b1<=bt) {
            b2=b1; b1=bt; 
        }
        else if (b2<=bt) b2=bt; 
    }
    D=max(D, b1+b2);
    return b1;
}
int32_t main() {
    fio;
    int n, k; cin>>n>>k;
    for (int i=0; i<n-1; i++) {
        int a,b; cin>>a>>b;
        adj[a].push_back(b); adj[b].push_back(a);
    }
    int d=0, d2=0, n1=1, n2=1; 
    dfs(n1, n1, 0, d=0, n1); dfs(n1, n1, 0, d=0, n2);
    if (k==2) {
        for (int i=1; i<=n; i++) {
            for (auto &j: adj[i]) {
                use[i][j]=1; 
            }
        }
        for (int i=n2; i!=n1; i=par[i]) {
            use[i][par[i]]=use[par[i]][i]=-1;
        }
        mxr(1, 1, d2);
    }
    cout<<2*(n-1)-d+k-(k-1)*d2<<endl;
}