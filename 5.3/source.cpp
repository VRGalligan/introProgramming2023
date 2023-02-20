#include <iostream>

using namespace std;

int main() {
    int selection;
    do{
        cout << " <<< MAIN MENU >>>" << endl;
        cout << endl;
        cout << "1. Change Actions" << endl;
        cout << "2. Button Layout" << endl;
        cout << "3. Keybindings" << endl;
        cout << "4. OnEvent Scripts" << endl;
        cout << "5. Exit" << endl;
        cout << "Select a Number: ";
        cin >> selection;
        
        switch (selection){
            case 1:
            cout << "do Change Actions routine..." << endl;
            break;

            case 2:
            cout << " do Button Layout routine..." << endl;
            break;

            case 3:
            cout << "do Keybindings..." << endl;
            break;

            case 4:
            cout << "do Onevent Scripts routine..." <<endl;
            break;

            case 5:
            cout << "Exiting..." << endl;
            exit(0);

            default:
            cout << "Invalid entry" << endl;
            break;

        }
        
    } while (selection != 0);
}