#include<stdio.h>
int main()
{
	int n;
	int x;
	
	printf("here are valid coin value ,in cents:%d;%d;%d;%d;%d;%d",100,50,25,10,5,1);
	printf("\n");
	printf("Enter amount of cent as integer to make change for:\t");
	scanf("%d",&n);
	printf("what the maximum number of coin to give as changr:\t");
	scanf("%d",&x);
	int m=0;

	for(int a=0;a<=n/100;a++)
	{
		for(int b=0;b<=n/50;b++)
		{
			for(int c=0;c<=n/25;c++)
			{
				for(int d=0;d<=n/10;d++)
				{
					for(int e=0;e<=n/5;e++)
					{
						for(int f=0;f<=n;f++)
					{
							if ((100*a+50*b+25*c+10*d+5*e+f)==n)
						m=m+1;
					}
				}
			}
		}
	}

	
	printf("best combination is:");
	
}
printf("number of possible combination:%d\n",m);
int a[40];
    a[0]=n/100;
	a[1]=n%100;
	a[2]=a[1]/50;
	a[3]=a[1]%50;
	a[4]=a[3]/25;
	a[5]=a[3]%25;
	a[6]=a[5]/10;
	a[7]=a[5]%10;
	a[8]=a[7]/5;
	a[9]=a[7]%5;
	a[10]=a[9]/1;
	a[11]=a[9]%1;
	if(a[0]+a[2]+a[4]+a[6]+a[8]+a[10]<=x)
	printf("best combination is: %d unit of 100\n%d unit of 50\n%d unit of 25\n%d unit of 10\n%d unit of 5\n%d unit of 1",a[0],a[2],a[4],a[6],a[8],a[10]);
	else
	printf("can not perform");


}
