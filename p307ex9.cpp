#include <bits/stdc++.h>
using namespace std;
int main() {
  int terms;
  cin>>terms;
   for (int i=0; i<terms; i++){
      int years;
      cin>>years;
      if (years % 400 == 0){
        cout<<"1";
      }
      else if (years % 100 == 0){
        cout<<"0";
      }
      else if (years % 4 == 0){
        cout<<"1";
      }
      else {
        cout<<"0";
      }
      cout<<endl;
   }
}