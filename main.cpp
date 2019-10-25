#include <iostream>
#include <cstring>

using namespace std;


int main() {
    int result = 0;//Результат буде в цій змінній
    cout << "Введіть число: ";
    string a; // масив char де буде зберігатися наше число по символьно
    cin >> a;//записуємо по символьно число в масив
    for (int i = 0; i < a.size(); i++) {
        if(!(((a[1]-'0')>0) &&((a[1]-'0')<9 ))){
            cout <<"Ввід неправильний!";
            exit(1);
        }
        result += a[i]-'0';
    }
    cout << "Сума цифр дорівнює: "<< result;


    return 0;
}