#include <bits/stdc++.h>
using namespace std;

int main() {
	
	// int a[3] = {1,2,3};
	// array<int,4> a = {1,2,3,4};
	
	// int size = a.size();
	// for(int i=0;i<size;i++) {
	// 	cout << a[i] << endl;
	// }
	
	// cout << "element at 2nd index " << a.at(2) << endl;
	// cout << "array empty or not? " << a.empty() << endl;
	
	// cout << "first element " << a.front() << endl;
	// cout << "last element " << a.back() << endl;
	
	vector <int> v;
	// cout << v.capacity() << endl;
	// cout << v.size() << endl;
	
	// v.push_back(1);
	// v.push_back(2);
	// v.push_back(3);
	// v.push_back(4);
	
	// cout << v.size() << endl;
	// cout << v.capacity() << endl;
	
	// cout << v.at(2) << endl;
 	
 	// cout << "front " << v.front() << endl;
 	// cout << "back " << v.back() << endl;
 	
 	// cout << "before pop " << endl;
 	
 	// for(int i=0;i<v.size();i++) {
 	// 	cout << v[i] << " ";
 	// }
 	
 	// cout << endl;
 	
 	// v.pop_back();
 	
 	// cout << "after pop " << endl;
 	
 	// for(int i=0;i<v.size();i++) {
 	// 	cout << v[i] << " ";
 	// }
 	
 	// cout << endl;
 	
 	// cout << "before clear " << endl;
 	// cout << v.size() << endl;
 	// v.clear();
 	// cout << "after clear " << endl;
 	// cout << v.size() << endl;
	
	vector <int> a(5,1);
	// for(int i=0;i<a.size();i++) {
	// 	cout << a[i] << " ";
	// }
	
	vector <int> b(a);
	for(int i=0;i<b.size();i++) {
		cout << b[i] << " ";
	}
}