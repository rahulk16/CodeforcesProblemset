//https://codeforces.com/problemset/problem/282/A
#include <iostream>
#include <string>
using namespace std;

int main(){
	int test, result = 0;
	cin >> test;
	for(int i = 0; i < test; i++){
		string statement;
		cin >> statement;
		if(statement == "X++" || statement == "++X"){
			result++;
		}else{
			result--;
		}
	}
	cout << result << endl;
}