#include<iostream>
using namespace std;

int getLength(char name[])
{
    int count=0;
    for(int i=0;name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

void reverse(char name[],int length)
{
    int start=0;
    int end=length-1;
    while(start<end)
    {
        swap(name[start++],name[end--]);
    }
}
int main()
{
    char name[20];
    cout<<"Enter the Name: ";
    cin>>name;
    cout<<"Your original Name is: "<<name<<endl;
    cout<<"Your name's length is: ";
    int len=getLength(name);
    cout<<len<<endl;
    reverse(name,len);
    cout<<"The reverse of Your Name is: ";
    cout<<name;

    return 0;
}