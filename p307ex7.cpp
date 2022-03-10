#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool inRange(int low, int high, int x) 
{  return ((x-high)*(x-low) <= 0); }

int main() 
{ 
  int Ngrades;
  cin>>Ngrades;
  for (int i=0; i<Ngrades; i++){
     int grade;
     cin>>grade;
     if(grade>=0 && grade<=100)
   {
     inRange(0, 49, grade)? cout << "F\n": cout<<"";  
     inRange(50, 59, grade)? cout<< "D\n": cout<<"";
     inRange(60, 69, grade)? cout << "C\n": cout<<"";  
     inRange(70, 79, grade)? cout<< "B\n": cout<<"";
     inRange(80, 100, grade)? cout << "A\n": cout<<""; 
     cout<<endl;
   } 
   else
   {
     cout<<"X";
     cout<<endl;
    } 
  }

} 

