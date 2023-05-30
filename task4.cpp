#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int A, B, C, count;
	cout << "Type number A";
	cin >> A;
	cout << "Type number B";
	cin >> B;
	cout << "Type number C";
	cin >> C;
	if (A > 0 && B > 0 && C >0) {
		count++;
		cout << "Amount of numbers is equal:" << count;
	} else {
		cout << "Too much negative numbers";
	}
	return 0;
}
