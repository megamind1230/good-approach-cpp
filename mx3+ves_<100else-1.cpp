//07_homework_03_answer.cpp
//max of 3 positive nums but max is less than 100 or print -1
#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int res = -1;

	if (a < 100 && a > res)
		res = a;

	if (b < 100 && b > res)
		res = b;

	if (c < 100 && c > res)
		res = c;

	cout<<res<<"\n";

	return 0;
}
