#include <stdio.h>

int main (){
  int num1   , num2  , risultato;

  printf("Inserisci il primo numero: ");
  scanf("%d" , &num1);

  printf("Inserisci il secondo numero: ");
  scanf("%d" , &num2);

  risultato = num1 * num2;

  printf("Il risultatoo della moltiplicazione è: %d\n" , risultato);

  return 0;

}