#include <cstdio>
#include <cstring>
using namespace std;
int a[32], b[300005];
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
inline void fastRead_string(char *str)
{
    register char c = 0;
    register int i = 0;
 
    while (c < 33)
        c = getchar_unlocked();
 
    while (c != '\n') {
        str[i] = c;
        c = getchar_unlocked();
        i = i + 1;
    }
 
    str[i] = '\0';
}
int main()
{
	int c,d; 
	fastscan(c); fastscan(d);
	long f = 0;
	for (int i=0; i<c; i++)
	{
		char e[21]; fastRead_string(e);
  	b[i]=strlen(e);
		f+=a[b[i]];
		if (i>=d)
			a[b[i-d]]--;
		a[b[i]]++;
	}
	printf("%ld", f);
}