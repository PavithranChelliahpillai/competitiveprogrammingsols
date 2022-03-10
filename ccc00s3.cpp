#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  int a; cin>>a; map<string,vector<string>>z; map<string,bool>r;
  for (int i=0; i<a; i++) {
    string b,c; cin>>b;
    getline(cin,c);
    while (c.find("</HTML>")==string::npos) {
      while (c.find("<A HREF=")!=string::npos) {
        auto f=c.find("<A HREF=")+9;
        auto g=c.find(">",f)-1;
        string h=c.substr(f,g-f);
        c.erase(0,g+2);
        cout<<"Link from "<<b<<" to "<<h<<endl;
        z[b].push_back(h);
        r[b]=false;
      }
      getline(cin,c);
    }
  } 
  string m; cin>>m;
  while (1) {
    string w; cin>>w; bool k=false; if(m=="The"&&w=="End") return 0;
    stack<string>s={}; map<string,bool>f(r);
    s.push(m);
    while (!s.empty()) {
      string l=s.top(); s.pop(); 
      if (l==w) {k=true; break;}
      if (!f[l]) {
        f[l]=true;
        for (int i=0; i<z[l].size(); i++) {
          if (!f[z[l][i]]) s.push(z[l][i]); 
        }
      }
    }
    if (k) cout<<"Can surf from "<<m<<" to "<<w<<'.'<<endl;
    else cout<<"Can't surf from "<<m<<" to "<<w<<'.'<<endl;
    cin>>m;
  }
}