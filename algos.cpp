#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v;
	
	v.push_back(1);
	v.push_back(4);
	v.push_back(6);
	v.push_back(9);
	
	cout << binary_search(v.begin(),v.end(),4) << endl;
	
	// lower-bound, upper-bound
	
	int a = 3,b = 5;
	cout << max(3,5) << endl;
	cout << min(3,5) << endl;
	
	swap(a,b);
	cout << a << " " << b << endl;
	
	string str = "abc";
	reverse(str.begin(),str.end()); 
	
	cout << str << endl;
	
	rotate(v.begin(),v.begin()+1,v.end());
	cout << "after rotation " << endl;
	
	for(int i:v) {
		cout << i << " ";
	}
	
	cout << endl;
	
	vector<int> c;
	
	c.push_back(12);
	c.push_back(422);
	c.push_back(62);
	c.push_back(1);
	
	// intro-sort = quick + heap + insertion sort
	sort(c.begin(),c.end());
	
	for(int i:c) {
		cout << i << " ";
	}
	
}
