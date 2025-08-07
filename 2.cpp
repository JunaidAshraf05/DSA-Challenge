#include<bits/stdc++.h>
using namespace std;
/*
 A school has following rules for gradng systems
 a. Below 25-F
 b.25 to 44 -E
 c. 45 to 49 - D
 d. 50 to 59 - C
 e. 60 to 79 -B
 f. 80 to 100 - A
 
 Ask user to enter marks  and print the corresponding grade
 */

int main() {
    int marks;
    cout << "Enter your marks: ";
    // Taking input from the user
    cin >> marks;
    if (marks < 25) {
        cout << "Grade: F" << endl;
    } else if (marks >= 25 && marks < 45) {
        cout << "Grade: E" << endl;
    } else if (marks >= 45 && marks < 50) {
        cout << "Grade: D" << endl;
    } else if (marks >= 50 && marks < 60) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60 && marks < 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 80 && marks <= 100) {
        cout << "Grade: A" << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }

    return 0;
}
