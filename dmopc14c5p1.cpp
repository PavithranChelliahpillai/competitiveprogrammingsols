#include <bits/stdc++.h>
void fastscan(int &number)
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
  int a,b; fastscan(a); fastscan(b); printf("%2f",3.1415*a*a*b/3);
}