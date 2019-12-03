//https://codeforces.com/problemset/problem/263/A
#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int matrix[6][6], row, col, result;
	for(int i = 0;i < 5;i++){
		for(int j = 0; j < 5;j++)
			cin >> matrix[i][j];
	}
	for(int i = 0;i < 5;i++){
		for(int j = 0;j < 5;j++){
			if(matrix[i][j] == 1){
				row = i;
				col = j;
			}
		}
	}
	result = abs(2 - row) + abs(2 - col);
	cout << result << endl;

}