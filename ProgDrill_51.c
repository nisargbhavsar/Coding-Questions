#include <stdio.h>
int main(){

	unsigned char mem [1024];
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(int));
	
	int index =0;
	
	int *x;
	x =(int*)(void*)mem;
	*x = 654;
	index +=sizeof(int);
	x = (int*)(mem+index);
	*x=892;
	
	
	int y =*((int*)mem);
	int z = *((int*)(mem+index));
	printf("%d\n",y);
	printf("%d\n",z);
	index +=sizeof(int);
	x = (int*)(mem+index);
	*x = (y+z);
	
	int sum = *((int*)(mem+index));
	
	printf("%d\n",sum);
}
