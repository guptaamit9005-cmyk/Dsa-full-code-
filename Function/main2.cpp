#include<iostream>
using namespace std;

int getMultiplication(int x, int y, int z){

    int result = x * y * z;
    return result;
}

void printNametenTimes(){
    for(int i=1; i<=10; i++){
        cout << "Babbar" << endl;
    }
}

void printMultiplies(int num){
    for(int i=1; i<=10; i++){
        cout << num * i << endl;
    }
    return;
}

int convertIntoCelcius(int far){
    int celcius = (far-32)*5/9;
    return celcius;
}

int main() {
//    int multiplicationAnswer =  getMultiplication(5,4,3);
//    cout << multiplicationAnswer << endl;
// printNametenTimes();

int m = 5;
printMultiplies(m);

return 0;


}