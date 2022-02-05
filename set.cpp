#include <bits/stdc++.h>
using namespace std;

int main() {
	
	set<int> s;
	
	// O(logn)
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
	
	
}