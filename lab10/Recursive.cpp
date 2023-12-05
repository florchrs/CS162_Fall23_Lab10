#include <iostream>

using namespace std;

void pattern(int n, int col) {
    if (n/2 == 1) { //loop till first line
        for (int i = 0; i < col; i++) cout << " "; //white space
        cout << "*" << endl;
    } else pattern(n/2, col);

    for (int i = 0; i < col; i++) cout << " "; //white space //this whole 12-20 will loop
    for (int i = 0; i < n; i++) cout << "*";
    cout << endl;

    if (n/2 == 1) {
        for (int i = 0; i < col+n/2; i++) cout << " "; //white space
        cout << "*" << endl;
    } else pattern(n/2, col+ (n/2));

}


int main(){
    //col is white space, int n is number of *'s at max
	int x = 8;
	int y = 0;
	pattern(x, y);
}