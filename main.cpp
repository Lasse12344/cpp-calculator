#include <iostream>
#include "./color-console/include/color.hpp"


using namespace std;


int input1;
int input2;
string operation;


void image(){
    cout << "" << endl;

    cout << hue::blue << "_________        .__               .__          __                " << endl;
    cout << "\\_   ___ \\_____  |  |   ____  __ __|  | _____ _/  |_  ___________ " << endl;
    cout << "/    \\  \\/\\__  \\ |  | _/ ___\\|  |  \\  | \\__  \\   __\\/  _ \\_  __ \\ " << endl;
    cout << "\\     \\____/ __ \\|  |_\\  \\___|  |  /  |__/ __ \\|  | (  <_> )  | \\/" << endl;
    cout << " \\______  (____  /____/\\___  >____/|____(____  /__|  \\____/|__|   " << endl;
    cout << "        \\/     \\/          \\/                \\/                   " << hue::reset << endl;

    cout << "" << endl;

    cout << "*************" << endl
         << "* 1 * 2 * 3 *" << endl
         << "* 4 * 5 * 6 *" << endl
         << "* 7 * 8 * 9 *" << endl
         << "*     0     *" << endl
         << "*************" << endl;

    cout << "" << endl;

    cout << "******************" << endl
         << "* " << hue::green << "+ " << hue::reset << "| " << hue::green << "- " << hue::reset << "| " << hue::green << "* " << hue::reset << "| " << hue::green << "/ " << hue::reset << " *" << endl
         << "******************" << endl;

    cout << "" <<  endl;

    cout << hue::yellow << "Press CTRL + C to exit" << hue::reset << endl;
    cout << "" << endl;
}


void calculate(){
    //first number
    cout << "First number: ";
    cin >> input1;

    //second number
    cout << "Second number: ";
    cin >> input2;

    //operation
    cout << "Operation: ";
    cin >> operation;

    //operation print-out
    cout << input1 << " " << operation << " " << input2 << endl;

    //result
    if(operation == "+"){
        int result1 = input1 + input2;
        cout << hue::red << "Your result: ";
        cout << result1 << hue::reset << endl;
    }
    if(operation == "-"){
        int result2 = input1 - input2;
        cout << hue::red << "Your result: ";
        cout << result2 << hue::reset << endl;
    }
    if(operation == "*"){
        int result3 = input1 * input2;
        cout << hue::red << "Your result: ";
        cout << result3 << hue::reset << endl;
    }
    if(operation == "/"){
        int result4 = input1 / input2;
        cout << hue::red << "Your result: ";
        cout << result4 << hue::reset << endl;
    }
}


int main(){
    image();
    
    while(true){
        calculate();
    }
}
