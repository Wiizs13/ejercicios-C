#include <stdio.h>
#include <math.h> 

int isPrime(int n)
{
    int flag=1;
	if(n==1) 
	flag=0;    
	else{        
		for(int i=2;i<=sqrt(n);i++)
		{            
			if(n % i == 0) 
			flag=0;       
		}    
	}   
	return flag;
}

int main()
{
	int i;
	int cnt=0;
	for(i=1;cnt<1000;i++)
	{
		if(isPrime(i)&&isPrime(i+2))
		{
			cnt++;
			printf("El número primo del par% d es% d,% d \ n",cnt,i,i+2);
		}
	}
	
	return 0;
}


