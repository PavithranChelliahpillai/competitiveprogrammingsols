#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using namespace std;
#define int long long int
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
const int MAX=6e5+10;
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
bool cmp(pair<int,int> a, pair<int,int>b) {
    return a.second < b.second;
}
void updt(int i,int v, int (&bit)[MAX], int end) {
    while(i<=end) {
       bit[i] += v;
       i=i+(i&-i);
    }
}
int sum(int i, int (&bit)[MAX]) {
   int z = 0;
    while(i>0) {
       z+=bit[i];
       i-=(i&-i);
    }
    return z;
}
int32_t main() {
    fio;
    int ytot[MAX];
    map<int,int>xy,coordc;
    set<int>ry; 
    map<int,vector<int>>rx;
    set<int>xs,ys;
    int n,m; cin>>n>>m;
    for (int i=0; i<n; i++) {
        int x,y; cin>>x>>y;
        xs.emplace(x); ys.emplace(y);
        rx[x].emplace_back(y); ry.emplace(y);
    }
    for (int i=0; i<m; i++) {
        int x,y; cin>>x>>y; 
        xs.emplace(x); ys.emplace(y);
        xy[x]=y;
    }
    int c=1;
    for (auto y:ys) {
        coordc[y]=c;
        int z=y;
        if (ry.count(z)) ytot[c]++;
        c++;
    }
    for (int i=1; i<MAX; i++) {
        int node=i+(i&-i);
        if (node<MAX) ytot[node]+=ytot[i];
    }
    int ans=0;
    for (auto i:xs) {
        if (xy.count(i)) {
            ans+=(long long)sum(coordc[xy[i]],ytot);
        }
        if (rx.count(i)) {
            for (auto yr:rx[i]) {
                updt(coordc[yr],-1,ytot,MAX);
            }
        }
    }
    cout<<ans<<endl;
}