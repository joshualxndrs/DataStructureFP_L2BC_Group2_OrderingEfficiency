#include <iostream>
#include "queue.hpp"
#include <string>
using namespace std;

void introduction()
{
    cout << "=========================================\n";
    cout << "\t    WELCOME ADMIN \n";
    cout << "=========================================\n";
    cout << "1. Take order" << endl;
    cout << "2. Remove order" << endl;
    cout << "3. Display order queue" << endl;
    cout << "4. Clear order queue" << endl;
    cout << "5. Exit Program" << endl;
    cout << "=========================================\n"
         << endl;
}

void displayMenuCategory()
{
    cout << "=========================================\n";
    cout << "\t    MENU CATEGORY \n";
    cout << "=========================================\n";
    cout << "1. Appetizer" << endl;
    cout << "2. Main Course" << endl;
    cout << "3. Beverages" << endl;
    cout << "4. Check Cart" << endl;
    cout << "=========================================\n";
}

// DISPLAYS APPETIZER MENU
void displayAppetizerMenu()
{
    cout << "=========================================\n";
    cout << "\t    APPETIZERS \n";
    cout << "=========================================\n";
    cout << "1. Truffle Fries" << endl;
    cout << "2. Mac and Cheese Bites" << endl;
    cout << "3. Mozzarella Sticks" << endl;
    cout << "4. Cocktail Meatballs" << endl;
    cout << "5. Return" << endl;
    cout << "=========================================\n";
}

void displayMainCourse()
{
    cout << "=========================================\n";
    cout << "\t    MAIN COURSE \n";
    cout << "=========================================\n";
    cout << "1. Korean Fire Wings" << endl;
    cout << "2. Smashed Cheese Burgers" << endl;
    cout << "3. Crispy Chicken Sandwich" << endl;
    cout << "4. Chicken Waffles" << endl;
    cout << "5. Return" << endl;
    cout << "=========================================\n";
}

int main()
{
    int adminChoice;
    string customerName;
    int orderNum;
    string customerOrder;

    queue<string> cusName(100);
    queue<string> cusOrder(100);

    do
    {
        introduction();

        cout << "What would you like to do? ";
        cin >> adminChoice;

        switch (adminChoice)
        {
        case 1:
            cout << "Enter customer name: ";
            cin >> customerName;
            cusName.add(customerName);

            displayMenuCategory();

            do
            {
                cout << "Please choose Menu Category: ";
                cin >> orderNum;

                switch (orderNum)
                {
                case 1:
                    displayAppetizerMenu();
                    do
                    {
                        cout << "What would you like to order? ";
                        cin >> orderNum;

                        switch (orderNum)
                        {
                        case 1:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Truffle Fries ");
                            cout << "One portion of TRUFFLE FRIES added! \n"
                                 << endl;
                            break;

                        case 2:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Mac and Cheese Bites ");
                            cout << "One portion of MAC AND CHEESE BITES added! \n"
                                 << endl;
                            break;

                        case 3:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Mozzarella Sticks ");
                            cout << "One portion of MOZZARELLA STICKS added! \n"
                                 << endl;
                            break;

                        case 4:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Cocktail Meatballs ");
                            cout << "One portion of COCKTAIL MEATBALLS added! \n"
                                 << endl;
                            break;

                        case 5:
                            cout << "CLOSING ORDER \n"
                                 << endl;
                            break;

                        default:
                            cout << "Invalid Input";
                            break;
                        }

                    } while (orderNum != 5);

                    break;
                }
            case 2:
                do
                {
                    cout << "Please choose Menu Category: ";
                    cin >> orderNum;

                    switch (orderNum)
                    {
                    case 1:
                        displayMainCourse();
                        do
                        {
                            cout << "What would you like to order? ";
                            cin >> orderNum;

                            switch (orderNum)
                            {
                            case 1:
                                // APPENDS TO ORDER STRING
                                customerOrder.append("Korean Fire Wings ");
                                cout << "One portion of KOREAN FIRE WINGS added! \n"
                                     << endl;
                                break;

                            case 2:
                                // APPENDS TO ORDER STRING
                                customerOrder.append("Smashed Cheese Burgers ");
                                cout << "One portion of SMASHED CHEESE BURGERS added! \n"
                                     << endl;
                                break;

                            case 3:
                                // APPENDS TO ORDER STRING
                                customerOrder.append("Crispy Chicken Sandwich ");
                                cout << "One portion of MOZZARELLA STICKS added! \n"
                                     << endl;
                                break;

                            case 4:
                                // APPENDS TO ORDER STRING
                                customerOrder.append("Chicken Waffles ");
                                cout << "One portion of CHICKEN WAFFLES added! \n"
                                     << endl;
                                break;

                            case 5:
                                cout << "CLOSING ORDER \n"
                                     << endl;
                                break;

                            default:
                                cout << "Invalid Input";
                                break;
                            }

                        } while (orderNum != 5);

                        break;

                    case 2:
                        cusName.remove();
                        cusOrder.remove();
                        cout << "Customer has been removed." << endl;
                        break;

                    case 3:
                        cout << "Customer names: ";
                        cusName.display();

                        cout << "Customer orders: ";
                        cusOrder.display();

                        break;

                    case 4:
                        break;

                    case 5:
                        cout << "Thank you for using the program." << endl;
                        break;

                    default:
                        cout << "INVALID INPUT" << endl;
                        break;
                    }
                }
            }
        }
    }
}