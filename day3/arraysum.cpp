#include<iostream>
#include<vector>
using namespace std;
int main(){
  int a[4] = {1,2,3,4};
  int b[1] = {6};
	int k = 0;
	int l = 0;
  int count = 0;
  int q = 0;
	for(int i = 0;i<4;i++){
		 k = k*10 + a[i];
	}for(int j = 0;j<1;j++){
		 l = l*10 + b[j];
	}
	vector<int> f;
	int c = k+l;
  //cout<<c<<endl;
	int e = 0;
  int d = 0;
	while(c != 0){
	 d = c % 10;
   cout<<d<<endl;
    e = e*10 + d;
    //cout<<e<<endl;
    
		c = c/10;
		count++;
		
	}
  cout<<d<<endl;
  //cout<<count<<endl;
	while(e != 0){
    
		int g = e % 10;
    q = q*10 + g;
		e = e/10;
		f.push_back(q);
		}
	for (int i = 0; i < f.size(); i++) {
    cout << f[i] << " ";
}
}