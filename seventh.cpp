#include<iostream>
using namespace std;

int main(){
    string name;
    int age;

    cout<<"What's your age? : ";
    cin>> age;

    cout<<"What's your name? : "; // getline => to get user string input containg spaces 
    getline(cin>>ws,name);        // std::getline(std::cin>>std::ws,name)
                                  // ws => whitespace



   cout<<"Hello "<<name<<'\n';
   cout<<"You are "<<age<< " years old";
}