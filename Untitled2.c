#include <stdio.h>

//void print(int(*placeholder)[5], int, int);

int main(){

	int a [2][3][2] = {{{2,4},{7,8},{3,4}}, {{2,2},{2,3},{3,4}}};
	int i,j;
	printf("%u\n", a);
	printf("%u\n",*a);
	printf("%u\n",**a);
	printf("%u\n",***a);
	printf("%u\n",a+1);
	printf("%d\n",sizeof(a));
//	for (i=0; i< 5; i++){
//		for (j=0; j<2; j++){
//			printf("%d\n", *(*(arr+i)+j));
//		}
//	}
	//print(&arr[0], 5, 2);

}
//
//void print(int (*base_adress) [5], int num_rows, int num_cols){
//	for (int i =0; i < num_rows -1; i++){
//		for (int j=0; j< num_cols-1; j++){
//			printf("%d\n",*(*(base_adress+j)+i));
//		}
//	}
//
//}

//void change (int** cc, int* dd){
//
//	int t;
//	t = **cc;
//	
//	**cc = *dd;
//	*dd = t;	
//}
