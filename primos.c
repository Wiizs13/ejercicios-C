#include <stdio.h>
#include <stdbool.h>

//funcion bol para verificar si son primos
bool numero(int a, int b){ //recive 2 numeros
	if(a % b ==0 && a != 2){ //
		return false; //bool solo retorna falso y verdadero
	}else if(b > (a/2)){
		return true;
	}else{
		return numero(a,b+1);
	}
	
}

int main()
{
	int i;
	int cnt=0;
	int n;
	printf("Ingresa la cantidad de numeros: ");
    scanf("%d", &n);
    
	for(i=1;cnt<n;i++)
	{
		if(numero(i,2)&&numero(i+2,2))
		{
			cnt++;
			printf("Pareja de Numeros primos gemelos %d es %d\n",i,i+2);
		}
	}
	
	return 0;
}


