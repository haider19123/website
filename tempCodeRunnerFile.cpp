#include<iostream>
using namespace std;
int main(){
  //Task1
int row,coloumn;
char character;
cout << "Input rows";
cin >> row;
cout << "Input coloumn";
cin >> coloumn;
cout << "Enter Charecter";
cin >> character;
for(int i=0;i<row;i++)
  {

for(int j=0;j<coloumn;j++)
{
if(i==j)
{

cout<<character;

}

if(j!=coloumn)
{

   cout <<"#";
}

}
cout <<"\n";
}
//Task2
int sum=0;
for(int i=1;i<=500;i++)
{
for(int j=1;j<=500;j++)
{
if(j<i)
{
  if(i%j==0)
  {
    sum=sum+j;
  
  }
    j++;
} 


if(sum==i)
{
cout<<i;
cout<<"The Perfect Number between 1 to 500";cout<<i;
}
}
}
return 0;
}
