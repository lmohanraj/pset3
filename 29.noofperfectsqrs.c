 #include<stdio.h>
 #include<math.h>
 int main()
 {
 	int i,l,r,b,count=0;
 	float c;
 	printf("input\n");
 	scanf("%d%d",&l,&r);
 	for(i=l;i<=r;i++)
 	{
 		c=sqrt(i);
 		b=c;
 		if(b==c)
 		{
 			count++;
 		}
 	}
 	printf("output : %d",count);
 	return 0;
 }
