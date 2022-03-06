#include<bits/stdc++.h>
using namespace std;
#define int long double
#define endl '\n'
#define fendl endl
#define fio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define INF 0x3f3f3f3f
#define MAX 1e9
//#pragma GCC optimize("O3","unroll-loops")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
int32_t main() {
    fio;
    vector<pair<int,int>>a;  
    int b; cin>>b; 
    vector<bool>v(b+5);
    for (int i=0;  i<b; i++) {
        int c,d; cin>>c>>d;
        a.push_back(make_pair(c,d));
    }
    for (int i=0; i<=1000; i+=0.01) {
        int e=INF; vector<int>z;
        for (int j=0; j<b; j++) {
            int d=pow(a[j].second,2)+pow(a[j].first-i,2);
            if (d<e) {
                z.clear(); e=d; z.push_back(j);
            }
            else if (e==d) z.push_back(j);
        }
        for (auto x:z) v[x]=true;
    }
    for (int i=0; i<b; i++) {
        if (v[i]) {
            cout<<fixed<<setprecision(2)<<"The sheep at ("<<a[i].first<<", "<<a[i].second<<") might be eaten."<<endl;
        }
    }
}