#include <stdio.h>
#include <stdlib.h>
int t1[4], t2[4],s[4];
int varDecimale;



void sommeBinaire(){
	for(int i=3;i>=0;i--){
		if((t1[i]+t2[i])==2){
			t1[i-1]+=1;
			s[i]=0;
		}
		else{
			if((t1[i]+t2[i])>2){
			t1[i-1]+=1;
			s[i]=1;
			}
		else{
			
				s[i]=t1[i]+t2[i];
				
			}
		}
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
