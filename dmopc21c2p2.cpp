#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1000;
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
int n, q, b[MAX], e[MAX], sol[MAX], u, v;
int32_t main() {
    fio;
    cin>>n>>q; 
    for (int i=1; i<=n; i++) b[i]=e[i]=i;
    while (q--) {
        char c; cin>>c;
        if (c=='B' ) cin>>u>>v, swap(b[e[u]], b[e[v]]), swap(e[b[e[u]]], e[b[e[v]]]); 
        else if (c=='E') cin>>u>>v, swap(b[u], b[v]), swap(e[b[u]], e[b[v]]);
        else {
            for (int i=1, m; i<=n; i++) cin>>m, sol[b[i]]=m;
            for (int i=1; i<n; i++) cout<<sol[i]<<" ";
            cout<<sol[n]<<endl;
        }
    }
}