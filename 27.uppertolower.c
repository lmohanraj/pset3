 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	int i=0;
 	char s[20];
 	printf("input\n");
 	scanf("%s",s);
 	while(s[i]!='\0')
 	{
 	if((s[i]>='A')&&(s[i]<='Z'))
 	{
 		s[i] = s[i] + 32;
 	}
 	if((s[i]>='a')&&(s[i]<='z'))
 	{
 		s[i]=s[i]-32;
 	}
 	i++;
 }
 	printf("output : %s",s);
 	return 0;
 }
