#include <bits/stdc++.h>
using namespace std;

void fastscan(double &number)
{
    bool negative = false;
    register int c;
    number = 0;
    c = getchar();
    if (c=='-')
    {
        negative = true;
        c = getchar();
    }

    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;

    if (negative)
        number *= -1;
}

int main() {
  double a,x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
  fastscan(a);
  for (int i=0; i<a; i++) {
    fastscan(x1); fastscan(y1); fastscan(x2); fastscan(y2);fastscan(x3); fastscan(y3);
    printf ("%.2f %.2f\n",abs(((x1*y2+x2*y3+x3*y1)-(x2*y1+x3*y2+x1*y3))/2.00),pow(pow((x2-x1),2)+pow((y2-y1),2),0.5)+pow(pow((x3-x2),2)+pow((y3-y2),2),0.5)+pow(pow((x3-x1),2)+pow((y3-y1),2),0.5)); 
  }
}