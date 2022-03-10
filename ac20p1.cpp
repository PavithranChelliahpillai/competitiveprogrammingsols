#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a;
  cin>>a;
  vector<long long>x;
  for (long long i=0; i<a; i++) {
    long long b,c,d;
    cin>>b>>c>>d;
    x.push_back(b);
    x.push_back(c);
    x.push_back(d);
    sort(x.begin(), x.end(), greater<long long>());
    long long e=x[0]*x[0];
    long long f=x[1]*x[1];
    long long g=x[2]*x[2];
    if (e==f+g) {
      cout<<"R"<<endl;
    }
    else if (e>f+g) {
      cout<<"O"<<endl;
    }
    else {
      cout<<"A"<<endl;
    }
    x.clear();
  }
}