#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
  int a; cin>>a;
  vector<int>b(7);
  fill(b.begin(),b.end(),0);
  for (int i=0; i<a; i++) {
    string c; cin>>c;
    if (c=="red") b[0]++;
    else if (c=="orange") b[1]++;
    else if (c=="yellow") b[2]++;
    else if (c=="green") b[3]++;
    else if (c=="blue") b[4]++;
    else if (c=="black") b[5]++;
  }
  int d=*max_element(b.begin(),b.end());
  cout<<min(d,a-d+1)+a-d<<endl;
}