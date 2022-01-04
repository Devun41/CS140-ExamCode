/*
Devun Schneider
CS 140
Prof Hawkins
Exam 1 Code
Write a C++ program that uses a for loop to print 1 to 10. If the count is divisible
by 2 print “foo”. If the count is divisible by 3 print “bar”. Note that there are 4
possibilities: number, number with foo, number with bar, and number with foobar. 
Don’t forget to include any libraries that you require.

*/
#include <iostream>
using namespace std;

void main() {
	for (int i = 1; i <= 10;i++) {
		if (i % 2 == 0 && i % 3 == 0) {
			cout << i << ":foobar\n";
		}
		else if (i % 2 ==0) {
			cout << i << ":foo\n";
		}
		else if (i % 3 == 0) {
			cout << i << ":bar\n";
		}
		else{
			cout << i << ":\n";
		}
	}
}