#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

void passwordStrengthChecker(string password){
    int const passwordLength = password.length();
    // Check length of password
    if(passwordLength == 0) {
        cout << "You didnt put in a password" << endl;
    }
    else if (passwordLength < 5) {
        cout << "Your password is very short. Try to add more to it." << endl;
    }
    else if (passwordLength < 8) {
        cout << "You have a average password. Try to make it harder to guess." << endl;
    }
    else if (passwordLength < 12) {
        cout << "Your password has a good length!" << endl;
    }
    else if (passwordLength >= 12) {
        cout << "You have a long password!" << endl;
    }

    // Check for complexity of the password
    bool numberInPassword = false;
    bool symbolInPassword = false;
    
    for (char c : password) {
        if (isdigit(c)) {
            numberInPassword = true;
        }
        else if (!(isalpha(c))) {
            symbolInPassword = true;
        } 
    }

    if (symbolInPassword == false) {
        cout << "You should add one or more symbols to your password." << endl;
    }
    if (numberInPassword == false) {
        cout << "You should add one or more numbers to your password." << endl;
    }
}

int main() {
    string password;
    cout << "Put in your password here" << endl;
    cin >> password;

    passwordStrengthChecker(password);

    return 0;
}
