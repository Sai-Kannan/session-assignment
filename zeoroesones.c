#include<stdio.h>
int main()
{
	int num,i=31,n[32];
	printf("enter the number:\n");
	scanf("%d",&num);
	while(i>=0)
	{
		n[i]=num & 1;
		i--;
		num=num>>1;
	}
	for(int j=0;j<32;j++)
	printf("%d ",n[j]);
	for(int j=0;j<32;j++)
	{
	    if(n[j]==1)
	    {
	    	printf("\n%d bit is set as 1",j+1);
		}
    }

	
}
