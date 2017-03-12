/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 
 #include <stdio.h>
 #include <stdbool.h>
 #include <stdlib.h>
 int* plusOne (int*, int, int*);
 
 bool test_1 ();
 bool test_2 ();
 bool test_3 ();
 bool test_4 ();
 
 int main(){
 	
 	bool test1 = test_1(); //54321
 	if (test1)
 		printf("Test 1 has passed.\n");
 	bool test2 = test_2(); //999
 	if(test2)
 		printf("Test 2 has passed.\n");
 	bool test3 = test_3(); //989
 	if(test3)
 		printf("Test 3 has passed. \n");
 	bool test4 = test_4(); //9889
	 if(test4)
	 	printf("Test 4 has passed. \n");	
 	
 
 }
 
 bool test_1 (){
 
 	int i, size =5;
 	int * arr = (int*) malloc (size * sizeof(int));
	int* returnSize = (int*) malloc (sizeof(int));
	int* arr2;
	for(i=0; i<size; i++){ //54321
		arr[i] = i+1;
	}
	
	arr2 = plusOne (arr, size, returnSize);
	if(arr2[0] == 2 && arr2[1] == 2 && arr2[2] == 3 && arr2[3] == 4 && arr2[4] == 5 && *returnSize==size)
		return true;
	
	else
		return false;

	
	 
 }
 
 bool test_2 (){
 	int i, size =3;
 	int * arr = (int*) malloc (size * sizeof(int));
	int* returnSize = (int*) malloc (sizeof(int));
	int* arr2;
	arr[0] = arr[1] = arr[2] = 9;
	
 	arr2 = plusOne(arr, size, returnSize);

 	if (arr2[0] == 0 && arr2[1] == 0 && arr2[2] == 0 && arr2[3] == 1 && *returnSize == size+1)
 		return true;
 	else
 		return false;
 
 }
 
 bool test_3 (){
	int i, size = 3;
	int *arr = (int*) malloc (size *sizeof(int));
	int *returnSize = (int*) malloc (sizeof(int));
	int * arr2;
	arr[0] = arr[2] = 9;
	arr[1] = 8;
	
	arr2 = plusOne(arr, size, returnSize);
	if(arr2[0] == 0 &&  arr2[1] == 9 && arr2[2] == 9 && *returnSize == size)
		return true;
	else
		return false;
		
 }
 
  bool test_4 (){
	int i, size = 1;
	int *arr = (int*) malloc (size *sizeof(int));
	int *returnSize = (int*) malloc (sizeof(int));
	int * arr2;
	arr[0] =0;
	
	
	arr2 = plusOne(arr, size, returnSize);
	if(arr2[0] == 1)
		return true;
	else
		return false;
		
 }
 
int* plusOne(int* digits, int digitsSize, int* returnSize) {
 	
 	int i=0;
 	
 	int * returnarr = (int *) malloc (digitsSize * sizeof(int));
 	
 	bool inc = false;
 	while (!inc && i< digitsSize){
 	
 		if(digits [i] != 9){
 			returnarr [i] = digits[i] +1;
 			inc = true;
 			int a;
 			if(i != digitsSize-1){
	 			for (a=i+1; a<digitsSize; a++)
	 				returnarr[a] = digits[a];
 			}
 			*returnSize = digitsSize;
		}
		
		else{
			returnarr[i] =0;
			i++;
		}
	}
	
	if(i == digitsSize && !inc){
		free(returnarr);
		
		returnarr = (int*) malloc((digitsSize+1) * sizeof(int));
		returnarr[digitsSize] = 1;
		int j;
		for (j =0 ; j<digitsSize; j++)
			returnarr[j] =0;
		*returnSize = digitsSize+1;
	}
	
    return returnarr;
    
}


