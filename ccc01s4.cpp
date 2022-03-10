#include <bits/stdc++.h>
using namespace std;
#define int long double
int32_t main(){
  std::cout<<std::fixed;
  std::cout<<std::setprecision(2);
  int a,e,d,f,g,h=0,l=0; cin>>a; vector<pair<int,int>>b;
  for (int i=0; i<a; i++) {
    int c,d; cin>>c>>d;
    b.push_back(make_pair(c,d));
  }
  for (int i=0; i<a; i++) {
    for (int j=0; j<a; j++) {
      for (int k=0; k<a; k++) {
        if (i!=j&&j!=k&&k!=i) {
          e=pow(pow(b[i].first-b[j].first,2)+pow(b[i].second-b[j].second,2),0.5);
          d=pow(pow(b[i].first-b[k].first,2)+pow(b[i].second-b[k].second,2),0.5);
          f=pow(pow(b[k].first-b[j].first,2)+pow(b[k].second-b[j].second,2),0.5);
          g=(e+d+f)/2;
          if (g==0||e*e+d*d-f*f<0||d*d+f*f-e*e<0||f*f+e*e-d*d<0) {
            if (e>h) h=e;
            if (d>h) h=d;
            if (f>h) h=f;
          }
          else h=2*(e*d*f/(4*pow((g*(g-e)*(g-d)*(g-f)),0.5)));
          l=max(l,h);
        }
      }
    }
  }
  cout<<l<<endl;
}