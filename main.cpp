#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {

    string password = "1234";
    string userPass;
    string command;
    string note;

    
    cout << "Booting MyMiniOS...\n";
    cout << "System Loading...\n\n";


    cout << "Enter Password: ";
    cin >> userPass;

    if (userPass != password) {
        cout << "Wrong Password! Access Denied.\n";
        return 0;
    }

    cout << "Login Successful!\n\n";

    cin.ignore(); 

   
    while (true) {

        cout << "MyMiniOS> ";
        getline(cin, command);

        
        if (command == "help") {
            cout << "Available Commands:\n";
            cout << "help   - show commands\n";
            cout << "time   - show time\n";
            cout << "note   - write note\n";
            cout << "calc   - calculator\n";
            cout << "exit   - close OS\n";
        }

        
        else if (command == "time") {
            time_t now = time(0);
            cout << "Current Time: " << ctime(&now);
        }

        
        else if (command == "note") {
            cout << "Enter your note: ";
            getline(cin, note);
            cout << "Note Saved!\n";
        }


        else if (command == "calc") {
            int a, b;
            char op;

            cout << "Enter first number: ";
            cin >> a;

            cout << "Enter operator (+ - * /): ";
            cin >> op;

            cout << "Enter second number: ";
            cin >> b;

            if (op == '+')
                cout << "Result: " << a + b << endl;
            else if (op == '-')
                cout << "Result: " << a - b << endl;
            else if (op == '*')
                cout << "Result: " << a * b << endl;
            else if (op == '/') {
                if (b != 0)
                    cout << "Result: " << a / b << endl;
                else
                    cout << "Cannot divide by zero\n";
            }
            else
                cout << "Invalid operator\n";

            cin.ignore(); 
        }

        
        else if (command == "exit") {
            cout << "Shutting down MyMiniOS...\n";
            break;
        }

    
        else {
            cout << "Invalid Command. Type help.\n";
        }
    }

    return 0;
}
