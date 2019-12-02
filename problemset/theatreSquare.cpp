//https://codeforces.com/problemset/problem/1/A
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long long n,m,sq,l,w;
	cin>>n>>m>>sq;
	l = n/sq;
	w = m/sq;

	l = n%sq == 0 ? l : ++l;
	w = m%sq == 0 ? w : ++w;

	cout << l*w << endl;
}