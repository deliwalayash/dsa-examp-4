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
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    max = arr[0][0];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
    }

    cout << "Maximum number is :" << max;

    return 0;
}