#include <iostream>
using namespace std;
#include <string.h>
#include <utility> // for swap

int main() {
    string *s = new string(); //allocating the string
    cout << "Enter the string: ";
    cin >> (*s);

    int len = s->length();
    
    // Reverse the string by swapping characters
    for (int i = 0; i < len / 2; i++) {
        swap((*s)[i], (*s)[len - 1 - i]);
    }

    cout << "\nReversal of string: " << *s;
    delete s; //frees the memory
    return 0;
}