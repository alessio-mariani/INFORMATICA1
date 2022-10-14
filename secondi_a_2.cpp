/*
autore:alessio mariani
classe:3H
data:5/10/2022

leggi input leggi un valore corrispondente a un numero di secondi e trasformarla in ore e minuti

input:secondi
elaborazione:ore minuti e secondi
outoput:
*/


#include <stdio.h>

int main()
{
	printf("Alessio Mariani/n");
	//input
	int secondi;
	int ore,minuti;
	int secondi_iniziali;
	
	printf("inserisci un numero ");
	scanf("%d", &secondi);
	secondi_iniziali=secondi;
	
	//elaborazione
	minuti=(secondi-secondi%60) / 60;
    ore=(minuti-minuti%60) / 60;
    secondi=secondi % 60;
    minuti=minuti %60;
    
    //outoput
    printf("%d=%dh %dm %ds",secondi_iniziali,ore,minuti,secondi); //stampa risultato
    
    return 0;
	

}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


