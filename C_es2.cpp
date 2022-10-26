/*
autore:alessio mariani
classe:3H
data:21/10/2022

input:
elaborazione 
outoput:
*/

#include <stdio.h>

int main()
{
	//dichiaro le variabili
	int a,b;
	
	//avvaloro le variabili
	
	printf("inserisci il primo numero intero");
	scanf("%d",&a);
	
	printf("scrivi secondo numero intero");
	scanf("%d",&b);
	
	//elaborazione
	
	if(a==b)
	{
		printf("i numeri sono uguali");
	}
	else
	{
		if(a>b)
		{
			printf("il minore e' %d il maggiore e' %d",b,a);
		}
		else
		{
			printf("il minore e' %d il maggiore e' %d",a,b);
		}
	}
	
	return 0;
}

