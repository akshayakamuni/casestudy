#include<stdio.h>
int main()
{
	int n=12,i,q,count=0;
	int m=12;
	while(n!=0)
	{
	    q=n%10;
		if(m%q==0)
		count=count+1;
		n=n/10;	
	}
	printf("count=%d",count);
}
