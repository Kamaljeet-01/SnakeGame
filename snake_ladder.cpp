// C++ program for creating a Snake & Ladder Game.
// By: LAKSHYA KANDPAL.
// Constraints and Rules
/*
1.The game will begin with both players at position 1.
2.Winning condition : a player reaches at tile 100.
3.If both players are at the same tile [BP] will be visible.
4.Snakes:- 96 to  42, 47 to 16, 26 to 10.
5.Ladder:- 21 to 32, 3 to 16, 54 to 88.

*/
#include<windows.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <iomanip>

using namespace std;

int DiceFunction(void)
{

    int i = 1;

    int dicevalue = 1;
    srand(time(0));
    int randomNumber = rand();
    dicevalue = abs(dicevalue + (randomNumber % 10 - 4));
    if (dicevalue == 0)
    {
        dicevalue = dicevalue + randomNumber % 10;
    }
    cout << "***************************************" << endl;
    cout << "*                                     *\n";
    cout << "* Roll of dice gives the value of:  " << dicevalue << " *" << endl;
    cout << "*                                     *\n";
    cout << "***************************************" << endl;
    return dicevalue;
}

void BoardDisplay(int positionnumberP1, int positionnumberP2)
{
    for (int i = 1; i < 28; i++)
    {
        cout << "* ";
    }
    cout << endl;

    for (int row = 10; row > 0; row--)
    {
        cout << "* ";
        int valuetoprint;
        if (row % 2 == 0)
        {
            valuetoprint = 10 * row;
        }
        else
        {
            valuetoprint = 10 * (row - 1) + 1;
        }

        for (int col = 1; col <= 10; col++)
        {

            {
                if (row % 2 == 0)
                {
                    if (valuetoprint == positionnumberP1 && valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "BP"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP1)
                    {
                        cout << "[" << setw(2) << "P1"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "P2"
                             << "]"
                             << " ";
                    }
                    else
                    {
                        cout << setw(3) << valuetoprint << "  ";
                    }
                    valuetoprint--;
                }
                else
                {
                    if (valuetoprint == positionnumberP1 && valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "BP"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP1)
                    {
                        cout << "[" << setw(2) << "P1"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "P2"
                             << "]"
                             << " ";
                    }
                    else
                    {
                        cout << setw(3) << valuetoprint << "  ";
                    }
                    valuetoprint++;
                }
            }
        }
        cout << "*";
        cout << endl;
        cout << "*                                                   *";
        cout << endl;
    }
    for (int i = 1; i < 28; i++)
    {
        cout << "* ";
    }
}
void BoardDisplayComputer(int positionnumberP1, int positionnumberP2)
{
    for (int i = 1; i < 28; i++)
    {
        cout << "* ";
    }
    cout << endl;

    for (int row = 10; row > 0; row--)
    {
        cout << "* ";
        int valuetoprint;
        if (row % 2 == 0)
        {
            valuetoprint = 10 * row;
        }
        else
        {
            valuetoprint = 10 * (row - 1) + 1;
        }

        for (int col = 1; col <= 10; col++)
        {

            {
                if (row % 2 == 0)
                {
                    if (valuetoprint == positionnumberP1 && valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "BP"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP1)
                    {
                        cout << "[" << setw(2) << "P1"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "C "
                             << "]"
                             << " ";
                    }
                    else
                    {
                        cout << setw(3) << valuetoprint << "  ";
                    }
                    valuetoprint--;
                }
                else
                {
                    if (valuetoprint == positionnumberP1 && valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "BP"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP1)
                    {
                        cout << "[" << setw(2) << "P1"
                             << "]"
                             << " ";
                    }
                    else if (valuetoprint == positionnumberP2)
                    {
                        cout << "[" << setw(2) << "C "
                             << "]"
                             << " ";
                    }
                    else
                    {
                        cout << setw(3) << valuetoprint << "  ";
                    }
                    valuetoprint++;
                }
            }
        }
        cout << "*";
        cout << endl;
        cout << "*                                                   *";
        cout << endl;
    }
    for (int i = 1; i < 28; i++)
    {
        cout << "* ";
    }
}

int SimpleTurn(int currentPosition, int valueOfDice)
{
    currentPosition = currentPosition + valueOfDice;
    return currentPosition;
}
int SnakeTurn(int currentPosition)
{

    switch (currentPosition)
    {
    case (96):
        currentPosition = 42;
        cout << "************************\n";
        cout << "*    SNAKE : 96>42     *\n";
        cout << "************************\n";
        break;
    case (47):
        currentPosition = 16;
        cout << "************************\n";
        cout << "*    SNAKE : 47>16     *\n";
        cout << "************************\n";
        break;
    case (26):
        currentPosition = 10;
        cout << "************************\n";
        cout << "*    SNAKE : 26>10     *\n";
        cout << "************************\n";
        break;
    }
    return currentPosition;
}
int LadderTurn(int currentPosition)
{

    switch (currentPosition)
    {
    case (21):
        cout << "************************\n";
        cout << "*    LADDER : 21>32    *\n";
        cout << "************************\n";
        currentPosition = 32;
        break;
    case (3):
        currentPosition = 16;
        cout << "************************\n";
        cout << "*    LADDER :  3>16    *\n";
        cout << "************************\n";
        break;
    case (54):
        currentPosition = 88;
        cout << "************************\n";
        cout << "*    LADDER : 54>88    *\n";
        cout << "************************\n";
        break;
    }
    return currentPosition;
}

void MainMenuText(void)
{

    cout << ("******************************************************************************\n");
    cout << ("*                                                                            *\n");
    cout << ("*                             SNAKES AND LADDERS                             *\n");
    cout << ("*                             By: Lakshya Kandpal                            *\n");
    cout << ("*                                                                            *\n");
    cout << ("******************************************************************************\n");
    cout << ("*                              1. Play the game                              *\n");
    cout << ("*                              2. About the game                             *\n");
    cout << ("*                              3. Exit                                       *\n");
    cout << ("******************************************************************************\n");
    cout << "ENTER YOUR CHOICE : \n";
}
void Sub1MenuText(void)
{

    cout << ("******************************************************************************\n");
    cout << ("*                                                                            *\n");
    cout << ("*                             SNAKES AND LADDERS                             *\n");
    cout << ("*                                                                            *\n");
    cout << ("******************************************************************************\n");
    cout << ("*                              1. Play with computer                         *\n");
    cout << ("*                              2. Play with person                           *\n");
    cout << ("*                              3. Back                                       *\n");
    cout << ("*                              4. Exit                                       *\n");
    cout << ("******************************************************************************\n");
    cout << "ENTER YOUR CHOICE : \n";
}

void AboutTheGame()
{
    cout << ("*******************************************************************************\n");
    cout << ("*                             ABOUT THE GAME                                  *\n");
    cout << ("*******************************************************************************\n");
    cout << ("*                              Snakes and Ladders                             *\n");
    cout << ("*  A worldwide classic board game! Navigate your piece from start to finish,  *\n");
    cout << ("*  avoid the snakes, and take shortcuts going up the ladders. The origins of  *\n");
    cout << ("*  this game are found in ancient India were it was known as Moksha-Patamu.   *\n");
    cout << ("*  A player moving up the board represented life's spiritual journey,         *\n");
    cout << ("*  complicated by virtues - the ladders, and vices - the snakes.              *\n");
    cout << ("*                                                                             *\n");
    cout << ("*******************************************************************************\n\n\n");
}

void SubMenuText(void)
{

    cout << ("******************************************************************************\n");
    cout << ("*                                                                            *\n");
    cout << ("*                 POSITION OF SNAKES : 96>42 , 47>16 , 26>10                 *\n");
    cout << ("*                 POSITION OF LADDERS: 21>32 ,  3>16 , 54>88                 *\n");
    cout << ("*                 Player1-P1, Player2-P2, Computer-C                         *\n");
    cout << ("*                 Both Players at same position:BP                           *\n");
    cout << ("*                                                                            *\n");
    cout << ("******************************************************************************\n");
}
void PlayForP1Text()
{
    cout << "\n\n";
    SubMenuText();
    cout << "\n\n"
         << endl;
    cout << "*****************************************\n";
    cout << "*       It is Player1(P1)'s turn.       *\n";
    cout << "*****************************************\n"
         << endl;
    cout << "Enter any number to roll the dice. \n";
}
void PlayForP2Text()
{
    cout << "\n\n";
    SubMenuText();
    cout << "\n\n"
         << endl;
    cout << "*****************************************\n";
    cout << "*       It is Player2(P2)'s turn.       *\n";
    cout << "*****************************************\n"
         << endl;
    cout << "Enter any number to roll the dice. \n";
}
void PlayForOnlyPlayerText()
{
    cout << "\n\n";
    SubMenuText();
    cout << "\n\n"
         << endl;
    cout << "*****************************************\n";
    cout << "*         It is Player 's turn.         *\n";
    cout << "*****************************************\n"
         << endl;
    cout << "Enter any number to roll the dice. \n";
}
void PlayForComputerText()
{
    cout << "\n\n";
    SubMenuText();
    cout << "\n\n"
         << endl;
    cout << "*****************************************\n";
    cout << "*       It is Computers 's turn.        *\n";
    cout << "*****************************************\n"
         << endl;
}
int wincheck(int valueofposition)
{
    if (valueofposition == 100)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int mainMenuOption, win, subMenuoption;
    string x;
MainMenuTextLabel:
    MainMenuText();
    cin >> mainMenuOption;
    if (mainMenuOption == 3)
    {
        goto end;
    }
    else if (mainMenuOption == 2)
    {
        AboutTheGame();
        goto MainMenuTextLabel;
    }
    else if (mainMenuOption == 1)
    {
    SubMenuTextLabel:
        Sub1MenuText();
        cin >> subMenuoption;
        if (subMenuoption == 4)
        {
            goto end;
        }
        else if (subMenuoption == 3)
        {
            goto MainMenuTextLabel;
        }
        else if (subMenuoption == 2)
        {
            int livePositionP1 = 1;
            int livePositionP2 = 1;
            BoardDisplay(livePositionP1, livePositionP2);

            win = 0;
            while (win == 0)
            {
                PlayForP1Text();
                cin >> x;
                int diceroll;
                diceroll = DiceFunction();
                if ((livePositionP1 + diceroll) < 101)
                {

                    livePositionP1 = livePositionP1 + diceroll;
                    if (livePositionP1 == 21 || livePositionP1 == 3 || livePositionP1 == 54)
                    {
                        livePositionP1 = LadderTurn(livePositionP1);
                    }
                    else if (livePositionP1 == 96 || livePositionP1 == 47 || livePositionP1 == 26)
                    {
                        livePositionP1 = SnakeTurn(livePositionP1);
                    }
                    BoardDisplay(livePositionP1, livePositionP2);
                    Sleep(1000);
                    if (wincheck(livePositionP1) == 1)
                    {
                        win == 1;
                        cout << "\n******************************\n";
                        cout << "*  PLAYER1(P1) WON THE GAME  *\n";
                        cout << "******************************\n";
                        break;
                    }
                }
                else
                {
                    continue;
                }

                PlayForP2Text();
                cin >> x;
                Sleep(1000);
                int diceroll2;
                diceroll2 = DiceFunction();
                if ((livePositionP2 + diceroll2) < 101)
                {
                    livePositionP2 = livePositionP2 + diceroll2;
                    if (livePositionP2 == 21 || livePositionP2 == 3 || livePositionP2 == 54)
                    {
                        livePositionP2 = LadderTurn(livePositionP2);
                    }
                    else if (livePositionP2 == 96 || livePositionP2 == 47 || livePositionP2 == 26)
                    {
                        livePositionP2 = SnakeTurn(livePositionP2);
                    }
                    BoardDisplay(livePositionP1, livePositionP2);
                    Sleep(1000);
                    if (wincheck(livePositionP2) == 1)
                    {
                        win == 1;
                        cout << "\n******************************\n";
                        cout << "*  PLAYER2(P2) WON THE GAME  *\n";
                        cout << "******************************\n";
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        else if (subMenuoption == 1)
        {
            int livePositionP1 = 1;
            int livePositionP2 = 1; // Make Player2 computer
            BoardDisplay(livePositionP1, livePositionP2);

            win = 0;
            while (win == 0)
            {
                PlayForOnlyPlayerText();
                cin >> x;
                int diceroll;
                diceroll = DiceFunction();
                if ((livePositionP1 + diceroll) < 101)
                {

                    livePositionP1 = livePositionP1 + diceroll;
                    if (livePositionP1 == 21 || livePositionP1 == 3 || livePositionP1 == 54)
                    {
                        livePositionP1 = LadderTurn(livePositionP1);
                    }
                    else if (livePositionP1 == 96 || livePositionP1 == 47 || livePositionP1 == 26)
                    {
                        livePositionP1 = SnakeTurn(livePositionP1);
                    }
                    BoardDisplayComputer(livePositionP1, livePositionP2);
                    Sleep(1000);
                    if (wincheck(livePositionP1) == 1)
                    {
                        win == 1;
                        cout << "\n******************************\n";
                        cout << "*      PLAYER WON THE GAME   *\n";
                        cout << "******************************\n";
                        break;
                    }
                }
                else
                {
                    continue;
                }

                PlayForComputerText();

                
                int diceroll2;
                diceroll2 = DiceFunction();
                if ((livePositionP2 + diceroll2) < 101)
                {
                    livePositionP2 = livePositionP2 + diceroll2;
                    if (livePositionP2 == 21 || livePositionP2 == 3 || livePositionP2 == 54)
                    {
                        livePositionP2 = LadderTurn(livePositionP2);
                    }
                    else if (livePositionP2 == 96 || livePositionP2 == 47 || livePositionP2 == 26)
                    {
                        livePositionP2 = SnakeTurn(livePositionP2);
                    }
                    BoardDisplayComputer(livePositionP1, livePositionP2);
                    Sleep(1000);
                    if (wincheck(livePositionP2) == 1)
                    {
                        win == 1;
                        cout << "\n******************************\n";
                        cout << "*    Computer won the game   *\n";
                        cout << "******************************\n";
                        break;
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        else
        {
            cout << "\n*****Enter a valid input.*****\n"
                 << endl;
            goto SubMenuTextLabel;
        }
    }
    else
    {
        cout << "\n*****Enter a valid input.*****\n"
             << endl;
        goto MainMenuTextLabel;
    }

end:
    cout << endl;
    cout << "*******************************\n";
    cout << "*      T H A N K  Y O U       *.\n";
    cout << "*******************************\n";
    return 0;
}
