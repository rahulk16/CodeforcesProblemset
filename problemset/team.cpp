//https://codeforces.com/problemset/problem/231/A
#include <iostream>
#include <string>

using namespace std;

int main(){
	int test, result = 0;
	cin >> test;
	for(int i = 0; i < test; i++){
		int f1, f2, f3, sum;
		cin >> f1 >> f2 >> f3;
		sum = f1 + f2 + f3;
		if(sum > 1)
			result++;
	}
	cout << result << endl;

}