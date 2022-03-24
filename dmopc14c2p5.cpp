#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define endl '\n'
#define fendl endl
#define INF 0x3f3f3f3f
#define MAXN 1000001
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int cont[MAXN];
long double dp[MAXN];
int32_t main() {
    int n,m; cin>>n>>m; 
    vector<vector<int>>adj(n);  
    for (int i=0; i<m; i++) {
        int a,b; cin>>a>>b;
        a--; b--;
        adj[a].push_back(b);
        cont[a]++;
    }
    dp[0]=1;
    for (int i=0; i<n; i++) {
        long double pro=dp[i]/adj[i].size();
        for (int x:adj[i]) dp[x]+=pro;
        if (cont[i]==0) cout<<std::setprecision(9)<<dp[i]<<endl;
    }
}