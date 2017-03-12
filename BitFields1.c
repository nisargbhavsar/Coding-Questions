#include <stdio.h>


void printBits (void const * ptr){ //print bits of one char assuming little endian
	
	char *b = (char *) ptr;
	int i;
	for(i=7; i>=0; i--){
		int bit = (*b>>i);
		bit = bit & 1;
		printf("%u",bit);
	}
	puts("");
}


int main(){

	char a = '0';
	void * ptr = &a;

	char b = '110';
	b = ~b;
	a = (a & b);
	//Initialized motors to be off, forward and stopped
	
	b = 'q';
	a = (a | b);
	//Motor a turned on at 50% speed
	
	b = '^D';
	a = (a | b); 
	//Motor b initilized to be reverse
	
	b = '>';
	a = (a & b);
	b = '^B';
	a = (a | b);
	b = '?';
	a = (a & b);
	b = '^L';
	a = (a & b);
	
	a = ~a;
	int i = 8;
	a = (a ^ i);
	
	ptr = &a;
	printBits(ptr);
	printf("%c",a);
}
