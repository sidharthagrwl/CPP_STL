#include <bits/stdc++.h>
using namespace std;

int main() {
	
	//LIFO
	
	stack<string> s;
	
	s.push("car");
	s.push("bike");
	s.push("truck");
	
	cout << "top element " << s.top() << endl;
	
	s.pop();
	
	cout << "top element " << s.top() << endl;
	
	cout << "size " << s.size() << endl;
	cout << "empty or not " << s.empty() << endl;
	
	
}