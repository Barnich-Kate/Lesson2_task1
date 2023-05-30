#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int A, B, C;
	cout << "Type number A";
	cin >> A;
	cout << "Type number B";
	cin >> B;
	cout << "Type number C";
	cin >> C;

	if (A < B && A < C) {
		cout << A;
	} else if (B < A && B < C){
		cout << B;

	} else if (C < A && C < B) {
		cout << C;
	}

	return 0;
}
