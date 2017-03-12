#include <stdio.h>

int isPos (const int * ptr){//Return 1 if positive
	
	return 1+((*ptr)>>31);
}

int isSameSign(const int * ptr1, const int * ptr2){ //Return 1 if same sign
	return !(isPos(ptr1) ^ isPos(ptr2));
}

int isPowTwo (const int * ptr){//Return 1 if number is a power of 2
	return (!((*ptr-1) & *ptr) || (*ptr == 1)); 
}

int main(){

	int test = 4534534, test2 = 9093, test3 = 8;
	
	int * test_ptr = &test;
	int * test_ptr2 = &test2;
	int * test_ptr3 = &test3;
	printf("%d", isPowTwo(test_ptr3));
	
	

}
