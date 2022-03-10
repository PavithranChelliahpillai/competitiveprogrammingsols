#include <bits/stdc++.h>
using namespace std;
int main() {
  int gametotal=0;
  int total=0;
  int n=0;
  int i;
  int input=0;

  cin >> n;

  map<int,int>cases;
  cases[1] = 100;
  cases[2] = 500;
  cases[3] = 1000;
  cases[4] = 5000;
  cases[5] = 10000;
  cases[6] = 25000;
  cases[7] = 50000;
  cases[8] = 100000;
  cases[9] = 500000;
  cases[10] = 1000000;


  for (i=0; i<n; i++){
    cin>>input;
    total+=cases[input];
  }
  int offer;

  cin>>offer;

  for (int b=1; b<=10; b++){
  gametotal+=cases[b];
  }

  if (offer>(gametotal-total)/(10-n)){
    cout<<"deal";
  }
  else {
    cout<<"no deal";
  }
}