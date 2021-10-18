#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num; 
    int par=0,imp=0;

    printf("Ingrese el limite\n");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        if(i%2==0)  
            par=par+i;
        else
            imp=imp+i;
    }
    printf("La suma de todos los numeros impares es: %d",imp);
    printf("\nLa suma de todos los numeros pares es: %d",par);

    return 0;
}
