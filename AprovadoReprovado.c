#include <stdio.h>

int main (void)
{
    float nota;
    printf ("Digite a nota: ");
    scanf("%f", &nota);
    printf("%f\n",nota);
    if (nota >= 0 && nota <= 10){
        if (nota >= 5)
            printf("APROVADO!\n");
        else
            printf("REPROVADO!\n");
	}
}
