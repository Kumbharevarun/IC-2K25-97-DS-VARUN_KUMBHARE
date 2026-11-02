
#include <iostream>
using namespace std;

class MatrixCalculator {
private:
    int A[10][10], B[10][10];
    int r1, c1, r2, c2;

public:
    MatrixCalculator() {
        r1 = c1 = r2 = c2 = 0;
    }

    void input() {
        cout << "Enter rows and columns of Matrix A: ";
        cin >> r1 >> c1;

        cout << "Enter Matrix A elements:\n";

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cin >> A[i][j];
            }
        }

        cout << "Enter rows and columns of Matrix B: ";
        cin >> r2 >> c2;

        cout << "Enter Matrix B elements:\n";

        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cin >> B[i][j];
            }
        }
    }

    void display(int result[10][10], int r, int c) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << result[i][j] << "\t";
            }
            cout << endl;
        }
    }

    void addition() {
        if (r1 != r2 || c1 != c2) {
            cout << "Addition not possible!\n";
            return;
        }

        int result[10][10];

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                result[i][j] = A[i][j] + B[i][j];
            }
        }

        cout << "Addition Result:\n";
        display(result, r1, c1);
    }

    void subtraction() {
        if (r1 != r2 || c1 != c2) {
            cout << "Subtraction not possible!\n";
            return;
        }

        int result[10][10];

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                result[i][j] = A[i][j] - B[i][j];
            }
        }

        cout << "Subtraction Result:\n";
        display(result, r1, c1);
    }

    void multiplication() {
        if (c1 != r2) {
            cout << "Multiplication not possible!\n";
            return;
        }

        int result[10][10] = {};

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    result[i][j] += A[i][k] * B[k][j];
                }
            }
        }

        cout << "Multiplication Result:\n";
        display(result, r1, c2);
    }

    void transpose() {
        int result[10][10];

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                result[j][i] = A[i][j];
            }
        }

        cout << "Transpose of Matrix A:\n";
        display(result, c1, r1);
    }
};

int main() {
    MatrixCalculator m;
    int choice;

    m.input();

    do {
        cout << "\n--- MATRIX CALCULATOR ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Transpose\n";
        cout << "5. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                m.addition();
                break;

            case 2:
                m.subtraction();
                break;

            case 3:
                m.multiplication();
                break;

            case 4:
                m.transpose();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
