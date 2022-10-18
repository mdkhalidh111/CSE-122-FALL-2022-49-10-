
/**CODE NAME : Wrong Subtraction
CODE NO : 977A
**/
#include<iostream>

using namespace std;


int main() {
	int a,b;

	cin >> a >> b;

	while(b--) {

		if ((a % 10) == 0) {
			a = a / 10;
		} else {
			a--;
		}
	}

	cout << a <<endl;
}
