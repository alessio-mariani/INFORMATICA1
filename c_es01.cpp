#include <stdio.h>


int main() 
{
	int a,b;
	
	printf("scrivi primo numero intero");
	scanf("%d",&a);
	
	printf("scrivi secondo numero intero");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("il numero minore e'%d,a");
	}
	else
	{
		printf("il numero minore e' %d,b");
	}
	
	//fine programma 
	return 0;
}
