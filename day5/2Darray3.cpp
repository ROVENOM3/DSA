#include<iostream>
#include <climits>
using  namespace std;

// Check elemnt in array

bool ispresent(int arr[][4],int target,int row ,int col){
for(int row = 0;row<3;row++){
  for(int col = 0;col<4;col++){
   if(arr[row][col] == target){
    return 1;
   }
}

  }
  return 0; 
}
// Row wise Sum

void printSum(int arr[][4],int row,int col){
for(int row = 0;row<3;row++){
    int sum = 0;
  for(int col = 0;col<4;col++){
   sum += arr[row][col];
}
cout<<sum<<" ";
  }
  cout<<endl;
}

//Column wise Sum

void printColSum(int arr[][4],int row,int col){
for(int col = 0;col<4;col++){
    int sum = 0;
  for(int row = 0;row<3;row++){
   sum += arr[row][col];
}
cout<<sum<<" ";
  }
  cout<<endl;
}

//Largest row sum

int largestrowsum(int arr[][4],int row,int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row = 0;row<3;row++){
    int sum = 0;
  for(int col = 0;col<4;col++){
   sum += arr[row][col];
          }
if(sum > maxi){
maxi = sum;
rowIndex = row;
     }
}
cout<<"the maximum sum is"<<maxi<<endl;
return rowIndex;
}


int main(){
int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};



for(int row = 0;row<3;row++){
    for(int col = 0;col<4;col++){
        cout<<arr[row][col]<<" ";
    }
    cout<<endl;
}

  cout<<"Enter element to search"<<endl;
  int target;
  cin >> target;
  if(ispresent(arr,target,3,4)){
    cout<<"Element found"<<endl;
  }else{
    cout<<"Element not found"<<endl;
  }

//cout<<"Row Sum"<<endl;
//cout<<"Column Sum"<<endl;
//printSum(arr,3,4);
//printColSum(arr,3,4);
cout<<"largest row Sum Index is : ";
cout<<"The Max row is at Index"<<largestrowsum(arr,3,4)<<endl;

  return 0;
}