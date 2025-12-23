#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter the size : ";
cin>>n;
vector<int>a(n);

int num;
cout<<"Enter the number : ";
cin>>num;
cout<<"Enter the elements : ";
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<a.size();i++){
if(a[i]==num){
cout<<num<<" found at index "<<i<<endl;
break;
}
}

return 0;
}
