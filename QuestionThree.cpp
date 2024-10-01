#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

void findMaxMinOccurringChar(const string &str) {
    unordered_map<char, int> freqMap;

    // Step 1: Calculate frequency of each character
    for (char ch : str) {
        freqMap[ch]++;
    }

    // Step 2: Initialize variables to track max and min
    char maxChar, minChar;
    int maxFreq = INT_MIN, minFreq = INT_MAX;

    // Step 3: Traverse the map to find max and min occurring characters
    for (auto it : freqMap) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxChar = it.first;
        }
        if (it.second < minFreq) {
            minFreq = it.second;
            minChar = it.first;
        }
    }

    // Output the results
    cout << "Maximum occurring character: '" << maxChar << "' with frequency " << maxFreq << endl;
    cout << "Minimum occurring character: '" << minChar << "' with frequency " << minFreq << endl;
}

int main() {
    string str = "examplestring";
    findMaxMinOccurringChar(str);
    return 0;
}
