#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
 double P, S;
 int k, i;
 P = 1;
 k = 1;
 
 // While While
 while (k<=15) {
 S = 0;
 i = 1;
 while (i<=k) {
 S += i + 1.0;
 i++;
} P *= sqrt(1.0 + pow(S, 2))/(1.0 + S);
 k++;
} 
 cout << P << endl;

 // Do Do While While
 P = 1;
 k = 1;
 do {
 S = 0;
 i = 1;
 do {
 S += i + 1.0;
 i++;
 } while (i<=k);
 P *= sqrt(1.0 + pow(S, 2)) / (1.0 + S);
 k++;
 } while (k<=15);
 cout << P << endl;
 
 //For For++
 P = 1;
 for (k = 1; k <= 15; k++) {
	 S = 0;
	 for (i = 1; i <= k; i++) {
		 S += i + 1.0;
	 }
	 P *= sqrt(1.0 + pow(S, 2)) / (1.0 + S);
 }
 cout << P << endl;

	 //For For--
 P = 1;
 for (k = 15; k >= 1; k--) {
		 S = 0;
		 for (i = k; i >= 1; i--) {
			 S += i + 1.0;
		 }
		 P *= sqrt(1.0 + pow(S, 2)) / (1.0 + S);
	 }

 cout << P << endl;
 return 0;
}