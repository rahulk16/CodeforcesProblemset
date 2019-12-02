//https://codeforces.com/problemset/problem/339/A
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	string sum;
	int k = 0;
	vector<int> v;
	cin >> sum;
	for(int i = 0; i < sum.length(); i++){
		if(sum[i] != '+'){
			string temp;
			temp = sum[i];
			v.push_back(stoi(temp));
		}
	}
	sort(v.begin(), v.end());
	string result;
	for(int i = 0; i < v.size(); i++){
		int temp = v[i];
		result.append(to_string(temp));
		result.push_back('+');
	}
	result.erase(result.length()-1,1);
	cout << result << endl;
}