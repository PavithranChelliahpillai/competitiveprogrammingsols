#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);  
  cin.tie(NULL);
  long long a,e,g; cin>>a; bool r=false;
  long long b=1,c=2;
  long long min_val = 1e6;
  vector<long long>f; 
  long long n=0;
  for(long long i=0; i<a-1; i++){
    cout<<"? "<<b<<" "<<c<<"\n"<<flush; cin>>e;
    if (e==3||e==2) n++;
    f.push_back(e);
    min_val = min(e,min_val);
    c++;
  }
  long long m;
  if (n==2) r=true;
  min_val = (r) ? 1 : min_val;
  cout << "! " << min_val << " ";
  for (long long i=0; i<f.size()-1; i++) cout<<f[i]/min_val<<" ";
  cout<<f[f.size()-1]/min_val<<"\n";
}