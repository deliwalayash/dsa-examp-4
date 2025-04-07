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

    int row_num, col_num, sum = 0, k;

    cout << "Enter Row number you want to Sum:";
    cin >> row_num;

    cout <<"Elements of row->"<< row_num <<":";

    for (k = 0; k < col; k++)
    {
        cout << arr[row_num - 1][k] << " ";
        sum = sum + arr[row_num - 1][k];
    }

    cout << "Sum of row Numbers is :" << sum;

    cout << endl;
    
    sum = 0;

    cout << "Enter Column number you want to Sum:";
    cin >> col_num;

    cout <<"Elements of Column->"<< col_num << ":";

    for (k = 0; k < row; k++)
    {
        cout << arr[k][col_num - 1] << " ";
        sum = sum + arr[k][col_num - 1];
    }

    cout << "Sum of Column Numbers is :" << sum;

    cout << endl;

    return 0;
}