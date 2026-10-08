#include <iostream>
using namespace std;

int main() {
    bool isadult;

    int age;
    cout << "Enter age: ";
    cin >> age;

    isadult = (age >= 18) ? true : false;

    if (isadult)
        cout << "You are an adult.";
    else
        cout << "You are not an adult.";

    return 0;
}