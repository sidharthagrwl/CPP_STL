#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int arr[3] = {1,2,3};
	array<int,4> arr2 = {1,2,3,4};
	
	int size = arr2.size();
	cout << "print elements " << endl;
	for(int i=0;i<size;i++) {
		cout << arr2[i] << endl;
	}
	
	cout << "element at 2nd index " << arr2.at(2) << endl;
	cout << "array empty or not? " << arr2.empty() << endl;
	
	cout << "first element " << arr2.front() << endl;
	cout << "last element " << arr2.back() << endl;
	
	cout << endl;
	
	vector <int> v;
	cout << "capacity " << v.capacity() << endl;
	cout << "size " << v.size() << endl;
	
	v.push_back(12);
	v.push_back(23);
	v.push_back(35);
	v.push_back(47);
	
	cout << "size of v " << v.size() << endl;
	cout << "capacity of v " << v.capacity() << endl;
	
	cout << "element at index 3 " << v.at(2) << endl;
 	
 	cout << "front " << v.front() << endl;
 	cout << "back " << v.back() << endl;
 	
 	cout << "before pop " << endl;
 	
 	for(int i=0;i<v.size();i++) {
 		cout << v[i] << " ";
 	}
 	
 	cout << endl;
 	
 	v.pop_back();
 	
 	cout << "after pop " << endl;
 	
 	for(int i=0;i<v.size();i++) {
 		cout << v[i] << " ";
 	}
 	
 	cout << endl;
 	
 	cout << "before clear " << endl;
 	cout << v.size() << endl;
 	v.clear();
 	cout << "after clear " << endl;
 	cout << v.size() << endl;
	
	
	cout << endl;
	
	vector <int> a(5,1);
	for(int i=0;i<a.size();i++) {
		cout << a[i] << " ";
	}
	
	vector <int> b(a);
	for(int i=0;i<b.size();i++) {
		cout << b[i] << " ";
	}
}