#include<iostream>

int main(){
    double x=(int)3.14;

    char y=100;
    std::cout<<(char)100<<'\n';

    int correct=8;
    int questions=10;
    int result=correct/(double)questions *100;
    std::cout<<result<<'%';
    return 0;
}