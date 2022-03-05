#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define INF 0x3f3f3f3f
#define MAX 10000001
#define endl '\n'
//#pragma GCC optimize("O2")
//#pragma GCC optimize("trapv")
//#pragma GCC target("avx2,bmi,bmi2,popcnt,lzcnt")
unordered_map<int,int>e; int x=0,t=0; 
int f(int a) {
  if (e[a]!=a) e[a]=f(e[a]); 
  return e[a];
}
void u(int a, int b) {
  if (e.count(a)==0) e[a]=a;
  if (e.count(b)==0) e[b]=b;
  if (e[f(a)]!=e[f(b)]) {e[f(b)]=f(a); x--;}
}
signed main() { 
  int a; cin>>a;
  for (int i=0; i<a; i++) {
    cout<<"Case #"<<i+1<<": "; 
    string b; cin>>b;
    cout<<b<<" is ruled by ";
    transform(b.begin(),b.end(),b.begin(),::tolower); 
    if (b[b.size()-1]=='a'||b[b.size()-1]=='e'||b[b.size()-1]=='i'||b[b.size()-1]=='o'||b[b.size()-1]=='u') cout<<"Alice.";
    else if (b[b.size()-1]=='y') cout<<"nobody.";
    else cout<<"Bob.";
    cout<<endl;
    cout << endl ; 
  }
}