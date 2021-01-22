#include <stdio.h>
#include <stdlib.h>
int ind=4;
int t1[4], t2[4],s[5];

int varDecimale;



void sommeBinaire(){

	for(int i=0;i<=ind;i++){
		s[i]=0;
	}
	
	for(int i=ind-1;i>0;i--){
		if((t1[i]+t2[i])==2){
			t1[i-1]+=1;
			s[i+1]=0;
		}
		else{
			if((t1[i]+t2[i])>2){
			t1[i-1]+=1;
			s[i+1]=1;
			}
		else{
		
			s[i+1]=t1[i]+t2[i];
			}
		}
		int var;
		if((t1[0]+t2[0])>1){
			s[0]=1;
			
		}
		
	}
	if(s[0]==1){
		printf("%d",s[0]);
	}
	for(int i=1;i<=ind;i++){
		printf("%d",s[i]);
	}
	
	
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void decToBin(int varBin){
	int varDecimale;
}

void binarynumber ( int Bnumber){

    int bnumber, decimal_number, reminder;

}

int main(int argc, char *argv[]) {
	return 0;
}
