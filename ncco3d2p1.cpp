#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=5*1e4+5;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int max(int a, int b) {return (a>b)?a:b;}
int min(int a, int b) {return (a<b)?a:b;}
int a[MAX], mi[MAX*2], ma[MAX*2], n, q;
int ran(int a, int b) {
    int mini=INF, maxi=-INF;
    a+=n, b+=n;
    while (a<b) {
        if (a%2==1) {
            mini=min(mini,mi[a]);
            maxi=max(maxi, ma[a]);
            a++;
        }
        if (b%2==1) {
            b--;
            mini=min(mini,mi[b]);
            maxi=max(maxi, ma[b]);
        }
        a/=2,b/=2;
    }
    return maxi-mini;
}
void sprs(){
    for (int i=1; i<=n; i++) mi[i+n]=a[i], ma[i+n]=a[i];
    for (int i=n-1; i>=0; i--) mi[i]=min(mi[i*2],mi[2*i+1]), ma[i]=max(ma[i*2], ma[2*i+1]);
}
int32_t main() {
    fio;
    cin>>n>>q;
    for (int i=1; i<=n; i++) cin>>a[i];
    sprs();
    while (q--) {
        int a, b; cin>>a>>b;
        cout<<ran(a,b+1)<<endl;
    }
}