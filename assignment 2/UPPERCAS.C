	#include<stdio.h>

	void main()
	{
	 char a;

	 printf("enter a character in lower case:");
	 scanf("%c",&a);
	 a-=32;
	 printf("the uppercase of the character is:%c",a);
	 a+=32;
	 printf("\nthe lower case of the character is:%c",a);

	}
