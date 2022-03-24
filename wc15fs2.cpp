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
vector<int>nmax;
//map<int,int>nmin;
vector<int>M;
int n,m,k;
bool sol(int a) {
  int x=0,y=0;
  for (int i=0; i<n; i++) {
    while (x<m&&(y==a||M[x]<nmax[i]-k||M[x]>nmax[i])) {
      x++; y=0;
    }
    if (x==m) return true;
    y++;
  }
  return x==m;
}
int32_t main() {
    fio;
    cin>>n>>m>>k; vector<bool>u(m+10); 
    for (int i=0; i<n; i++) {
        int a; cin>>a; nmax.push_back(a);
    }
    for (int i=0; i<m; i++) {
        int a; cin>>a; M.push_back(a);
    }
    sort(M.begin(),M.end()); sort(nmax.begin(),nmax.end());
    int lo=1,hi=n+1;
    while (lo<hi) {
      int m=(lo+hi)/2;
      if (sol(m)) lo=m+1;
      else hi=m;
    }
    if (hi>n) {cout<<-1<<endl; return 0;}
    cout<<hi<<endl;
}