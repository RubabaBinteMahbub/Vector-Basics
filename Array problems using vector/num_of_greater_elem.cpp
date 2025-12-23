/*Number of strictly greater elements
than a element.*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter the size : ";
cin>>n;
vector<int>a(n);
cout<<"Enter the elements : ";
for(int i=0;i<n;i++){
   cin>>a[i];
}
int num,count=0;
cout<<"Enter the number : ";
cin>>num;

for(int i=0;i<a.size();i++){
if(a[i]>num){
count++;
}
}
cout<<count<<" elements are strictly greater than "<<num<<endl;
return 0;
}
