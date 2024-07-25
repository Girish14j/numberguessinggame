#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    cout<<"\n__________________Welcome to the Number Guessing game______________\n"<<endl;
    cout<<"\n__>>You will have to guess a Number between 1 to 100."<<endl;
    cout<<"__>>Lets start playing the game and best of luck."<<endl;

    srand(time(0));
    int randNumber = ( rand()%100) + 1;

    cout<<"\n^^**You will have total 5 chances to guess the correct number**^^\n";
    int chanceLeft = 5;
    int PlayerInput;

    for(int i=1;i<=5;i++)
    {
        cout<<"\n__>Enter the Number: ";
        cin>>PlayerInput;

        if(PlayerInput==randNumber)
        {
            cout<<"\nCongratss!!... You have successfully guessed the right number\n";
            cout<<"\nThanks for playing. Have a Nice day";
            break;
        }
        else
        {
            if(PlayerInput>randNumber)
            {
                cout<<"\n""Insert a Smaller Number.Try Again"""<<endl;
            }
            else
            {
                cout<<"\n""Insert a Larger Number. Try Again"""<<endl;
            }
        }
        chanceLeft--;
        cout<<"\nChance left to Guess the Random Number: "<< chanceLeft << endl;

        if(chanceLeft==0)
        {
            cout<<"\n Sorry your chance has been finished to Guess a Random Number\n"<<endl;
            cout<<" The Random NUmber was: "<<randNumber<<endl;
            cout<<" Thanks for playing. Have a nice day. ";
        }
    }
}
