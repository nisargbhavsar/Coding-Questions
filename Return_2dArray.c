#include <stdio.h>
#define ROW 3
#define COL 4

int *first ();
int (*second()) [COL];
int (*third())[ROW][COL];

int main(){
	int i, j;
	int* a;
//	int *first();
	
	int (*b)[COL];
//	int (*second())[COL];
	int *p;
	
	int (*c)[ROW][COL];
//	int (*third())[ROW][COL];
	
	a = first();

	b = second();
	
	printf("Array a[][] in main()\n");
	for(i=0; i< ROW; i++){
		for(j=0; j< COL; j++){
			printf("%d",*(a+j + i*COL));
		}
		printf("\n");
	}

	printf("Array b[][] in main()\n");
	for(i=0; i<ROW; i++){
		p = b + i;
		for(j=0; j<COL; j++){
			printf("%d",*(p+j));
		}
		printf("\n");
	}
	
	c = third();
	
	printf("Arrayc[][] in main()\n");
	for(i=0; i<ROW; i++){
		for(j=0; j<COL;j++){
			printf("%d",(*c)[i][j]);
	}
	printf("\n");
}


}

int *first(){ //return int pointer
	static int a [ROW][COL] = { 1,2,3,4,
								5,6,7,8,
								9,0,1,6
							};
	int i,j;
	
	printf("Array a[][] in first: \n");
	for(i=0; i<ROW; i++){
		for(j=0; j<COL; j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	return (int*) a;		
}

int (*second())[COL]{ //return pointer to a 1-d array
	static int b [ROW][COL] = { 9,4,6,4,
								1,3,2,1,
								7,5,1,6
							};
	int i,j;
	
	printf("Array b[][] in second: \n");
	for(i=0; i< ROW; i++){
		for(j=0; j<COL; j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return b;
}

int (*third())[ROW][COL]{

	static int c[ROW][COL] = { 6,3,9,1,
					 2,1,5,7,
					 4,1,1,6
				};
				
				
	int i,j;
	
	printf("Array c in third():\n");
	for (i=0; i<ROW; i++){
		for (j=0; j<COL; j++){
			printf("%d",c[i][j]);
		}
		printf("\n");
	}

	return (int(*)[ROW][COL])c;

}



