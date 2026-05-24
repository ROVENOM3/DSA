#include <iostream>
using namespace std;
int binarysearch(int arr[],int size,int key) {
int start = 0;
int end = size -1;
int mid = (start + (end - start))/2;
while(start<=end){
if(arr[mid] = key){
    return mid;
}
else if(key > arr[mid]){
    start = mid + 1;
}
else{
    end = mid - 1;
}
mid = (start + end)/2;
}
return -1;
}

int main(){
int even[] = {2,4,6,8,10};
int odd[] = {1,3,5,7,9};

int index = binarysearch(even,5,8);
cout<<index;

}