 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int i,n,c=0;
 	char s[20];
 	printf("input\n");
 	scanf("%s",s);
 	n=strlen(s);
 	for(i=0;i<n;i++)
 	{
 	if((s[i]>='0')&&(s[i]<='9'));
 	else
 	c++;
 	}
 	if(c==0)
 	printf("yes");
 	else
 	printf("no");
 	return 0;
 }
