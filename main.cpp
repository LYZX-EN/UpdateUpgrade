#include <iostream>
using std::cout;
using std::endl;

int main () {
    cout << "Update - Upgrade";
    cout << endl << "---------" << endl;
    system("sudo apt update");
    cout << "---------" << endl;
    system("sudo apt upgrade -y");
    cout << "---------" << endl;
    system("flatpak update -y");
    cout << "---------" << endl;

    return 0;
}