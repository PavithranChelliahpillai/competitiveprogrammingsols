#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  int b;
  int i;
  vector<string>totaldirections;
  string directions;
  do {
  cin>>directions;
  totaldirections.push_back (directions);
  }

  while (directions != "SCHOOL");

  reverse(totaldirections.begin(),totaldirections.end());

  for(int i=0; i< totaldirections.size(); i++) {
  if (totaldirections[i]=="R"){
    totaldirections[i]="LEFT";
  }
  else if (totaldirections[i]=="L") {
    totaldirections[i]="RIGHT";
  }
  }
  for(int z=1; z+2<totaldirections.size(); z+=2) {
  cout<<"Turn "<<totaldirections[z]<<" onto "<<totaldirections[z+1]<<" street. \n";
  }
  int x = totaldirections.size();
  cout<<"Turn "<<totaldirections[x-1]<<" into your HOME.";
}