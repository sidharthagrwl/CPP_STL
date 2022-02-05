#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// tc -> insert, find, erase, count - O(logn) (red-black trees / balanced trees)
	// unordered map -> O(1) (hashtable)
	
	map<int,string> m;
	
	// m.insert();
	
	m[1] = "car";
	m[2] = "bike";
	m[4] = "truck";
		
	cout << "before erase " << endl;
	
	for(auto i:m) {
		cout << i.first << " -> " << i.second << endl;
	}
	
	m.erase(4);
	cout << "after erase " << endl;
	
	for(auto i:m) {
		cout << i.first << " -> " << i.second << endl;
	}
	// cout << "4 " << m.count(4) << endl;
	
	// m.find()
	
}