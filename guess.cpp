// author: Abdullah Baron
#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

int main()
{
    srand( time(0) );
    int estimate;
    int randnumber;
    randnumber = rand() % 10 + 1;
    cout<< " Guess the computer's number: between 1 to 10" << endl;
    cin>> estimate;
    
    if (estimate == randnumber)
    {
      cout<< "You, guessed correctly! You win!\n";
    }
    else if ( estimate > randnumber)
    {
       int less;
       less = estimate - randnumber;
       cout<< " You were off by  "<< less<<" . Sorry, you lose.\n";
    }

    else if ( estimate < randnumber)
    {
       int less;
       less= randnumber - estimate;
       cout<< " you were of by "<< less <<". sorry, you lose.\n";
    }

    return 0 ;
    }
