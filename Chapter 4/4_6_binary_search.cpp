#include <bits/stdc++.h>
using namespace std;

void swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1 ; i++) {
        for (int j = 0; j < n - i - 1 ; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


int binarySearch(int arr[], int n, int item){
    int LB = 0;
    int UB = n - 1;

    while(LB <= UB){
        int mid = LB +(UB - LB) / 2;
        if(arr[mid] == item){
            return mid;
        } else if (arr[mid] < item){
            LB = mid + 1;
        } else {
            UB = mid - 1;
        }
    }

    return -1;
}
int main(){
    int arr[] = {12, 2, 5, -4, 39};
    int item = 12;
    bubbleSort(arr, sizeof(arr)/sizeof(arr[0])) ;
    cout << binarySearch(arr, sizeof(arr)/sizeof(int), item) << endl;
    return 0;
}