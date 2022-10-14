/** ****************************************************************************************
* \mainpage <nome del progetto>
*
* @brief <inserire una breve descrizione del progetto>
* <specifiche del progetto>
* <specifiche del collaudo>
* 
* @author <alessio mariani>
* @date <data> 
* @version 1.0 <data> <Descrivere le modifiche apportate>
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include <stdio.h>
#include <math.h>

int main ()

{
	
	printf ("alessio mariani \n");
	//input
	
	float a,b,c,d,x;
	
	//outoput
	
	float risultato;
	
	
	printf("inserisci valore valore di a \n");
	scanf("%f:",&a);
	
	printf("inserisci valore valore di b \n");
	scanf("%f:",&b);
	
	printf("inserisci valore valore di c \n");
	scanf("%f:",&c);
	
	printf("inserisci valore valore di d \n");
	scanf("%f:",&d);
	
	printf("inserisci valore valore di x \n");
	scanf("%f:",&x);
	
	//elaborazione
	
	risultato = (-a*(pow(x,3))+b*(pow(x,2))-c*x+d);
	
	printf("il risultato e' %.2f",risultato);
	
	return 0;
	
























}






