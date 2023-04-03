#include <iostream>
#include <string>

using namespace std;

string name;
int age;

void ageCheck(int age){
    if (age >= 18) {
        cout << "You are 18 or older!\n";
    } else {
        cout << "You are younger than 18\n";
    }
}

int main() {
    cout << "Hello World\n";
    cout << "Enter your name\n";
    
    cin >> name;
    cout << "Welcome " << name << ". How old are you?" << "\n";
    cin >> age;

    ageCheck(age);


    return 0;
}