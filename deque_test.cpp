#include <bits/stdc++.h>
using namespace std;

//bool is_palin (long long a);

int main(){
deque<int> first,second;
first.push_front(9);
first.push_front(8);
second.push_front(9);
//second.push_front(1);
bool condition = first>second;
cout<<condition;
}
