#include<iostream>
using namespace std;
int main() {
	 int numb1;
	int numb2;
	cin >> numb1>> numb2;
	int i = 0;
	while (numb2 != 0) {
		int remainder = numb1%numb2;
		numb1 = numb2;
		numb2 = remainder;
	}
	cout << numb1;
	return 0;
}