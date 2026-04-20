#include <iostream>
#include <limits>

using namespace std;

template <class T>
class Matrix {
    int rows, cols;
    T mat[10][10];
public:
    Matrix(int r = 0, int c = 0) {
        rows = r;
        cols = c;
    }
    void input() {
        cout << "Enter elements of " << rows << "x" << cols << " matrix:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> mat[i][j];
            }
        }
    }
    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix<T> add(Matrix<T> other) {
        Matrix<T> result(rows, cols);
        if (rows != other.rows || cols != other.cols) {
            cout << "Addition not possible!\n";
            return result;
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }
    Matrix<T> multiply(Matrix<T> other) {
        Matrix<T> result(rows, other.cols);
        if (cols != other.rows) {
            cout << "Multiplication not possible!\n";
            return result;
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                result.mat[i][j] = 0;
                for (int k = 0; k < cols; k++) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }
};

void performMatrixOperations(char type) {
    int r1, c1, r2, c2;

    cout << "\nEnter rows and columns for Matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for Matrix B: ";
    cin >> r2 >> c2;

    if (type == 'i') {
        cout << "\n--- Performing Integer Matrix Operations ---\n";
        Matrix<int> A(r1, c1);
        A.input();
        Matrix<int> B(r2, c2);
        B.input();

        cout << "\nMatrix A (int):\n"; A.display();
        cout << "\nMatrix B (int):\n"; B.display();

        Matrix<int> C = A.add(B);
        cout << "\nA + B (int):\n"; C.display();

        Matrix<int> D = A.multiply(B);
        cout << "\nA * B (int):\n"; D.display();
    } else if (type == 'f') {
        cout << "\n--- Performing Float Matrix Operations ---\n";
        Matrix<float> A(r1, c1);
        A.input();
        Matrix<float> B(r2, c2);
        B.input();

        cout << "\nMatrix A (float):\n"; A.display();
        cout << "\nMatrix B (float):\n"; B.display();

        Matrix<float> C = A.add(B);
        cout << "\nA + B (float):\n"; C.display();

        Matrix<float> D = A.multiply(B);
        cout << "\nA * B (float):\n"; D.display();
    } else {
        cout << "Invalid choice.\n";
    }
}

int main() {
    char choice;
    cout << "Choose data type for matrix operations:\n";
    cout << "Enter 'i' for integer or 'f' for float: ";
    cin >> choice;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    performMatrixOperations(choice);

    return 0;
}
