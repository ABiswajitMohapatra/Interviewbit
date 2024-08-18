#include <iostream>
using namespace std;

void Find_first_repeating(int A[], int size) {
    cout << "The first repeating element is: ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (A[i] == A[j]) {
                cout << A[i];
                return; // Return as soon as the first repeating element is found
            }
        }
    }
    cout << "No repeating element found.";
    cout << endl; // Newline for better formatting
}

int main() {
    int A[] = {1, 2, 3, 4,  5, 6,3,1};
    int size = sizeof(A) / sizeof(A[0]);
    Find_first_repeating(A, size);
    return 0;
}
