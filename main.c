#include <stdio.h>
/*Entre com três medidas e verifique se formam um triângulo. A regra para saber se com medidas podemos formar um triângulo é dada por: se cada um dos lados é menor do que a soma dos outros dois.
*/

int main(void) {
  float lA=0;
  float lB=0;
  float lC=0;
  printf("Digite a lA\n");
  scanf("%f", &lA);
  printf("Digite a lB\n");
   scanf("%f", &lB);
  printf("Digite a lC\n");
   scanf("%f", &lC);
   if(lA<lB+lC){
   printf("Esses valores formam um triangulo\n");
   }
   else if(lB<lA+lC){
     printf("Esses valores formam um triangulo\n");
   }
   else if (lC<lB+lA){
     printf("Esses valores formam um triangulo\n");
   }
  return 0;
}