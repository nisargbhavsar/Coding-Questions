#include <bits/stdc++.h>
using namespace std;

//bool is_palin (long long a);

int main(){
	int times;
	cin>>times;
	for(int i =0; i< times; i++)
	{
		long long start;
		deque<int> number;
		cin>>start;
		int num_size =0;
		while(start >0)
		{
			number.push_front(start%10);
			start/=10;
			num_size++;
		}
		if(num_size == 1) //one digit number
		{
			number[0] =1;
			number[1] = 1;
			num_size =2;
		}
		else
		{
			int midpoint;
			bool even =false;
			if(num_size%2 != 0) //Odd sized number
			{
				midpoint = ceil((double)num_size/2);
				cout<<midpoint<<" is the midpoint index";
			}
			else //Even sized number
			{
				midpoint = num_size/2;
				even=true;
				cout<<midpoint<<" is the midpoint index for an evenly sized number";
			}
			
			bool first_condition =true;
			for(int temp = 0; temp<num_size/2; temp++)
			{
				
				if(!(number[midpoint] < number [midpoint + temp]))
				{
					first_condition = false;
					break;
				}
			}
			deque<int> temp = number;
			for(int temp = midpoint+1; temp<num_size/2; temp++)
			{
				number[midpoint+temp] = number[midpoint-temp];
			}
			
						
			if(!first_condition) //all numbers on left side of midpoint are not greater than all the numbers on the right size
			{
				int k =0;
				while(!(number>temp) && k<(num_size/2))
				{
					if(number[midpoint + k] ==9)
					{
						number[midpoint-k] =number[midpoint+k] = 0;
						number[midpoint-k-1] = number[midpoint+k+1] = 1;
					}
					else
					{
						number[midpoint-k]+=1;
						number[midpoint+k]+=1;
					}
				}
			}	
		}
		for(int temp=0; temp<num_size; temp++)
		{
			cout<<number[temp];
		}
		cout<<endl;
	}
}
