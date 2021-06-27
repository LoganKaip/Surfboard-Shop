// Assignment_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <list>
using namespace std;

//no outputs just tells the user what to input for the program
    void ShowUsage()
{
        cout << "(Enter a capital letter) " << endl;
    cout << "To show program useage press 'S'" << endl;
    cout << "To purchase a surfboard press 'P'" << endl;
    cout << "To display current purchase press 'C'" << endl;
    cout << "To display total amount due press 'T'" << endl;
    cout << "To quit the program press 'Q'" << endl;
    //add a blank space so text doesnt get too cluttered
    cout << endl;
}

    //finds out what type and how many the user wants
    void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge, int& iTotalXLarge)
    { 
    //variables
    
    char type = '0';
    int quantity = 0;
    //ask for user input
    cout << "Please enter the type of surfboard you would like to purchase:  " << endl;
    cout << "(Enter a capital 'S' for Small, 'M' for Medium, 'L' for Large, 'X' for Extra Large) ";
    cin >> type;
    
    //ask for 2nd input
    cout << "Please enter the amount of surfboards you would like to purchase: ";
    cin >> quantity;

    //add the input into the code
    if (type == 'S')
    {
        iTotalSmall = iTotalSmall + quantity;
    }
    else if (type == 'M')
    {
        iTotalMedium = iTotalMedium + quantity;
    }
    else if (type == 'L')
    {
        iTotalLarge = iTotalLarge + quantity;
    }
    //for github
    else if (type == 'X')
    {
        iTotalXLarge = iTotalXLarge + quantity;
    }
    
}

    //shows what the user input
    void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXLarge)
    {
        if (iTotalSmall != 0)
        {
            cout << "Your ordered " << iTotalSmall << " small surfboards." << endl;
        }
        else if (iTotalMedium != 0)
        {
            cout << "Your ordered " << iTotalMedium << " medium surfboards." << endl;
        }
        else if (iTotalLarge != 0)
        {
            cout << "Your ordered " << iTotalLarge << " large surfboards." << endl;
        }
        //for github
        else if (iTotalXLarge != 0)
        {
            cout << "Your ordered " << iTotalXLarge << " extra large surfboards." << endl;
        }
        else
        {
            cout << "Please buy a surfboard!" << endl;
        }
    }

    //calculate total cost
    void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge, const int iTotalXLarge)
    {
        //set const variables
        const double costS = 175.00;
        const double costM = 190.00;
        const double costL = 200.00;
        //make more variables so program can calculate total
        double totalS = 0;
        double totalM = 0;
        double totalL = 0;
        double totalT = 0;

        //extra variables for github
        const double costX = 220.00;
        double totalX = 0;

        if (iTotalSmall != 0)
        {
            totalS = iTotalSmall * costS;
            cout << "You bought a total of " << iTotalSmall << " small surfboards with a total of $" << fixed << setprecision(2) << totalS << endl;
        }
        if (iTotalMedium != 0)
        {
            totalM = iTotalMedium * costM;
            cout << "You bought a total of " << iTotalMedium << " medium surfboards with a total of $" << fixed << setprecision(2) << totalM << endl;
        }
        if (iTotalLarge != 0)
        {
            totalL = iTotalLarge * costL;
            cout << "You bought a total of " << iTotalLarge << " large surfboards with a total of $" << fixed << setprecision(2) << totalL << endl;
        }
        //for github
        if (iTotalXLarge != 0)
        {
            totalX = iTotalXLarge * costX;
            cout << "You bought a total of " << iTotalXLarge << " extra large surfboards with a total of $" << fixed << setprecision(2) << totalX << endl;
        }
        //calculate the full total amount
        totalT = totalS + totalM + totalL + totalX;
        cout << "Total amount due $" << fixed << setprecision(2) << totalT << endl;
    }   
int main()
{
    //makes title into a string to clean up the code for making the title fit nicely with the *
    string title = " Welcome to my Johnny Utah's Point Break Surf Shop";
    //title
    cout << setw(70) << setfill('*') << '*' << endl;
    cout << setw((70 - title.length()) / 2) << '*' << setfill(' ') << title << setfill('*') << setw((70 - title.length()) / 2) << '*' << endl;
    cout << setw(70) << setfill('*') << '*' << endl;

    //variables to call functions with
    int small = 0;
    int medium = 0;
    int large = 0;
    //extra variable for github
    int xlarge = 0;

    //call first function so user knows what to input
    ShowUsage();
    //set a user input to select what function is wanted
    char user = '0';
    cout << "Please enter selection: " << endl;
    cin >> user;

    //full loop calling all functions with user inputs
    while (user != 'Q')
    {
        if (user == 'S')
        {
            ShowUsage();
            
        }
        else if (user == 'P')
        {
            MakePurchase(small, medium, large, xlarge);
            
        }
        else if (user == 'C')
        {
            DisplayPurchase(small, medium, large, xlarge);
            
        }
        else if (user == 'T')
        {
            DisplayTotal(small, medium, large, xlarge);
           
        }
        cout << "Please enter selection: " << endl;
        cin >> user;
        //add blank space to remove clutter
        cout << endl;
    }
    

    //once loop is exited end program
     return 0;
}

