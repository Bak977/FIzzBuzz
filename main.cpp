#include<iostream>
using namespace std;
int main()
{
int i,fizz,buzz;
cout<<"For which multiples you want to see fizz \n";
cin>>fizz;
cout<<"For which multiples you want to see buzz \n";
cin>>buzz;

for(i=1;i<=100;i++)
{
if(i%fizz==0)
{
cout<<"fizz"<<"\t";
}
else if(i%buzz==0)
{
cout<<"buzz"<<"\t";
}
else if(i%fizz==0 && i%buzz==0)
{
cout<<"fizzbuzz"<<"\t";
}
else 
{
cout<<i<<"\t";
}
}
}
