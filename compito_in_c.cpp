/*
File:somma interi
Autore:Alessio Mariani
Classe:3H
data: 21/09/2022

somma di due interi letti da tastiera e stampa a schermo del risultato

Input:due numeri interi 
Eleborazione: somma
Output: un numero intero
*/

#include <stdio.h> //printf,scanf


int main()
{
	//dichiariamo  le due variabili
	int num1,num2;
	//e output
	int ris;
	//input due numeri interi
	printf("inserisci il primo numero");
	scanf("%d",&num1);
	printf("inserisci il secondo numero");
	scanf("%d",&num2);
	//assegnamo le variabili ris il risultato della somma di num1+num2
	ris=num1+num2;
	//Output: un numero intero
	printf("il risultato e%d",ris);
	//termina il programma
	return 0;

}   
