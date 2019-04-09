#include "pch.h"
#include "balance.h"
#include <iostream>
using namespace std;

int main() {
	int a[5] = { 0,1,2,3,-1 };
	int b[6] = { 4,5,6,7,8,-1 };
	int c[10] = { 10, 11, 12, 13, 14, 15, 16, 17, 18, -1 };

	// 불량동전 초기화하기
	initialize(33); // 불량 동전의 확률 p = 33%
	int ret = balance(a, b, c);
	cout << ret << endl;
	return 0;
}