#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (j == 1 || j == 7 || (i == j && j <= 4) || (j == 8 - i && j > 4)) {
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << endl; 
    }
	cout << endl;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 9; j++) {
            if (j == 6 - i || j == 4 + i || (i == 3 && j >= 3 && j <= 7)) {
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
	cout << endl;
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 5; j++) {
            if (j == 1 || (i == 1 && j < 5) || (i == 4 && j < 5) || (j == 5 && i > 1 && i < 4) || (i > 4 && j == i - 3)) {
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << endl; 
    }
    cout << endl;
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 7 || j == 3) {
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << endl; 
    }
    cout << endl;
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 7 || j == 1 || (i > 1 && i < 7 && j == 1)) {
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << endl; 
    }
    cout << endl;
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if ((i == 1 || i == 7) && (j > 1 && j < 7)) { 
                cout << "+";
            } else if ((j == 1 || j == 7) && (i > 1 && i < 7)) { 
                cout << "+";
            } else {
                cout << " "; 
            }
        }
        cout << endl; 
    }
    cout << endl;
    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            if (j == 1 || j == 7 || j == i) { 
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
