#include <bits/stdc++.h>
using namespace std;

bool greater_precedence (char a, char b);

int main(){
	int times;
	cin>>times;
	for (int i=0; i<times; i++)
	{
		std::string input;
		std::queue<char> output_queue;
		std::stack<char> o_stack;
		cin>>input;
		for(int j=0; j<input.length(); j++)
		{
			char character = input.at(j);
			if(character == '*' || character == '+' || character == '-' || character == '^' || character == '/')
			{
				while((o_stack.top() == '*' || o_stack.top() == '+' || o_stack.top() == '-' || o_stack.top() == '^' || o_stack.top() == '/') && greater_precedence(o_stack.top(), character))
				{
					output_queue.push(o_stack.top());
					o_stack.pop();
				}
				o_stack.push(character);
			}
			else if(character == '(')
				o_stack.push(character);
			else if(character == ')')
			{
				while(o_stack.top() != '(')
				{
					output_queue.push(o_stack.top());
					o_stack.pop();
				}
				o_stack.pop();
			}
			else
			{
				output_queue.push(character);
			}
		}
		while(!o_stack.empty())
		{
			output_queue.push(o_stack.top());
			o_stack.pop();
		}
		while(!output_queue.empty())
		{
			cout<<output_queue.front();
			output_queue.pop();
		}
		cout<<endl;
	}
}

 bool greater_precedence(char a, char b){
 	int first, second;
 	if(a == '*' || a == '/')
 		first = 3;
 	if(b == '*' || b == '/')
 		second = 3;
 	if(a == '+' || a == '-')
 		first = 2;
 	if(b == '+' || b == '-')
 		second = 2;
 	if(a == '^')
 		first = 4;
 	if(b == '^')
 		second = 4;
 	
 	if(first > second)
 		return true;
 	else
 		return false;
 	
 }
