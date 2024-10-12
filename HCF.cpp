#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int counter = 0;
	int numb1, numb2, sum;
	
	cin >> numb1 >> numb2;
	sum = numb1 + numb2;
	int i = numb1 + 1;
	while ( i >numb1&&i<numb2) {
		
		if (sum % i == 0) {
			counter = counter + 1;
			
		}
		i++;


	}
	
	cout <<counter;
	
	return 0;
}