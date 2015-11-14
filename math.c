#include <stdio.h> 
 int main () 
 { 
 	int dias;
 	float anos; 
 	printf ("Entre com o número de dias: ");
 	scanf ("%d",&dias); 
 	anos=dias/365.25;
 	printf ("\n%d dias equivalem a %f anos.\n",dias,anos); 
 	return(0); 
 }