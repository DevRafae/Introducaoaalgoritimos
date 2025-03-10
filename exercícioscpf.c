#include <stdio.h>

int main() {
int d1, d2, d3, d4, d5, d6, d7, d8, d9, dv10, dv11;
int p1, p2, p3, p4, p5, p6, p7, p8, p9;
int soma1, soma2, digito1, digito2;

printf("Digite o 1° dígito do CPF: ");  
scanf("%d", &d1);  
printf("Digite o 2° dígito do CPF: ");  
scanf("%d", &d2);  
printf("Digite o 3° dígito do CPF: ");  
scanf("%d", &d3);  
printf("Digite o 4° dígito do CPF: ");  
scanf("%d", &d4);  
printf("Digite o 5° dígito do CPF: ");  
scanf("%d", &d5);  
printf("Digite o 6° dígito do CPF: ");  
scanf("%d", &d6);  
printf("Digite o 7° dígito do CPF: ");  
scanf("%d", &d7);  
printf("Digite o 8° dígito do CPF: ");  
scanf("%d", &d8);  
printf("Digite o 9° dígito do CPF: ");  
scanf("%d", &d9);  
printf("Digite o 10° dígito verificador do CPF: ");  
scanf("%d", &dv10);  
printf("Digite o 11° dígito verificador do CPF: ");  
scanf("%d", &dv11);

//digito1
p1 = d1 * 1;
p2 = d2 * 2;
p3 = d3 * 3;
p4 = d4 * 4;
p5 = d5 * 5;
p6 = d6 * 6;
p7 = d7 * 7;
p8 = d8 * 8;
p9 = d9 * 9;

soma1 = p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9;  
digito1 = soma1 % 11;  
if (digito1 >= 10) {  
    digito1 = 0;  
}  
  
//digito2  
  
p1 = d1 * 1;  
p2 = d2 * 2;  
p3 = d3 * 3;  
p4 = d4 * 4;  
p5 = d5 * 5;  
p6 = d6 * 6;  
p7 = d7 * 7;  
p8 = d8 * 8;  
p9 = d9 * 9;  
int p10 = dv10 * 10;  
  
soma2 = p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8 + p9 + p10;  
digito2 = soma2 % 11;  
if (digito2 >= 10){  
    digito2 = 0;  
}  
  
if (digito1 == dv10 && digito2 == dv11){  
    printf("O CPF é valido.\n");}   
    else{ printf("O CPF não é valido.\n");}  
    return 0;  

}

