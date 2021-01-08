#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Stopwatch.h"
using namespace std;

Stopwatch timer;
void bubbleSort(int array[], int size) {

    
    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

// function to print the array
void printArray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << "  " << array[i];
    }
    cout << "\n";
}

// driver code
int main() {
    int test[1000];
    srand((unsigned)time(0));

    for (int i = 0; i < 1000; i++) {
        test[i] = (rand() % 100) + 1;
    }
    cout << "array before sort" << endl;
    printArray(test, 1000);
    cout << "array after sort" << endl;
    timer.start();
    bubbleSort(test, 1000);
    timer.stop();
    printArray(test, 1000);
    cout << "time elapsed:\n" << timer.milliCount() << " Milliseconds." << endl;

}