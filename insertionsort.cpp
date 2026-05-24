#include<iostream>
using namespace std;
void insertionsort(int arr[],int n){
for(int i=0;i<n;i++){
    int temp = arr[i];
    int j = i-1;
    for(;j>=0;j--){
        if(arr[j]>temp){
            arr[j+1] = arr[j];
        }else{
            break;
        }
    }
    arr[j+1] = temp;
}
}

void printarray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[] = {63,14,2,65,43};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"original array";
    printarray(arr,n);
    insertionsort(arr,n);

    cout<<"Sorted array";
    printarray(arr,n);

    return 0;
}