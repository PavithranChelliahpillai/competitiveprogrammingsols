#include <bits/stdc++.h>
using namespace std;
#define int long long int
vector<int>a[51];
vector<int>w;
int k[51];
bool u[51];
queue<int>b;
void z(int b, int c) {
  a[b].push_back(c); a[c].push_back(b);
}
void y(int j) {
  b.push(j); u[j]=true;
  while (!b.empty()) {
    int m=b.front(); b.pop();
    for (int v:a[m]) {
      if (!u[v]) {
        k[v]=k[m]+1;
        u[v]=true;
        b.push(v);
      }
    }
  }
}
int32_t main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string e;
  z(2,6);z(1,6);z(3,6);z(4,6);z(5,6);z(7,6);z(3,4);z(5,4);z(3,5);z(3,15);z(15,13);z(13,14);z(13,12);z(11,12);z(9,12);z(11,10);z(9,10);z(9,8);z(7,8);z(17,16);z(18,16);z(17,18);
  while (cin>>e&&e!="q") {
    int c,d;
    if (e=="i") {
      cin>>c>>d;
      if (!(find(a[c].begin(),a[c].end(),d)!=a[c].end())) z(c,d);
      if (!(find(a[d].begin(),a[d].end(),c)!=a[d].end())) z(c,d);
    }
    else if (e=="d") {
      cin>>c>>d;
      a[c].erase(std::remove(a[c].begin(),a[c].end(),d),a[c].end());
      a[d].erase(std::remove(a[d].begin(),a[d].end(),c),a[d].end());
    }
    else if (e=="n") {
      cin>>c; cout<<a[c].size()<<endl;
    }
    else if (e=="f") {
      cin>>c;
      memset(u,false,sizeof(u));
      memset(k,0,sizeof(k));
      int l=0; y(c);
      for (int i=1; i<51; i++) {
        if (k[i]==2) l++;
      }
      cout<<l<<endl;
    }
    else if (e=="s") {
      cin>>c>>d;
      memset(u,false,sizeof(u));
      memset(k,0,sizeof(k));
      y(c); 
      cout<<((u[d])?to_string(k[d]):"Not connected")<<endl;
    }
  }
}