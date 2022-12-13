#include<iostream>

using namespace std;

string name[12];
int number[12];

int aName = 0,aNum = 0;

void mainMenu() {
    cout << "\n\n\tWelcome to the phonebook" << endl;
    cout << "\t1.\tLIST" << endl;
    cout << "\t2.\tADD" << endl;
}

void add(){
    string cmdName;
    cout << "enter name: ";
    cin >> cmdName;
    name[aName] = cmdName;
    aName++;
}

void show(){
    for(int i = 0; i <= 12; i++){
        cout << name[i] << ", ";
    }
    cout << endl;
}

int main() {
    while(true) {
        string cmd;
        mainMenu();
        cin >> cmd;
        if(cmd == "exit") goto exit;
        else if(cmd == "add") add();
        else if(cmd == "show") show();
    }
    exit:
        return 0;
}