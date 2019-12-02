//https://codeforces.com/problemset/problem/118/A
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string s, sNew;
	cin >> s;
	char vowels[] = {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'y', 'Y'};
	for(int i = 0; i < s.length(); i++){
		bool check = find(begin(vowels), end(vowels), s[i]) != end(vowels);
		if(check == 0){
			sNew.push_back('.');
			sNew.push_back(tolower(s[i]));
		}
	}
	cout << sNew << endl;
}