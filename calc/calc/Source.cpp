#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

unsigned int factorial(int a) {
    int r = 1;
    for (int i = a; i > 0; i--) r *= i;
    return r;
}

int main() {
    double a, b, r;
    char op, choice[10];

    cout << "+ to add, - to subtract, * to multiply, / to divide, \
^ to power, ! to factorial\n\n";
start: // THE BEGINING

    cin >> a; // 1ST NUMBER
reused: //
    cin >> op; // OPERATOR
    // WHAT TO DO
    if (op == '!') r = factorial(a);
    else {
        cin >> b;
        if (op == '+') r = a + b;
        if (op == '-') r = a - b;
        if (op == '*') r = a * b;
        if (op == '/') r = a / b;
        if (op == '^') r = pow(a, b);
    }
    // COUT THE RESULT
    cout << "=" << r << endl;

    // CREATING THE BASE FOR THE LOOP
    cout << "\nType 'restart' to start again from the beggining, \n or type 'quit' to quit: ";
    cin >> choice; // TELL THE PROGRAM WHAT TO DO
    if (!strcmp(choice, "restart")) goto start; // START FROM THE BEGINING
    if (!strcmp(choice, "quit")) goto end; // QUIT THE PROGRAM

end: // TO QUIT THE PROGRAM
    return 0;
}