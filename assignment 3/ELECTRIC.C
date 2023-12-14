 #include<stdio.h>
 #include<conio.h>
 void main()
 {
  int consumption_unit;
  float per_unit;
  clrscr();
  printf("Enter the electricity consumption per unit:");
  scanf("%d",&consumption_unit);
  if(consumption_unit<151)
  {
	consumption_unit*=3;
	printf("The electricity is:%d",consumption_unit);
  }
  else if(consumption_unit<351)
	{
		per_unit=(float)100+consumption_unit*3.75;
		printf("The electricity is:%f",per_unit);
	}
	else if(consumption_unit<451)
	{
		consumption_unit=250+consumption_unit*4;
		printf("The electricity is:%d",consumption_unit);
	}
	else
	{
		per_unit=(float)300+consumption_unit*4.25;
		printf("The electricity is:%f",per_unit);
	}
  getch();
 }