#include <iostream>

using namespace std;

int main(){

    int *ptr = new int;
    *ptr = 10;
    cout << *ptr << endl;
    cout << ptr << endl;
    //delete ptr; // free up the memory
    return 0;
}