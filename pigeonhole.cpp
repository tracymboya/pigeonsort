#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input." << endl;
        return 0;
    }
    const int MAX = 10000000;

    static int count[MAX + 1] = {0};

    int num;

    cout << "Enter numbers (0 to 10000000):" << endl;

    for (int i = 0; i < n; i++) {
        cin >> num;

        if (num < 0 || num > MAX) {
            cout << "Number out of range!" << endl;
            return 0;
        }

        count[num]++;  
    }

    cout << "\nSorted numbers:\n";

    for (int i = 0; i <= MAX; i++) {
        while (count[i] > 0) {
            cout << i << " ";
            count[i]--;
        }
    }

    return 0;
}