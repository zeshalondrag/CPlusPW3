#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    setlocale(0, "");

    const int rows = 3, columns = 5;
    int numbers[rows][columns];

    cout << "Введите элементы массива " << rows << "x" << columns << ":\n";

    for (int i = 0; i < rows; i++) // Ввод чисел в двумерный массив
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> numbers[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < rows; i++) // Вывод на экран двумерного массива
    {
        int sum = 0;

        for (int j = 0; j < columns; j++)
        {
            cout << numbers[i][j] << "\t";
            sum += numbers[i][j];
        }

        double avg = (double)sum / columns;
        cout << "\tСреднее арифметическое: " << avg << endl;
    }
    return 0;
}