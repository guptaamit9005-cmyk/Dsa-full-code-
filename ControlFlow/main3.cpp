#include<iostream>
using namespace std;

int main () {
    cout << "Enter your height:";
    cin >> height;

    int weight;
    cout << "Enter your weight:"<< endl;
    cin >> weight;

    if(height > 5){
        if(weight > 50){
            cout << "you got a good BMI" << endl;
        }
        else{
            cout << "Bhai tujhse na ho payega"<< endl;
        }
    }


}
