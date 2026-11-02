#include <iostream>
using namespace std;

class Matrix {
private:
    int a[10][10];
    int rows, cols;

public:
    Matrix() {
        rows = 0;
        cols = 0;
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

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void add(Matrix m) {
        if (rows != m.rows || cols != m.cols) {
            cout << "Addition not possible!\n";
            return;
        }

        cout << "Addition Result:\n";

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << a[i][j] + m.a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void subtract(Matrix m) {
        if (rows != m.rows || cols != m.cols) {
            cout << "Subtraction not possible!\n";
            return;
        }

        cout << "Subtraction Result:\n";

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << a[i][j] - m.a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void multiply(Matrix m) {
        if (cols != m.rows) {
            cout << "Multiplication not possible!\n";
            return;
        }

        int result[10][10] = {};

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }

        cout << "Multiplication Result:\n";

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < m.cols; j++) {
                cout << result[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void transpose() {
        cout << "Transpose:\n";

        for (int j = 0; j < cols; j++) {
            for (int i = 0; i < rows; i++) {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix A, B;
    int choice;

    cout << "Enter Matrix A:\n";
    A.input();

    cout << "\nEnter Matrix B:\n";
    B.input();

    do {
        cout << "\n--- 2D ARRAY OPERATIONS ---\n";
        cout << "1. Display Matrices\n";
        cout << "2. Addition\n";
        cout << "3. Subtraction\n";
        cout << "4. Multiplication\n";
        cout << "5. Transpose of A\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Matrix A:\n";
                A.display();

                cout << "Matrix B:\n";
                B.display();
                break;

            case 2:
                A.add(B);
                break;

            case 3:
                A.subtract(B);
                break;

            case 4:
                A.multiply(B);
                break;

            case 5:
                A.transpose();
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
