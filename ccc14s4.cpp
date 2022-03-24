#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e9;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
template <class T, class Compare>  const T& max(const T& a, const T& b, Compare comp); 
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
struct rect{int x1,y1,x2,y2, t;};
int32_t main() {
    fio;
    int n,tval; cin>>n>>tval;
    vector<rect>pts;
    map<int,int>mx,my;
    int vx[2005],vy[2005],diff[2005][2005];
    for (int i=0; i<2005; i++) {
        vx[i]=0; vy[i]=0;
        for (int j=0; j<2005; j++) {
            diff[i][j]=0;
        }
    }
    for (int i=0, x1, x2, y1, y2, T; i<n; i++) {
        cin>>x1>>y1>>x2>>y2>>T;
        pts.push_back({x1, y1, x2, y2, T});
        mx.emplace(x1,1); mx.emplace(x2,1);
        my.emplace(y1,1); my.emplace(y2,1);
    }
    int cx,cy;
    for (auto i:mx) {
        mx[i.first]=++cx; vx[cx]=i.first;
    }
    for (auto i:my) {
        my[i.first]=++cy; vy[cy]=i.first;
    }
    for (auto i: pts) {
        int x1=mx[i.x1], x2=mx[i.x2], y1=my[i.y1], y2=my[i.y2], T=i.t;
        diff[x1][y1]+=T;
        diff[x1][y2]-=T;
        diff[x2][y1]-=T;
        diff[x2][y2]+=T;
    }
    int ans=0;
    for (int i=1; i<=cx; i++) {
        for (int j=1; j<=cy; j++) {
            diff[i][j]+=diff[i][j-1]+diff[i-1][j]-diff[i-1][j-1];
            if (diff[i][j]>=tval) ans+=(long long)(vx[i+1]-vx[i])*(vy[j+1]-vy[j]);
        }
    }
    cout<<ans<<endl;
}