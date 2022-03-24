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
int n, ans; 
struct segs{
    int k, l, h, f;
}sx[10005], sy[10005];
int cnt[10005];
bool compare (segs a,segs b){
    return a.k<b.k||(a.k==b.k&&a.f>b.f);
}
int32_t main() {
    fio;
    for (int i=0; i<10005; i++) cnt[i]=0;
    cin>>n; 
    int tx=0,ty=0;
    vector<int>px,py;
    for (int i=0, x1, x2, y1, y2; i<n; i++) {
        cin>>x1>>y1>>x2>>y2;
        sy[ty++]=segs{x1,y1,y2,1};
        sy[ty++]=segs{x2,y1,y2,0};
        sx[tx++]=segs{y1,x1,x2,1};
        sx[tx++]=segs{y2,x1,x2,0};
        px.push_back(x1), px.push_back(x2), py.push_back(y1), py.push_back(y2);
    }
    sort(sy, sy+ty, compare), sort(sx, sx+tx, compare);
    sort(py.begin(),py.end()), sort(px.begin(),px.end());
    for (int i=0; i<ty; i++) {
        int l=lower_bound(py.begin(),py.end(),sy[i].l)-py.begin();
        int r=lower_bound(py.begin(),py.end(),sy[i].h)-py.begin();
        if (sy[i].f) {
            for (int j=l; j<r; j++) {
                if (!cnt[j]) ans+=py[j+1]-py[j];
                cnt[j]++;
            }
        }
        else {
            for (int j=l; j<r; j++) {
                cnt[j]--; 
                if(!cnt[j]) ans+=py[j+1]-py[j];
            }
        }        
    }
    for (int i=0; i<tx; i++) {
        int l=lower_bound(px.begin(),px.end(),sx[i].l)-px.begin();
        int r=lower_bound(px.begin(),px.end(),sx[i].h)-px.begin();
        if (sx[i].f) {
            for (int j=l; j<r; j++) {
                if (!cnt[j]) ans+=px[j+1]-px[j];
                cnt[j]++;
            }
        }
        else {
            for (int j=l; j<r; j++) {
                cnt[j]--; 
                if(!cnt[j]) ans+=px[j+1]-px[j];
            }
        }        
    }
    cout<<ans<<endl;
}