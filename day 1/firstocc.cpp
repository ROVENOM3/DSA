#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == k){
          ans = mid;
          e = mid - 1;
        }
        else if(k > arr[mid]){
         s = mid + 1;
        }
        else{
         e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
     return ans;
}


int lastocc(int arr[],int n,int k){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid] == k){
          ans = mid;
         s = mid + 1;
        }
        else if(k > arr[mid]){
         s = mid + 1;
        }
        else{
         e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}


int main(){
    int even[5] = {1,2,3,3,4};
    int first = firstocc(even,5,3);
    int last = lastocc(even,5,3);
    cout<<"first index "<<first<<endl;
    cout<<"last index "<<last<<endl;
    return 0;
}