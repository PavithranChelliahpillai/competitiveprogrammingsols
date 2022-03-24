#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<pair<int, int> , null_type, less<pair<int, int>>, rb_tree_tag,tree_order_statistics_node_update> oset; oset bst;
//#define endl '\n'
#define fendl endl
//#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
const int MAX = 3e5+10;
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
void updt(int i,int v, int bit[], int end) {
    while(i<=end) {
       bit[i] += v;
       i=i+(i&-i);
    }
}
void updtfrq(int i,int v, int frq[]) {
    while(i<=100000) {
       frq[i]+=v;
       i=i+(i&-i);
    }
}
int frqsum(int i, int frq[]) {
   int z = 0;
    while(i>0) {
       z+=frq[i];
       i=i-(i&-i);
    }
    return z;
}
int sum(int i, int bit[]) {
   int z = 0;
    while(i>0) {
       z+=bit[i];
       i=i-(i&-i);
    }
    return z;
}
struct event{
    int x, lo, hi, val;
};
bool compare (event a, event b) {
    return a.x<b.x||a.x==b.x&&a.val>b.val;
}
map<int, int>cy; int bit[3*MAX]; vector<event>evs;
signed main() {
    //fio;
    int n=0,m=0; cin>>n>>m; 
    for (int i=0; i<3*MAX; i++) bit[i]=0;
    for (int i=1, x1, x2, y1, y2; i<=n; i++) {
        cin>>x1>>y1>>x2>>y2;
        evs.push_back(event{x1, y1, y2, 1});
        evs.push_back(event{x2, y1, y2, -1});
        cy[y1]=cy[y2]=0;
    }
    for (int i=1, x, y; i<=m; i++) {
        cin>>x>>y; evs.push_back(event{x, y, y, 0});
        cy[y]=0;
    }
    int cnt=0, ans=0; 
    for (auto &i:cy) i.second=++cnt;
    sort(evs.begin(),evs.end(), compare);
    for (event &i:evs) {
        if (i.val) {updt(cy[i.lo],i.val, bit, 3*MAX); updt(cy[i.hi]+1,-i.val, bit, 3*MAX);}
        else ans+=(sum(cy[i.lo], bit)>0);
    }
    cout<<ans<<endl;
}