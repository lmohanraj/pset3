#include <stdio.h>
int main()
{
	int l,r,i,g,n;
	printf("input\n");
	scanf("%d%d",&l,&r);
	if(l>r)
	n=r;
	else
	n=l;
	for(i=1;i<=n;i++)
	{
	if((l%i==0)&&(r%i==0))
	{
		g=i;
	}
	}
	printf("output : %d",g);
	return 0;
}
