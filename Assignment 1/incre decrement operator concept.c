//NOTE: this type of operation is not works accurately in DEV C++ so the answer is b=33(not the correct answer).
//but if this same program is run in turbo C++ it gives the value b=30 which is the correct answer.
#include<stdio.h>
void main()
{
	int x=5,y=0,a=5,b=0;
	y=x++ + ++x;/*here the value of y is 12 because x++ returns 5 then add it if x is used again, so infirst condition y=5.
	Again ++a immediately increases the value of a, so insecond condiotion the x++ has already increased its value to 6 so 
	now the ++a increases the 6 to 7. so basically the operation is 5+7. 
	Again x is calculated by adding 1 in first operator and adding 1 in second operator.*/
	printf("%d",x);
	printf("\n%d",y);
	b=++a + ++a + a-- + a++ + --a;/*to calculate this we first look at the pr-eoperator then post operator
	first there are 3 pre-operator (++a, ++a, --a) so (6, 7, 6) and at last there are 2 post-operator a-- and a++
	which eventually makes the final value 6.
	now we assume that all the a are 6 and since there are 5 of them getting added 6*5=30 so the value of b becomes 30.*/
	printf("\n%d",a);
	printf("\n%d",b);
}
