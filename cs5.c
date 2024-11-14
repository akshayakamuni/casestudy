#include<stdio.h>
int main()
{
     int n,a[10],i,flage=0;
     printf("enter the value of n");
     scanf("%d",&n);
	 a[0]=0,a[1]=1;
     for(i=2;i<10;i++)
     {
     	a[i]=a[i-1]+a[i-2];
	 }
	 for(i=0;i<10;i++)
	 {
	 	printf("%d",a[i]);
	 }
	 for(i=0;i<10;i++)
	 {
	 
	 if(n==a[i])
	 flage=1;
}
    if(flage==1)
    {
	
	 printf("is fibo");
     }
	 else
	 {
	 
	 	printf("is not fibo");
	 }
     
     
}
