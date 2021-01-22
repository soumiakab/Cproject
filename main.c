#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int ind=4;
int t1[4], t2[4],s[5];

int varDecimale;



void sommeBinaire(){

	for(int i=0;i<=ind;i++){
		s[i]=0;
	}
	
	for(int i=ind-1;i>=0;i--){
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
	printf("\nla somme en binaire est:");
	if(s[0]==1){
		printf("%d",s[0]);
	}
	for(int i=1;i<=ind;i++){
		printf("%d",s[i]);
	}
	
	
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int decToBin(int varD1, int varD2){
	
	for(int i=3;i>=0;i--){
		t1[i]=varD1%2;
		varD1=varD1/2;
	}
	
	for(int i=3;i>=0;i--){
		t2[i]=varD2%2;
		varD2=varD2/2;
	}
	printf("la conversion de %d au binaire est : ",varD1);
	for(int i=0;i<4;i++){
		printf("%d",t1[i]);
	}
	
	printf("\nla conversion de %d au binaire est : ",varD2);
	for(int i=0;i<4;i++){
		printf("%d",t2[i]);
	}
	return 0;
}

int BinToDec(){
     varDecimale=0;
    
    for (int i=4;i>=0;i--){
        varDecimale = varDecimale + s[i]*pow(2,(4-i));
    }
    printf("\nla coversion au entier de la somme binaire est; %d",varDecimale);

  return 0;
}

int main(int argc, char *argv[]) {
	int a,b;
	printf("donner le premier nombre: ");
	scanf("%d",&a);
	printf("donner le deusieme nombre: ");
	scanf("%d",&b);
	decToBin(a,b);
	sommeBinaire();
	BinToDec();
	return 0;
}
