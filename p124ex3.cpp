#include <bits/stdc++.h>
using namespace std;
int main() {
   double start;
   cin>>start;
   double interest;
   cin>>interest;
   double time;
   cin>>time;

   double i=0;

   while (i<=time) {
     cout<<i<<" ";   
     double output = (start*((pow(double((100+interest)/100),double (i)))));
     printf("%.2f",output);
     cout<<"\n";
     i++;
     }
   }