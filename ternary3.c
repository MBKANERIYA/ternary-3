#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter value A = ");
	scanf("%d",&a);
	
	printf("Enter value B = ");
	scanf("%d",&b);
	
	printf("Enter value C = ");
	scanf("%d",&c);
	
	(a>b) ? (a>c) ? printf("A is maximum") : printf("C is maximum")
	      : (b>c) ? printf("B is maximum") : printf("C is maximum");
	
}