#include <stdio.h>
int main(void) {
  float QL, QZ, QC;

  printf("digite a quantidade em gramas de latão a ser produzida: ");
  scanf("%f", &QL);
  QZ = QL * 0.3;
  QC =  QL * 0.7;

  printf("Para produzir %.2f gramas de latão vai precisar: \n", QL);
  printf( "%.2f gramas de cobre e %.2f gramas de zinco\n", QC, QZ);
  return 0;
}
