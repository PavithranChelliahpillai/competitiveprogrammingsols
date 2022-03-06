#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  int a,b; cin>>a>>b; vector<int>c,e(a+1);
  fill(e.begin(),e.end(),5281); e[0]=0;
  for (int i=0; i<a; i++) {int d; cin>>d; c.push_back(d);}
  for (int i=0; i<a+1; i++) {
    for (int j=0; j<e.size(); j++) {
      if (i+c[j]<=a) {
        if (e[i]+1<e[i+c[j]]) e[i+c[j]]=e[i]+1;
      }
    }
  }
  if (e[a]<5281) cout<<"Roberta wins in "<<e[a]<<" strokes."<<endl;
  else cout<<"Roberta acknowledges defeat."<<endl;
}