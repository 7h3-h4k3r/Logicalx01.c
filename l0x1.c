#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int logical(int itos){
	int fact=1,temp=0;
	int j=0;
	while (itos > 0) {
		j = itos % 10; //get a last int of the given input than store it 
      	for(int i =1;i<=j;i++){
      		fact *=i;
      	}
      	temp = temp + fact;
      	fact =1;
      	itos = itos / 10; //and remove the last element
    }
   	return temp;
}
void tandc(){
	printf("\t\tTerm's and condition \n 1. 1 to 100000 value only \n 2.Input take only Interger Value \n\t\t Devops by Dharani / 16.02.2025\n");
}
int main(){
	int num;
	tandc();
	printf("Enter a Numeric Value if i Check revert stronger number or not : " );
	if(scanf("%d",&num)==1 && num<=100000 && num>0){
		if(num == logical(num)){
			printf("You Num is Strongr Number : %d",num);
			exit(-1);
		}
		printf("Number Has been Not stronger ;)");
	}else{
		printf("Error : Invalied input Read the Term's and conndition ");
		tandc();
		exit(-1);
	}
}
	
