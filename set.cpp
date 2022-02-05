#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// tc - insert,find,erase,count --> O(logn)
		  // - size, begin, empty --> O(1)
	
	set<int> s;
	
	s.insert(1);
	s.insert(143);
	s.insert(121);
	s.insert(11);
	
	set<int> :: iterator it = s.begin();
	it++;
	
	s.erase(it);
	
	for(auto i:s) {
		cout << i << " ";
	}
	
	cout << endl;
	
	cout << s.count(121) << endl;
	cout << s.count(-21) << endl;
	
	cout << s.empty() << endl;
	
	// s.find();
	
	
}