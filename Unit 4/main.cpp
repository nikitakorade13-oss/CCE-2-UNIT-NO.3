#include <iostream>
using namespace std;

int main() {
    int tree[100], n, index;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid number of elements";
        return 0;
    }

    cout << "Enter tournament bracket elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> tree[i];
    }

    cout << "Enter index: ";
    cin >> index;

    if (index < 0 || index >= n) {
        cout << "Invalid index\n";
        return 0;
    }

    if (index == 0)
        cout << "Parent: No parent\n";
    else
        cout << "Parent: " << tree[(index - 1) / 2] << endl;

    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < n)
        cout << "Left Child: " << tree[left] << endl;
    else
        cout << "No Left Child\n";

    if (right < n)
        cout << "Right Child: " << tree[right] << endl;
    else
        cout << "No Right Child\n";

    cout << "\nTournament Tree Level by Level:\n";

    int level = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cout << tree[i] << " ";
        count++;

        if (count == (1 << level)) {
            cout << endl;
            level++;
            count = 0;
        }
    }

    return 0;
}
