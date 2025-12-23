#include<iostream>
#include<vector>
using namespace std;
int main(){
int n;
cout<<"Enter the size : ";
cin>>n;
vector<int>a;      //পুশ ব্যাক দিলে পাশে n
for(int i=0;i<n;i++){  লাগেনা।
int x;
cin>>x;
a.push_back(x);
}

/* লুপ ছাড়া v.push_back() দিয়ে ইচ্ছামতো রাখতে পারবো। কিন্তুু সেটাতো user input নিতে সময় বেশি লাগবে।
a.push_back(1);
a.push_back(2);
a.push_back(3);
a.push_back(4); সাইজ নিজেই 4 হয়ে যাবে।*/

for(int i=0;i<a.size();i++){
cout<<a[i]<<" ";
}
cout<<endl;

return 0;
}
