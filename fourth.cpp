#include<iostream>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}

    using namespace std;
int main(){
    using namespace first;
    
    cout<<x;
    return 0;
}