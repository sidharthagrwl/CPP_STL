#include <bits/stdc++.h>
using namespace std;

int main() {
	 
	 deque<int> d;
	 d.push_back(1);
	 d.push_front(2);
	 
	 for(int i=0;i<d.size();i++) {
	 	cout << d[i] << " ";
	 }
	 
	 cout << endl;
	 
	 d.pop_back();
	 for(int i=0;i<d.size();i++) {
	 	cout << d[i] << " ";
	 }
	 
	 d.pop_front();
	 for(int i=0;i<d.size();i++) { 
	 	cout << d[i] << " ";
	 }
	 
	 cout << "first " << d.at(0) << endl;
	 cout << "first " << d.front() << endl;
	 cout << "last " << d.back() << endl;
	 cout << "empty or not " << d.empty() << endl;
	 
	 cout << "before erase size " << d.size() << endl;
	 d.erase(d.begin(),d.begin()+1);
	 cout << "after erase size " << d.size() << endl;
	 
	for(int i=0;i<d.size();i++) {
		cout << d[i] << " ";
	} 
}