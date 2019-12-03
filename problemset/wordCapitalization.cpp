//https://codeforces.com/problemset/problem/281/A
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string word, newWord;
	cin >> word;
	newWord = toupper(word[0]);
	newWord.append(word.substr(1,word.length()-1));
	cout << newWord << endl;
}