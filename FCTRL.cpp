#include <bits/stdc++.h>
using namespace std;

int num_trail_zeros (int n);

int main(){
	int iterations;
	int number;
	cin>>iterations;
	for(int i=0; i< iterations; i++){
		cin>>number;
		number = num_trail_zeros(number);
		cout<<number<<endl;
	}
}

int num_trail_zeros(int n)
{
    // Initialize result
    int count = 0;
 
    // Keep dividing n by powers of 5 and update count
    for (int i=5; n/i>=1; i *= 5)
          count += n/i;
 
    return count;
}
