#include <iostream>
using namespace std;

int main() {
    int time;
    cout << "welcome to Zomatooooo\n";
    cout << "Enter the Time Now(24HRS Format):";
    cin >> time;

    if (time >= 23) {
        cout << "its too late to order a snack and have it,The item cant be ordered ";
    } else {
        cout << "Ur snack wil be there any minute";
    }

    return 0;
}
