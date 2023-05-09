#include<stdio.h>

main()

{
	char name[100];
	char temp[100];
	
	printf("enter your string");
	gets(name);
	
	strcpy(temp,name);
	
	printf("reverse your string=%s",strrev(name));
	
	if(strcmp(temp,name)==0)
	{
		printf("your string is Palindrome");
	}
	else
	{
		printf("your string is not Palindrome");
	}
}
