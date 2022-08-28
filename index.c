#include <stdio.h>
int main(void)
{
    int cont;
    float nota,media,soma,maior;
    maior; soma;
    for (cont=1;cont<=2;cont++)
    {
        printf ("Digite a sua nota: \n");
        scanf("%f",&nota);
        soma=soma+nota;
        if (nota > maior)
        {
            maior=nota;
        }
    }
    media=soma/2;
     printf ("\nA media nota e = %.2f \n",media);
    if (media >= 6)
		printf("Parabéns você foi aprovado\n");
	if (media < 6)
		printf(" reprovado, fara a segunda chamada!");
    printf ("\nA maior nota e = %.2f \n",maior);

    return 0;
}