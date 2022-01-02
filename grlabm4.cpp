#include<iostream>
using namespace std;
int main(){
 int lenght=2,width=2;
 char ch='\0';
cout<<"Enter Lenght     :";
cin>> lenght;
cout<<"Enter Width      :";
cin>> width;
cout<<"Enter Character  :";
cin>> ch;
for(int i=1;i<=lenght;i++)
{
    for(int j=1;j<=width;j++)
    {
    if(lenght>=2&&lenght<=10)
    {
            cout<<ch;
    }
    else
    {
        cout<<"Invalid lenght And Width ";
    }
        }
        cout<<endl;
    }
    return 0;
}
