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
    int a,b; string c; cin>>a>>b>>c; vector<int>d(a+10); fill(d.begin(),d.end(),0);
    for (int i=0; i<a; i++) {
        if (c[i]=='1') continue;
        else if (i==0) d[i]++;
        else {d[i]=d[i-1]+1; d[i-1]=0;}
    }
    sort(d.begin(),d.end(),greater<int>()); 
    int sol=0;
    for (int i=0; i<b; i++) sol+=d[i];
    //for (auto i:d) cout<<i<<' '; cout<<endl;
    cout<<sol<<endl;
}