#include<iostream>
using namespace std;
int sqroot(num){
int s  = 0;
int e = num;
int mid = s+(e-s)/2;
int ans = -1;
while(s<e){
    if(mid * mid > num){
        e = mid - 1;
    }
    else if(mid * mid < num){
         ans = mid;
        s = mid + 1;
    }
    else if(mid * mid == num){
        return mid;
    }
    mid = s+(e-s)/2;

}
return ans;
}

int main(){
int result = sqroot(num)
}