#include <bits/stdc++.h>
using namespace std;
int findDigits(int n) 
{ 
    if (n < 0) 
        return 0; 
  
    if (n <= 1) 
        return 1; 
  
    double digits = 0; 
    for (int i=2; i<=n; i++) 
        digits+=log10(i); 
  
    return floor(digits)+1; 
} 
int main() {
  vector<int>b;
  int a;
  for (int i=0; i<5; i++) {
  cin>>a;
  b.push_back(a);
  }
  for (int d=0; d<b.size(); d++) {
  cout<<"The length of "<<b[d]<<"! "<<"is "<<findDigits(b[d])<<endl;
  }
}