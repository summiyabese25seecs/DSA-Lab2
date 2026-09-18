#include <iostream>
using namespace std;


//function
/*Write the memory location pointed to by the pointer to the console.
• Write the value of the integer (which the pointer points to) to the console*/
void analyze_pointer(int *ptr){
cout << "\nThe address value: "<< ptr;
cout << "\nThe int value: " << *ptr;
}

int main() {
int i; //allocating int on stack
i = 9;
int *p = &i; //the address of i

int*sec = new int(); //allocating on heap
*sec = 8;

analyze_pointer(p); //passing int
analyze_pointer(sec);
delete[] sec;
return 0;
}