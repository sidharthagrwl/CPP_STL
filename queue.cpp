#include <bits/stdc++.h>
using namespace std;

int main() {
	
	//FIFO
	
	queue<string> q;
	q.push("car");
	q.push("bike");
	q.push("truck");
	
	// cout << "size before pop " << q.size() << endl;
	
	// q.pop();
	
	// cout << "size after pop " << q.size() << endl; 
	
	cout << "first element " << q.front() << endl;
	cout << "last element " << q.back() << endl;
	
	cout << "empty or not " << q.empty() << endl;
}