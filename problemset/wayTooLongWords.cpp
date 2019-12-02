//https://codeforces.com/problemset/problem/71/A
#include <iostream>
#include <string>
using namespace std;

int main(){
	int test;
	cin >> test;
	for(int i = 0; i < test; i++){
		string s;
		cin >> s;
		s = s.length() <= 10 ? s : s[0]+to_string(s.length()-2)+s[s.length()-1];
		cout << s << endl;
	}
}