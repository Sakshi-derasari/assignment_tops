#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int* arr;

public:
    Matrix(int s) {
        size = s;
        arr = new int[size];
    }

    void input() {
        cout << "Enter " << size << " elements of the matrix: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    Matrix operator+(const Matrix& m) {
        Matrix temp(size);
        for (int i = 0; i < size; i++) {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }

    void display() const {
        cout << "Matrix elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Matrix() {
        delete[] arr;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "Matrix 1:" << endl;
    matrix1.input();

    cout << "Matrix 2:" << endl;
    matrix2.input();

    Matrix result = matrix1 + matrix2;

    cout << "\nResult of matrix addition:" << endl;
    result.display();
}