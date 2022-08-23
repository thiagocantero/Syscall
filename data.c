/*
*Programa Simples em C 
*para demonstrar a Chamada ao Sistema
*Thiago Cantero Mari Monteiro 2022
*/

#include<stdio.h>
#include<time.h>

int main()
{
    time_t t;   
    time(&t);

    printf("A Data atual é: %s", ctime(&t));
    
    return 0;
}