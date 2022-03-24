#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
const int MAX=1e9;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
template <class T, class Compare>  const T& max(const T& a, const T& b, Compare comp); 
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
#pragma GCC optimize("O3","unroll-loops")
#pragma GCC optimize("trapv")
#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int n,m,k,q;
int x[2005],y[2005];
short diff[4005][4005];
map<int,int>cx,cy;
struct rect{int x1,x2,y1,y2;} w[2005];
long long garea (int q) {
    memset(diff, 0, sizeof(diff));  
    memset(w, 0, sizeof(w));  
    cx.clear(); cy.clear();
    long long ans=0;
    for (int i=1; i<=k; i++) {
        w[i].x1=max(x[i]-q-1,0); w[i].x2=min(x[i]+q,n);
        w[i].y1=max(y[i]-q-1,0); w[i].y2=min(y[i]+q,m);
        cx[w[i].x1]=cx[w[i].x2]=0; cy[w[i].y1]=cy[w[i].y2]=0;
    }
    int countx=1,county=1; vector<int>rx,ry;
    for (auto &i:cx) {i.second=countx++; rx.push_back(i.first);}
    for (auto &i:cy) {i.second=county++; ry.push_back(i.first);}
    for (int i=1; i<=k; i++) {
        int x1=cx[w[i].x1];
        int x2=cx[w[i].x2];
        int y1=cy[w[i].y1];
        int y2=cy[w[i].y2];
        diff[x1][y1]++; diff[x2][y2]++;
        diff[x1][y2]--; diff[x2][y1]--;
    }
    for (int i=1; i<countx; i++) {
        for (int j=1; j<county; j++) {
            diff[i][j]+=diff[i-1][j]+diff[i][j-1]-diff[i-1][j-1];
            if (diff[i][j]>0) ans+= (long long) (rx[i]-rx[i-1])*(ry[j]-ry[j-1]);
        }
    }
    return ans;
}
int32_t main() {
    fio;
    cin>>n>>m>>k;
    for (int i=1; i<=k; i++) cin>>x[i]>>y[i];
    cin>>q;
    if (q==0) {cout<<k<<endl; return 0;}
    cout<<garea(q)-garea(q-1)<<endl;
}