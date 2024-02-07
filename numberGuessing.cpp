#include<iostream>
#include<ctime>

int main()
{
    int num;
    int guess;
    int tries=0;

    srand(time(NULL));
    num=(rand() % 100) + 1;

    std::cout<<"**********NUMBER GUSSING GAME********** \n:";

    do{
        std::cout<<"Enter a Guess Between(1-100): \n";
        std::cin>>guess;
        tries++;

        if(guess>num)
        {
            std::cout<<"Too High \n";
        }
        else if(guess<num){
            std::cout<<"Too Low \n";
        }
        else
        {
            std::cout<<"Correct !!! \n";
            std::cout<<"Number of Tries taken: "<<tries;
        }
    }while(guess!=num);
    return 0;
}