#include <bits/stdc++.h>
using namespace std;
#define MAXB 10000000
int c[MAXB + 1];
void a() {
  for(int i=2;i<=MAXB;i++) {
    if(c[i] > 0) continue;
    for(int j=i;j<= MAXB;j+=i)
      c[j]++;
  }
}
int main() {
  a();
  int d; cin>>d;
  for (int i=0; i<d; i++) {
    int e,f,g,h=0; cin>>e>>f>>g; 
    for (int j=e; j<=f; j++) {
      if (c[j]==g) h++;
    }
    cout<<"Case #"<<i+1<<": "<<h<<endl;
  }
}