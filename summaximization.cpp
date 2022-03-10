#include <bits/stdc++.h>
using namespace std;
#define int long long int
int z(int a) {
  int b=0;
  while (a) {
    b+=a%10; a/=10;
  }
  return b;
}
int v(int x,int y){
  int b=1, ans=x;
  while ((x-1)*b+(b-1)>=y){
    int cur=(x-1)*b+(b-1);
    if (z(cur)>z(ans)&&cur>=y)ans=cur;
    x/=10;
    b*=10;
  }
  return ans;
}
int32_t main(){
  int a; cin>>a;
  for (int i=0; i<a; i++) {
    int b,c; cin>>b>>c; 
    cout<<z(v(c,b))<<endl;
  }
}