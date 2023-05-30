#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int A, B;
	cout << "Type number A";
	cin >> A;
	cout << "Type number B";
	cin >> B;

	if (A != B) {
		A,B = A+B;
	} else {
		A,B = 0;

	}
		cout << "A"<< A << endl;
		cout << "B" << B;
	return 0;
}
