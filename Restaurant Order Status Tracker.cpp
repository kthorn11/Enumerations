// Restaurant Order Status Tracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum OrderStatus
{
    Placed,
    Cooking,
    Ready,
    Delivered

};

int main()
{
    
    string user_input;
    OrderStatus current_status;

    cout << "Enter order status (Placed / Cooking / Ready / Delivered): ";
    cin >> user_input;


    if (user_input == "Placed")
        current_status = Placed;
    else if (user_input == "Cooking")
        current_status = Cooking;
    else if (user_input == "Ready")
        current_status = Ready;
    else if (user_input == "Delivered")
        current_status = Delivered;
    else 
    {
        cout << "Invalid Input!";
        return 0;

    }

    switch (current_status)
    {
    case Placed:
        cout << "Order received. We will start soon!";
        break;

    case Cooking:
        cout << "Your food is being cooked. Please wait.";
        break;

    case Ready:
        cout << "Your food is ready. Please collect it!";
        break;

    case Delivered:
        cout << "Order deliverd. Enjoy your meal!";
        break;
    }

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
