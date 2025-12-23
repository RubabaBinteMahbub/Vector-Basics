#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter the size : ";
cin>>n;
vector<int>a(n);

//for each loop. Iterator is current element not i.
cout<<"Enter the elements : "<<endl;
for(int &x:a) cin>>x;

cout<<"Print the elements : "<<endl;
for(int x:a) cout<<x<<" ";

return 0;
}
