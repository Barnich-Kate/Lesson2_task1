#include <iostream>
#include <math.h>
using namespace std;
int main() {
		
	int x, y;
	cout << "Type point x";
	cin >> x;
	cout << "Type point y";
	cin >> y;
	if (x > 0 && y > 0) {
		cout << "It is first quarter";
	} else if (x < 0 && y > 0){
		cout << "It is second quarter";
	} else if (x < 0 && y < 0) {
		cout << "It is third quarter";
	} else if (x > 0 && y < 0) {
		cout << "It is fourth quarter";
	}

	return 0;
}
