#include<iostream>
using namespace std;


int main() {
    for(int count = 1; count<=10; count= count+1){
        cout << "Babbar"<< endl;

    }
    // counting from 1 to 5
    for(int i=1; i<=10; i = i+1){
        cout << i << endl;
    }

    for(int i=1; i<=10; i = i+1){
        cout<< i << " ";
        if(i == 5){
            break;
        }
    }
     for(int i=1; i<=10; i = i+1){
        if(i == 5){
            continue;
        }
        cout<< i << " ";
 }
    return 0;
}