#include <iostream>
using namespace std;
class Array {
private:
    int arr[10];
    int n;

public:
    Array() {
        n = 0;
    }

    void create() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter array elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    void remove() {
        int pos;

        cout << "Enter position to delete: ";
        cin >> pos;

        if (pos < 1 || pos > n) {
            cout << "Invalid position!\n";
            return;
        }

        for (int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;

        cout << "Element deleted successfully!\n";
    }

    void search() {
        int value;
        bool found = false;

        cout << "Enter element to search: ";
        cin >> value;

        for (int i = 0; i < n; i++) {
            if (arr[i] == value) {
                cout << "Element found at position "
                     << i + 1 << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "Element not found!\n";
        }
    }
};

int main() {
    Array a;
    int choice;

    a.create();

    do {
        cout << "\n--- ARRAY OPERATIONS ---\n";
        cout << "1. Display\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                a.display();
                break;

            case 2:
                a.remove();
                break;

            case 3:
                a.search();
                break;

            case 4:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
