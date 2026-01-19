#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main() {
    string password = "0852";
    string userPass;
    string note = "";

    // Boot Screen
    cout << "Booting MyMiniOS...\n";
    cout << "System Loading...\n\n";

    // Password Check
    cout << "Enter Password: ";
    cin >> userPass;

    if (userPass == password) {
        cout << "Access Granted.\n";

        while (true) {
            cout << "\n1. Time\n2. Calculator\n3. Notepad\n4. Exit\nEnter Choice: ";
            int choice;
            cin >> choice;

            switch (choice) {
                case 1: {
                    time_t now = time(0);
                    cout << "Current Time: " << ctime(&now);
                    break;
                }
                case 2: {
                    double a, b; char op;
                    cout << "Enter calculation (e.g., 5 + 3): ";
                    cin >> a >> op >> b;
                    if (op == '+') cout << "Result: " << a + b << endl;
                    else if (op == '-') cout << "Result: " << a - b << endl;
                    else if (op == '*') cout << "Result: " << a * b << endl;
                    else if (op == '/') cout << "Result: " << (b != 0 ? a / b : 0) << endl;
                    break;
                }
                case 3: {
                    cout << "1. Write Note\n
                      2. View Note\nChoice: ";
                    int nChoice; cin >> nChoice;
                    if (nChoice == 1) {
                        cout << "Enter note: ";
                        cin.ignore();
                        getline(cin, note);
                    } else if (nChoice == 2 ) {
                           cout<<"\n Recent Note is : "<<nChoice;
                    } else  {
                        cout << "Note: " << note << endl;
                    }
                    break;
                }  
                default:
                    cout << "Invalid command.\n";
                    break;
            }
        }
    } else {
        cout << "Access Denied." << endl;
    }

    return 0;
}
  































    // if (userPass != password) {
    //     cout << "Wrong Password! Access Denied.\n";
    //     return 0;
    // }

    // cout << "Login Successful!\n\n";

    // cin.ignore(); // clear input buffer

    // // MAIN LOOP (OS runs inside this loop)
    // while (true) {

    //     cout << "MyMiniOS> ";
    //     getline(cin, command);

    //     // HELP COMMAND
    //     if (command == "help") {
    //         cout << "Available Commands:\n";
    //         cout << "help   - show commands\n";
    //         cout << "time   - show time\n";
    //         cout << "note   - write note\n";
    //         cout << "calc   - calculator\n";
    //         cout << "exit   - close OS\n";
    //     }

    //     // TIME COMMAND
    //     else if (command == "time") {
    //         time_t now = time(0);
    //         cout << "Current Time: " << ctime(&now);
    //     }

    //     // NOTE COMMAND
    //     else if (command == "note") {
    //         cout << "Enter your note: ";
    //         getline(cin, note);
    //         cout << "Note Saved!\n";
    //     }

    //     // CALCULATOR COMMAND
    //     else if (command == "calc") {
    //         int a, b;
    //         char op;

    //         cout << "Enter first number: ";
    //         cin >> a;

    //         cout << "Enter operator (+ - * /): ";
    //         cin >> op;

    //         cout << "Enter second number: ";
    //         cin >> b;

    //         if (op == '+')
    //             cout << "Result: " << a + b << endl;
    //         else if (op == '-')
    //             cout << "Result: " << a - b << endl;
    //         else if (op == '*')
    //             cout << "Result: " << a * b << endl;
    //         else if (op == '/') {
    //             if (b != 0)
    //                 cout << "Result: " << a / b << endl;
    //             else
    //                 cout << "Cannot divide by zero\n";
    //         }
    //         else
    //             cout << "Invalid operator\n";

    //         cin.ignore(); // clear buffer after calculator
    //     }

    //     // EXIT COMMAND
    //     else if (command == "exit") {
    //         cout << "Shutting down MyMiniOS...\n";
    //         break;
    //     }

    //     // WRONG COMMAND
    //     else {
    //         cout << "Invalid Command. Type help.\n";
    //     }
    // }

  