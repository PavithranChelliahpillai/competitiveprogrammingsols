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
int n,q, nxt[MAX], pre[MAX];
int32_t main() {
    fio;
    cin>>n>>q;
    for (int i=1; i<=n; i++) pre[i]=i-1, nxt[i]=i+1;
    nxt[0]=1, pre[n+1]=n;
    while (q--) {
        int l, r, k; cin>>l>>r>>k;
        if (k==pre[l]) continue;
        int pl=pre[l], nr=nxt[r], nk=nxt[k];
        nxt[pl]=nr, pre[nr]=pl, nxt[k]=l, pre[l]=k, nxt[r]=nk, pre[nk]=r;
    }
    for (int i=nxt[0]; i!=n+1; i=nxt[i]) cout<<i<<" ";
}