#include <iostream>
#include <cassert>

using namespace std;

int prompt(int lower, int upper, string message, string e_message) {
        int num;
        do {
                cout << message << endl;
                cin >> num;
                if(num < lower || num > upper) {
                        cout << e_message << endl;
                }

        } while(num < lower || num > upper);
        return num;
}

int main() {
        int value = prompt(0, 100, "Please enter a value", "Your value is invalid");
        cout << "The value chosen by the user is " << value << endl;

        return 0;
}
