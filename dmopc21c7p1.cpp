#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e9;
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
int n,m; 
int32_t main() {
    // fio;
    scan(n); scan(m);
    int grid[n+5][m+5];
    for (int i=0; i<=n; i++) for (int j=0; j<=m; j++) grid[i][j]=0;
    for (int i=1; i<=n; i++) for (int j=1; j<=m; j++) scan(grid[i][j]);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (grid[i][j]!=0) continue;
            grid[i][j]=max(grid[i-1][j]+1, grid[i][j-1]+1);
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (grid[i][j]<=grid[i][j-1]||grid[i][j]<=grid[i-1][j]) {cout<<-1<<endl; return 0;}
        }
    } 
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
           cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}