#include <stdio.h>
#include <stdlib.h>
    
	
    
int main()
{
	int condicion = 99999;
	int a,b,c;
	int aa = 0,bb = 0,cc =0;
	int h=0,f=0,u=0,p=0,t=0;
	div_t dv,dvs,di,dp,dl,dk,df;
	


//considerando que cumplan solo 1 de las condiciones

/////////////////////////////////////////////////////////////////////////////////////////////
	///condicion a		
	for(int i = 0; i<=99999; i++){
		if((i % 5 == 0)){
			a++; 
			aa = a;
		}
	}
		
	///condicion b
	for(int j = 0; j<=99999; j++){
		dv = div(j, 7);
		if(dv.rem == 2){
			bb = b;
			b++;
		}
		 
	}
	
	///condicion c
	for(int k = 0; k<=99999; k++){
		 	
        if(k % 9 == 0){
			c++; 
			cc = c;       	
		}
	}
/////////////////////////////////////////////////////////////////////////////////////////////

//considerando que cumpla 2 de las condiciones
/////////////////////////////////////////////////////////////////////////////////////////////


	
		for(int i = 0; i<=99999; i++){
		di = div(i, 7);
		
		if((i % 5 == 0) && (di.rem == 2)){   ///CONDICION A B 
		f++;
		}
	}
		/////////////////////////////////////////

		for(int j=0; j<=99999; j++){
		dp = div(j, 7);
		if((j%5==0) && (j%9==0)){    ///CONDICION A C
			h++; 
		}
	}
		////////////////////////////////////////////
		int k=0;
		while(k<=99999){
		
		dl = div(k, 7);
		if((dl.rem == 2) && (k % 9 == 0)){	///CONDICION B C
			u++; 
		}
		k++;	
	}
		////////////////////////////////////////////
		
		for(int w =0; w<=99999; w++){
		dk = div(w, 7);
	
		if((w % 5 == 0) && (dk.rem == 2) && (w % 9 == 0)){ /// HORRIBLE EXAGERADO
			p++; 
		}else{

		}	
	}
		////////////////////////////////////////////
		
		for(int w =0; w<=99999; w++){
		df = div(w, 7);
	
		if((w % 5 != 0) && (df.rem != 2) && (w % 9 != 0)){ /// HORRIBLE 
			t++; 
		}
	}
		////////////////////////////////////////////
	


/////////////////////////////////////////////////////////////////////////////////////////////

		printf("\t\tNumeros de Loteria\n\n");
	printf("\t\t\nNumeros Bonitos 1er condicion == %d \n",aa);
	printf("\t\t\nNumeros Bonitos 2do condicion == %d \n",bb);
	printf("\t\t\nNumeros Bonitos 3er condicion == %d \n",cc);
	printf("\t\t\nNumeros Feos == %d \n",f);
	printf("\t\t\nNumeros Feos == %d \n",h);
	printf("\t\t\nNumeros Feos == %d \n",u);
	printf("\t\t\nNumeros Horribles == %d\n",t);
	printf("\t\t\nNumeros Horribles Exagerados == %d ",p);












	
}
