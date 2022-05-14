#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e6+5;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define pb push_back
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f3f3f3f3f
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
int min(int a, int b) {return (a<b)?a:b;}
int ceil (int x, int y) {return (x+y-1)/y;}
int n, n2, ans;
#define a first
#define b second
typedef pair<int,int>pi;
bool compare(pi x, pi y) {return (x.b<y.b||(x.b==y.b&&x.a<y.b));}
pi c2[MAX];
int32_t main() {
    fio;
    scan(n); vector<pi>c;
    for (int i=0, s, e; i<n; i++) {
        scan(s); scan(e); 
        c.pb({s, e});
    }
    sort(c.begin(), c.end(), compare);
    n2=0;
    for (int i=0;i <n; i++) {
        while (n2>0&&c[i].a<=c2[n2-1].a) n2--; 
        c2[n2++]=c[i];
    }
    for (int i=0, j=0; i<n;) {
        while (j+1<n2&&c2[j+1].a<c[i].b) j++;
        ans++;
        while (i<n&&c[i].a<c2[j].b) i++;
    }
    cout<<ans<<endl;
}