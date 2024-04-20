#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

void play_game();
void print_list(vector<int>);

int main()
{
    srand(time(NULL));
    int response;

    cout << "[1]Play game.\n[2]]Quit.\n>>";
    cin >> response;

    switch(response)
    {
        case 1:
            play_game();
            break;
        case 2:
            break;
    }

    return 0;
}

void print_list(vector<int> list)
{
    int size = list.size();

    cout << "[";

    for(int i = 0; i < size; i++)
    {
        cout << list[i];
        if(size - i > 1) cout << "\t";
    }

    cout << "]" << endl;
}


void play_game()
{
    char answer = 'y';
    do
    {
        //Play game
        if(answer == 'y')
        {
            int target = rand() % 101;
            int score = 10;
            int guess;
            vector<int> guess_list;
            cout << "Guess a number from 0 to 100.\n>>";
            
            
            do
            {
                cin >> guess;

                guess_list.push_back(guess);
                
                if(target > guess){cout << "Higher.\n>>";score--;}
                else if( target < guess){cout << "Lower.\n>>";score--;}

                if(score == 0){cout << "Sorry you lost.\n"; print_list(guess_list);}

            } while (target != guess);

            cout << "Congratulations. Your score is " << score << ".\n";
            print_list(guess_list);
            
            
        }

        cout << "Do you want to play again?[y/n]\n>>";
        cin >> answer; 

        if(!(answer == 'y' || answer == 'n')){cout << "Invalide response.\n";}
    } while (answer == 'y');
}