#include <stdio.h>

void main ()
{
    // int num,*p;
    // num=55;
    // p=&num;
    // printf("Valor inicial: %d\n", num );
    // *p=100;
    // printf("\nValor final: %d\n", num );

    // int num,*p1, *p2;
    // num=55;
    // p1=&num; /* Pega o endereço de num */
    // p2=p1; /*p2 passa a apontar para o mesmo endereço apontado por p1 */
    // printf("Conteúdo de p1: %p\n", p1);
    // printf("Valor apontado por p1: %d\n", *p1);
    // printf("Conteúdo de p2: %p\n", p2);
    // printf("Valor apontado por p2: %d\n", *p2);

    long num;
    long *p;
    num=55;
    p=&num;
    printf("Conteudo de p: %p\n",p);
    printf("Valor apontado por p: %d\n",*p);
    printf("Conteudo de p incrementado: %p\n",++p);
    printf("Valor apontado por p incrementado: %d\n",*p);
    printf("Conteudo de p: %p\n", p);
}