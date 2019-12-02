//https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <string>

using namespace std;

int main(){
	int result = 0;
	string s1, s2;
	cin >> s1 >> s2;
	for(int i = 0; i < s1.length(); i++){
		if(tolower(s1[i]) > tolower(s2[i])){
			result = 1;
			break;
		}else if(tolower(s1[i]) < tolower(s2[i])){
			result = -1;
			break;
		}else{
			result = 0;
			continue;
		}
	}
	cout << result << endl;
}