//08_8_D.cpp
//print the num of digits for an int
#include<iostream>
using namespace std;
int main() {
	int num;
	cin>>num;
	//tricky point.. notice that num will be zero later
	//so we took a copy of it to print later
	int tem_num = num;
	int digits = 0;
	//special case 1
	if (num == 0)
		digits = 1;
	//special case 2
	else if (num == -2147483648)
		digits = 10;
	//core logic
	else {
		if (num < 0)
			num = -num;//make it +ve to work properly later on it

		while (num > 0) {
			digits += 1;
			num = num / 10;
		}
	}
	cout << "# of digits of " << tem_num << " is " << digits;
}
