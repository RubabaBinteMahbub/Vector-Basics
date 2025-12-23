Difference between sum of elements at odd indices and elements at even indices.
#include<iostream>
#include<vector>
using namespace std;
int main(){
int n,sum=0;
cout<<"Enter the size : ";
cin>>n;
vector<int>a(n);
cout<<"Enter the elements : ";
for(int i=0;i<n;i++){
   cin>>a[i];
}
for(int i=0;i<a.size();i++){
   if(i%2==0) sum+=a[i];
   else sum-=a[i];
}
cout<<"Sum = "<<sum<<endl;
return 0;
}
