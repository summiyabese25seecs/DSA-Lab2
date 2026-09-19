
#include <iostream>
#include <cassert> //for assert
using namespace std;

//declaration of issorted function
bool isSorted(const int* arr, const int size){
    return false;
}


//writing the test functions


//first test case: An array already sorted in ascending order.
void testSortedArray (){
    int arr []= {1,2,3,4,5};
    bool result = isSorted(arr, 5);
    assert(result == true); //if true nothing happens, if false the program stops
}

// second test case: 2.	An unsorted array.
void testUnSortedArray(){
    int arr []= {3,2,1,4,5};
    bool result = isSorted(arr,5); //calling func
    assert(result == false);
}

//third test case:  A sorted array containing duplicate values.
void testDuplicateValues()
{
    int arr[] = {1, 2, 2, 3, 5};
    assert(isSorted(arr, 5) == true);
}

//fourth test case: An array containing only one element
void testSingleElement()
{
    int arr[] = {7};
    assert(isSorted(arr, 1) == true);
}

// fifth test case: An array sorted in descending order.
void testDescendingArray()
{
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
}

// sixth test case: An array containing negative values.
void testNegativeValues()
{
    int arr[] = {-5, -3, -1, 2};
    assert(isSorted(arr, 4) == true);
}

// seventh test case: Empty Array
void testEmptyValues()
{
    int* arr = nullptr;
    assert(isSorted(arr, 0) == true);
}

// eight test case:  all same values
void testAllSameValues()
{
    int arr[] = {7, 7, 7, 7, 7};

    assert(isSorted(arr, 5) == true);
}


int main() {
    
    //testing test cases
    testSortedArray();
    testUnSortedArray();
    testDuplicateValues();
    testSingleElement();
    testDescendingArray();
    testNegativeValues();
    testEmptyValues();
    testAllSameValues();


    return 0;
}