#include <stdio.h>

int main()
{    
int valor1, valor2, valor3;

printf("Informe o primeiro valor: ");
scanf("%d",&valor1);

printf("Informe o segundo valor: ");
scanf("%d",&valor2);

printf("Informe o terceiro valor: ");
scanf("%d",&valor3);

int maior = valor1, menor=valor1;

    if (valor2 > maior)
    {
        maior = valor2;
    }
    if (valor3 > maior)
    {
        maior = valor3;
    }
    if (valor2 < menor)
    {
        menor = valor2;
    }
    if (valor3 < menor)
    {
        menor = valor3;
    }

int media = (valor1+valor2+valor3)/3;

printf("O maior valor eh %d.\n",maior);
printf("O menor valor eh %d.\n",menor);
printf("a media dos valor e %d", media);
    return 0;
}
    