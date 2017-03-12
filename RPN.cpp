#include <bits/stdc++.h>
using namespace std;

int main(){
	int times;
	cin>>times;
	for (int i=0; i<times; i++)
	{
		std::string input;
		std::stack<char> operator_stack;
		std::queue<char> operand_queue;
		cin>>input;
		for(int j=0; j<input.length(); j++)
		{
			char character = input.at(j);
			if(character == '(')
				continue;
			else if(character == ')' && ')' != input.at(j-1))
			{
				while(!operand_queue.empty())
				{	
					char temp = operand_queue.front();
					operand_queue.pop();
					cout<<temp;
				}
				for(int num =0; num<2; num++)
				{
					if(!operator_stack.empty())
					{
						char temp = operator_stack.top();
						operator_stack.pop();
						cout<<temp;
					}
				}
			}
			else if (character != ')')
				((character == '*' || character == '+' || character == '-' || character == '^' || character == '/') ? operator_stack.push(character) : operand_queue.push(character));
		}
		
		while(!operator_stack.empty())
		{
			char temp = operator_stack.top();
			operator_stack.pop();
			cout<<temp;
		}
		
	}
	return 0;
}
