//https://codeforces.com/problemset/problem/96/A
#include <iostream>
#include <string>
using namespace std;

int main(){
	string scores;
	cin >> scores;
	int cnt0 = 0, cnt1 = 0;
	for(int i = 0; i < scores.length(); i++){
		if(scores[i] == '0'){
			cnt0++;
			cnt1 = 0;
			if(cnt0 >= 7)
				break;
		}
		if(scores[i] == '1'){
			cnt1++;
			cnt0 = 0;
			if(cnt1 >= 7)
				break;
		}
	}
	if(cnt1 >= 7 || cnt0 >= 7)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}