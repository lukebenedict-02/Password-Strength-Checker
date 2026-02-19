#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using namespace std;

/*
@brief: This method checks to see if your password is a weak, moderate, or strong password. It gives comments on how you can improve your password if it is weak.

@param: password - A string representing your password
@return:void
 */
void passwordStrengthChecker(string password){
    // Strength level
    int score = 0;
    int const passwordLength = password.length();
    // Check length of password
    if(passwordLength == 0) {
        cout << "You didnt put in a password" << endl;
    }
    else if (passwordLength < 5) {
        score++;
        cout << "Length: very short" << endl;
    }
    else if (passwordLength < 8) {
        score += 2;
        cout << "Length: short" << endl;
    }
    else if (passwordLength < 12) {
        score += 3;
        cout << "Length: normal" << endl;
    }
    else if (passwordLength >= 12) {
        score += 4;
        cout << "Length: good" << endl;
    }
    else {
        score += 5;
        cout << "Length: great" << endl;
    }

    // Check for complexity of the password
    bool numberInPassword = false;
    bool symbolInPassword = false;
    
    for (char c : password) {
        if (isdigit(c)) {
            numberInPassword = true;
            score++;
        }
        else if (!(isalpha(c))) {
            symbolInPassword = true;
            score++;
        } 
    }

    // Says whether you have a weak, moderate, or strong password.
    switch(score){
        case 0:
            cout << "You have a very weak password" << endl;
            break;
        case 1:
            cout << "You have a very weak password" << endl;
            break;
        case 2:
            cout << "You have a weak password" << endl;
            break;
        case 3:
            cout << "You have a moderate password" << endl;
            break;
        case 4: 
            cout << "You have a moderate password" << endl;
            break;
        case 5:
            cout << "You have a strong password" << endl;
            break;
        case 6:
            cout << "You have a very strong password" << endl;
            break;
        case 7:
            cout << "You have a very strong password" << endl;
            break;
    }

    // Tells whether you should add a number or symbol to your password
    if (symbolInPassword == false) {
        cout << "You should add one or more symbols to your password" << endl;
    }
    if (numberInPassword == false) {
        cout << "You should add one or more numbers to your password" << endl;
    }

}

int main() {
    string password;
    cout << "Put in your password here" << endl;
    cin >> password;

    passwordStrengthChecker(password);

    return 0;
}
