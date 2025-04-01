#include <iostream>

using namespace std;

int main()
{

    int i, j, row, col, max;

    cout << "Enter number of rows:";
    cin >> row;

    cout << "Enter number of column";
    cin >> col;

    int arr[row][col];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << "Enter Elements of [" << i << "][" << j << "]";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << endl;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose Matrix is :" << endl;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }



    return 0;
}