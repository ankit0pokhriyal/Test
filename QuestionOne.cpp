#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void findNext(char number[], int n) {
    int i, j;
    
    // Step 1: Find the first digit that is smaller than the digit next to it (pivot)
    for (i = n - 2; i >= 0; i--) {
        if (number[i] < number[i + 1])
            break;
    }

    // If no such digit is found, the digits are in descending order (largest possible number)
    if (i == -1) {
        cout << "Not Possible" << endl;
        return;
    }

    // Step 2: Find the smallest digit on the right side of (i) which is greater than number[i]
    for (j = n - 1; j > i; j--) {
        if (number[j] > number[i])
            break;
    }

    // Step 3: Swap the found digits
    swap(number[i], number[j]);

    // Step 4: Sort the digits after the pivot in ascending order
    sort(number + i + 1, number + n);

    cout << "Next number with same set of digits is: " << number << endl;
}

int main() {
    char number[] = "218765";
    int n = strlen(number);
    findNext(number, n);
    
    return 0;
}
