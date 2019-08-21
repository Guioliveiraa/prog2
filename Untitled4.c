#include <stdio.h>
#include <conio.h>
int main()
{
int vetA[5], vetB[8], vetC[8], i, j, r=0, total = 0;
printf("--- VETOR A ---\n\n");
printf("Informe 5 numeros: \n");
for(i = 0; i < 5; i++)
{
scanf("%d", &vetA);
}
printf("--- VETOR B ---\n\n");
printf("Informe 8 numeros: \n");
for(i = 0; i < 8; i++)
{
scanf("%d", &vetB);
}
for(i = 0; i < 9; i++)
{
for(j = 0; j < 6; j++)
{
if(vetA == vetB[j])
{
vetC[r] = vetB[j];
total++;
}
}
}
if(total == 0)
{
printf("Nao ha valores iguais");
}
else
{
printf("\n\nValores iguais: \n");
for(i = 0; i < total; i++)
{
printf("\n%d", vetC[r]);
}
}
printf("\n\n");
system("pause");
}
