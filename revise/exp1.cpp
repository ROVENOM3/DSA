#include<iostream>
using namespace std;



int binarySearch(int arr[],int number,int n){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;

    while(s<=e){
        if(arr[mid]==number){
            return mid;
        }
        else if(arr[mid]<number){
            s = mid + 1;

        }
        else{
            e = mid-1;
        }
    }
    return mid;
}




int partition(int arr[],int s,int e){
    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1;i<e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotIndex = s+cnt;
    swap(arr[s],arr[pivotIndex]);

    int i = s;
    int j = e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
}

void quickSort(int arr[],int s,int e){
    if(s>=e){
    return;
    }

    int p = partition(arr,s,e);

    quickSort(arr,s,p-1);

    quickSort(arr,p+1,e);
}


int main(){
    int arr[] = {2,4,3,1,5};
    int n = 5;

    quickSort(arr,0,5);
   

    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    int b;
    int ch;
    while(ch = 2){
        cout<<"do you want to Search a number "<<endl;
        cout<<"Type 1 = Yes"<<endl;
        cout<<"Type 2 = No"<<endl;
        cin>>ch;
        if(ch = 1){
        cout<<"Enter the number";
        cin >> b;
        int index = binarySearch(arr,b,5);
        cout<<"Index of the given number is : "<<index<<endl;
        }
        if(ch = 2){
            break;
        }
    }
    
    return 0;
    
  }