#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int A;
	cout << "Type number";
	cin >> A;
	if (A > 0) {
		A++;
	} else {
		A-=2;
	}
	cout << "A is equal:" << A;
	return 0;
}
