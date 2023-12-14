#include<stdio.h>
#include<conio.h>
void main()
{
 char character;
 clrscr();
 printf("Enter a character:");
 scanf("%c",&character);
 if(character=='a'||character=='A'||character=='e'||character=='E'||character=='i'||character=='I'||character=='o'||character=='O'||character=='u'||character=='U')
 {

	printf("the character is a vowel");
 }
 else
 {
	printf("the character is not a vowel");
 }
 getch();
}