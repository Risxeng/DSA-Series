#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter the size of the Array" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter" << size << "Elements" << " ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout << "Maximum element is: " << max << endl;
    cout << "Minimum element is: " << min << endl;


}