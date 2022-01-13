#include<stdio.h>
#include<math.h>
#include<stdlib.h>

bool isapowerofTwo(long long n)
{
        int i=0;
        long double x=0;
        i=log2l(n);
        x=log2l(n);
        if(x==i)return true;
        else return false;
         
}
int main()
{	long long n=0;
	printf("digite o numero");
	scanf("%lld",&n);
	if(isapowerofTwo(n))puts("true");
	else puts("false");
	return 0;
}
