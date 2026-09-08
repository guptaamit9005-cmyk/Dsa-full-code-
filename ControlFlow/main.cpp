#include<iostream>
using namespace std;

int main() {
    int budget;
    cout << "Enter your budget:" << endl;

    // input 
    cin >> budget;
    if(budget > 2000000){
        cout << "You can buy a scarpio" << endl;
    }
    else {
        cout << "You cannot buy a scarpio" << endl;
    }
    int age = 100;
    if(age > 18){
        cout << "You can vote"<< endl;
    }
    else{
        cout << "You cannot vote"<<endl;
    }
    return 0;
}