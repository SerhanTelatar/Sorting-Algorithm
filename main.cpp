#include <iostream>

using namespace std;

int main(){
    int list[] = { 1,23,3,17,49,6, 34,3,67}; // put any number you want into this list
    int element_number = sizeof(list) / sizeof(list[0]);

    for (int i = 0; i < element_number; i++) {
        for (int j = 0; j < element_number -1; j++) {
            int first = list[j];
            int second = list[j + 1];
            if (list[j] > list[j + 1]) {
                list[j] = first;
                list[j + 1] = second;
            }else if(list[j] == list[j + 1]){
                continue;
            }
            else {
                list[j] = second;
                list[j + 1] = first;
            }
        }
    }
    for (int i = element_number - 1; 0 <= i; i--) {
        cout << list[i] << endl;
    }
}
