#include<bits/stdc++.h>
using namespace std;
//#define int long long int
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
    int n,m,k; cin>>n>>m>>k; vector<int>M; vector<bool>u(m+10); deque<int>nmax; map<int,int>nmin;
    for (int i=0; i<n; i++) {
        int a; cin>>a; nmax.push_back(a);
        nmin[a]=a-k;
    }
    for (int i=0; i<m; i++) {
        int a; cin>>a; M.push_back(a);
    }
    cout<<endl<<endl<<endl;
    sort(M.begin(),M.end()); sort(nmax.begin(),nmax.end());
    int t=0; bool posb=true;
    while (nmax.size()!=0) {
        int curr=nmax.front(),psbl=nmax.size(); 
        for (int i=0; i<m; i++) {
            
        }
    }
    if (posb) {cout<<t<<endl; return 0;}
    cout<<-1<<endl;
}