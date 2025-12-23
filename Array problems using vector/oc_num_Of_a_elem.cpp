//Number of occurance of a number.
#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,num,count=0;
cout<<"Enter the size : ";
cin>>n;
cout<<"Enter the number : ";
cin>>num;

vector<int>a(n);
cout<<"Enter the elements : ";
for(int i=0;i<n;i++){
   cin>>a[i];
}
  
for(int i=0;i<a.size();i++){
		if(a[i]==num){
		count++;
		}
}
cout<<num<<" occurred "<<count<<" times in the given vector."<<endl;
return 0;
}
