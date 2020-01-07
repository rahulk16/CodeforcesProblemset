//https://codeforces.com/problemset/problem/58/A
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string str, test = "hello";
    cin >> str;
    int j = 0, cnt = 0;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == test[j]){
            j++;
            cnt++;
        }
        if(cnt == 5)
            break;
    }
    if(cnt == 5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}