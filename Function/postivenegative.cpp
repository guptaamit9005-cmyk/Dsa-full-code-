#include<iostream>
using namespace std;

void checkPostiveNegative(int num){
    if(num>0){
        cout<<"Postive number"<<endl;

    }
    else if(num<0){
        cout<<"Negative number"<<endl;
    }
    else{
        cout<<"Number is zero"<<endl;
    }

}

int main(){

    checkPostiveNegative(19);
    return 0;

}