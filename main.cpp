#include <iostream>
using namespace std;

int main ()
{
    string userName;
    string password;
    string userPassword;
    int loginAttempt = 0;

    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "create password:";
        cin >> password;
        
        cout << "Ready to login\n";
        
         cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;
        

        if (userName == userName && userPassword == password)
        {
            cout << "Welcome!\n";
            break;
        }
       
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    }

    cout << "Thank you for logging in.\n";
}