
	for(int n = 0; n<=99999; n++){
		di = div(n, 7);
			if((n % 5 == 0) && (di.rem == 2)){   ///CONDICION A B 
			h++;
			}
			for(int j=0; j<=99999; j++){
				if((j % 5 == 0) && (j % 9 == 0)){    ///CONDICION A C
			f++;		
			}
			for(int k=0; k<=99999; k++){
				dl = div(k, 7);
					if((dl.rem == 2) && (k % 9 == 0)){ ///CONDICION B C
			u++;		
			}
			for(int y=0; y<=99999; y++){
				dk = div(y, 7);
		if((y % 5 == 0) && (dk.rem == 2) && (y % 9 == 0)){ /// HORRIBLE EXAGERADO
				 p++; 
						}			
					}		
				}
			}
		
		}
				printf("%d ",h);
				printf("%d ",f);
				printf("%d ",u);
				printf("%d ",p);
