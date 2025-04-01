#include<iostream>

using namespace std;

int main(){

    int size,i;
    cout << "Enter size of array:";
    cin >> size;

    int arr[size];

    for(i=0;i<size;i++){
        cout <<"Enter Elements of Arrays:";
        cin >> arr[i];
    }
    
    cout <<"Negative elements of array: ";

    for(i=0;i<size;i++){
        if(arr[i]<0){
            cout  << arr[i] << " ";
        }
    }


    return 0;
}