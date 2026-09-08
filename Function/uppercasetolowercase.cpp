#include<iostream>
using namespace std;

void convertToL(char ch){
    char ans = ch-'A'+'a';
    cout << "Lower case character:" << ans << endl;
}

int main(){
    convertToL('A');
    return 0;

}