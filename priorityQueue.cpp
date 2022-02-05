#include <bits/stdc++.h>
using namespace std;

int main() {
	
	//max-heap
	priority_queue<int> maxh;
	
	//min-heap
	priority_queue<int,vector<int>, greater<int> > minh;
	
	maxh.push(13);
	maxh.push(21); 
	maxh.push(53);
	maxh.push(47);
	maxh.push(12);
	
	int size = maxh.size();
	
	for(int i=0;i<size;i++) { 
		cout << maxh.top() << " ";
		maxh.pop();
	}
	cout << endl;
	
	minh.push(12);
	minh.push(24);
	minh.push(5);
	minh.push(87);
	minh.push(1);
	
	int minSize = minh.size();
	
	for(int i=0;i<minSize;i++) {
		cout << minh.top() << " ";
		minh.pop();
	}
	cout << endl;
	
	cout << "empty or not " << minh.empty() << endl;
}