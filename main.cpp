#include <iostream>
#include <string.h>

using namespace std;


int main() {
    int result = 0;
    cout << "Enter number: ";
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if(!(((a[1]-'0')>0) &&((a[1]-'0')<9 ))){
            cout <<"Ввід неправильний!";
            exit(1);
        }
        result += a[i]-'0';
    }
    cout << "Відповідь: "<< result;


    return 0;
}