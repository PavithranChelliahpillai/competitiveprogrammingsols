#include<bits/stdc++.h>
using namespace std;
#define int long long int
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
    int a,b; cin>>a>>b; vector<pair<pair<int,int>,pair<int,int>>>p;
    for (int i=0; i<a; i++) {
        int e,f,g,h; cin>>e>>f>>g>>h;
        p.push_back(make_pair(make_pair(e,f),make_pair(g,h)));
    }
    sort(p.begin(),p.end());
    
}