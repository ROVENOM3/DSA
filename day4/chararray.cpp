#include<iostream>
using namespace std;

char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
        
    }else{
        char temp = ch -'A' + 'a';
        return temp;
    }
}

bool checkpalindrome(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<n){
        if(tolowercase(name[s]) != tolowercase(name[e])){
            return 0;
        }
        else{
        s++;
        e--;
        }
        return 1;
    } 
}


void reverse(char name[],int n){
 int s = 0;
 int e = n-1;
 while(s<=e){
    swap(name[s++],name[e--]);
 }
}
int length(char name[]){
    int a = 0;
    for(int i = 0;name[i] != '\0' ;i++){
        a++;
    }
   return a;
}

int main(){
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
  int n = length(name);
  cout<<"Length: "<<n<<endl;
  reverse(name,n);
  cout<<"Reverse: "<< name<<endl;
  cout<<"Is string palindrome: "<<checkpalindrome(name,n)<<endl;

  return 0;

}
