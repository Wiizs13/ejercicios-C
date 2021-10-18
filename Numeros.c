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
	int i;	
	for(i = 0; i<=99999; i++){
		if((i % 5 == 0)){
			a++; 
			aa = a;
		}
	}
		
	///condicion b
	int j;
	for(j = 0; j<=99999; j++){
		dv = div(j, 7);
		if(dv.rem == 2){
			bb = b;
			b++;
		}
		 
	}
	
	///condicion c
	int k;
	for(k= 0; k<=99999; k++){
		 	
        if(k % 9 == 0){
			c++; 
			cc = c;       	
		}
	}
/////////////////////////////////////////////////////////////////////////////////////////////

//considerando que cumpla 2 de las condiciones
/////////////////////////////////////////////////////////////////////////////////////////////


		int ii;
		for(ii = 0; ii<=99999; ii++){
		di = div(ii, 7);
		
		if((ii % 5 == 0) && (di.rem == 2)){   ///CONDICION A B 
		f++;
		}
	}
		/////////////////////////////////////////
		int jj;
		for(jj=0; jj<=99999; jj++){
		dp = div(jj, 7);
		if((jj%5==0) && (jj%9==0)){    ///CONDICION A C
			h++; 
		}
	}
		////////////////////////////////////////////
		int kk; kk=0;
		while(kk<=99999){
		
		dl = div(kk, 7);
		if((dl.rem == 2) && (kk % 9 == 0)){	///CONDICION B C
			u++; 
		}
		kk++;	
	}
		////////////////////////////////////////////
		int w;
		for(w =0; w<=99999; w++){
		dk = div(w, 7);
	
		if((w % 5 == 0) && (dk.rem == 2) && (w % 9 == 0)){ /// HORRIBLE EXAGERADO
			p++; 
		}else{

		}	
	}
		////////////////////////////////////////////
		int x;
		for( x=0; x<=99999; x++){
		df = div(x, 7);
	
		if((x % 5 != 0) && (df.rem != 2) && (x % 9 != 0)){ /// HORRIBLE 
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
