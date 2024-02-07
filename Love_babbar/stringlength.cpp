#include<iostream>;
using namespace std;

int findlength(char name[])
{
    int count=0;
    for(int i=0;i<name[i]!='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name: "<<endl;
    cin>>name;
    cout<<"The length of your name is: "<<findlength(name)<<endl;


    return 0;
}