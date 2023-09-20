#include<iostream>
int main(){
    std::string name;
    std::cout<<"Enter your Name: ";
    std::getline(std::cin,name);


    int len=name.length();
    std::cout<<len<<'\n';
    
    name.append("@gmail.com");
    std::cout<<name<<'\n';


    std::cout<<name.at(4)<<'\n';

    name.insert(0,"MR ");
    std::cout<<name<<'\n';

    std::cout<<name.find(' ')<<'\n';

    name.erase(0,3);
    std::cout<<name<<'\n';
  
     
    std::cout<<name.empty()<<'\n';
    name.clear();
    std::cout<<"Hello "<<name;
    return 0;
}