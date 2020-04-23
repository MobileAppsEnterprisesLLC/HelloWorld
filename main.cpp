//
//  main.cpp
//  Created 4/23/20
//

#include <iostream>
using namespace std;

void bottlesOnWall (int count) {
    if (count == 0) { return; }
    cout << count << " bottles of beer on the wall, ";
    cout << count << " bottles of beer!\n";
    int newCount = count - 1;
    cout << "Take one down, pass it around, ";
    cout << newCount << " bottles of beer on the wall.\n";
    bottlesOnWall(newCount);
}

int main () {
    int i;
    cout << "Hello World!\n";
    cout << "Please enter a number of bottles: ";
    cin >> i;
    bottlesOnWall(i);
    return 0;
}
