#include<iostream>
using namespace std;


int printAverage(int a, int b, int c){
    int average =(a+b+c)/3;
    return average;
}

int main(){
    int a = 10, b = 20, c = 30;
    cout << printAverage(a, b, c) << endl;
    return 0;
}