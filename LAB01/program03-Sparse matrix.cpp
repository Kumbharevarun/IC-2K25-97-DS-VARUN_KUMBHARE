
#include <iostream>
using namespace std;

class SparseMatrix {
private:
    int a[10][10];
    int sparse[100][3];
    int rows, cols, count;

public:
    SparseMatrix() {
        rows = 0;
        cols = 0;
        count = 0;
    }

    void input() {
        cout << "Enter rows and columns: ";
        cin >> rows >> cols;

        cout << "Enter matrix elements:\n";

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> a[i][j];
            }
        }
    }

    void convert() {
        count = 0;

        // Store dimensions and non-zero count
        sparse[0][0] = rows;
        sparse[0][1] = cols;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {

                if (a[i][j] != 0) {
                    count++;

                    sparse[count][0] = i;
                    sparse[count][1] = j;
                    sparse[count][2] = a[i][j];
                }
            }
        }

        sparse[0][2] = count;

        cout << "Conversion completed!\n";
    }

    void displayOriginal() {
        cout << "\nOriginal Matrix:\n";

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void displaySparse() {
        cout << "\nSparse Matrix (Triplet Form):\n";
        cout << "Row\tColumn\tValue\n";

        for (int i = 0; i <= count; i++) {
            for (int j = 0; j < 3; j++) {
                cout << sparse[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    SparseMatrix s;
    int choice;

    s.input();

    do {
        cout << "\n--- SPARSE MATRIX ---\n";
        cout << "1. Display Original Matrix\n";
        cout << "2. Convert to Sparse Matrix\n";
        cout << "3. Display Sparse Matrix\n";
        cout << "4. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s.displayOriginal();
                break;

            case 2:
                s.convert();
                break;

            case 3:
                s.displaySparse();
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
