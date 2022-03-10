#include <bits/stdc++.h>
using namespace std;
int main() {
int limit;
cin>>limit;
int start=2;
int divider; 
int count=0;
int totcount=0;
vector<int>c;

while (totcount<limit) {
for (int a=2; a<start; a++) {
   if(start%a==0) {
     count++;
   }
}
if (count==0) {
  c.push_back(start);
  totcount++;
}
count=0;
start++;
}

for (int list=0; list<c.size(); list++) {
  cout<<c[list]<<endl;
}
}
