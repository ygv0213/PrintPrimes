#include <stdio.h>
#include <conio.h>

bool isPrime(int num);
void pPrime(int num);

int main(){
	pPrime(2052047);
	
	return 0;
}

bool isPrime(int num){
	//chack if num is prime if so return true
	for(int i=2 ; i<num ; i++){
		if(num%i == 0) return false;
	}
	return true;
}

void pPrime(int num){
	//looking for the next prime num and print him to the screen
	while(true){
		if(isPrime(num)){
			printf("%d\n", num);
			num++;
		}else{
			num++;
		}
	}
}
