#include<stdio.h>
#include<conio.h>
int main()
{
 char character;
// clrscr();
 printf("Enter a character:");
 scanf("%c",&character);
 if(character>=97&&character<=122)
 {
	character-=32;
	printf("The Uppercase of the character is %c",character);

 }
 else if(character>=65&&character<=90)

	{
		character+=32;
		printf("The Lowercase of the character is %c",character);
	}

 getch();
}
