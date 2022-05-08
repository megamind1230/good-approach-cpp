/*
Homework 8: Print Me


Write a program that reads 2 integers A, b
	b is either -1 or 1
		If -1, print 2*a+1
		If 1, print a*a

However, you need to assume the following
	Don’t use if conditions or ternary operator
	Don’t use comparison operators (e.g. ==, <=, >=, etc)
*/

#include<iostream>
using namespace std;

int main() {
	int a, b;

	cin >> a >> b;

	// Let's code the 2 possible results
	int equ_is_neg_1 = 2 * a + 1;
	int equ_is_1 = a * a;

	// The trick: we want to make them in 1 equation


	// Where if input is: only 1 equation is computed and the second part is zero
	
	// To do so: convert	 -1 -> 0		and			1 -> 1
	// With simple math, we can convert [-1 1] to [0 1] range

	// is_1 = 1 when (b = 1)		and			is_1 =  0 when (b =-1)
	int is_1 = (b + 1) / 2; /*core1*/

	//now this is easier
	// is_neg_1 = 1 when (b = -1)		and		is_neg_1 = 0 when (b 1)
	int is_neg_1 = 1 - is_1;

	// when b = -1 ... is_1 = 0 ... then the {{{left}}} side would be canceled
	cout << is_1 * equ_is_1 + is_neg_1 * equ_is_neg_1; /*core2*/

	return 0;
}
/*
we can re-use it
	when having a two options choice
		make on of them refer to -1 (using a ternary assigment)
		and the other refer to 1
				then use the code above
				*/
