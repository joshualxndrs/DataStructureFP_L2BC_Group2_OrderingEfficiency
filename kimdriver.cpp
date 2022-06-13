#include <iostream>
#include "queue.hpp"
#include <string>
using namespace std;

string name;
int menuCategory;
int appetizerChoice;
string order;
queue<string> customerName(100);
queue<string> customerOrder(100);

// INTRODUCTION
void introduction(){
    cout<<"=========================================\n";
    cout<<"\t    WELCOME TO OUR RESTAURANT \n";
    cout<<"=========================================\n";
    cout<<"Please enter your name: ";
    cin>>name;
    customerName.add(name);
}

// DISPLAYS MENU CATEGORIES
void displayMenuCategory(){
    cout<<"=========================================\n";
    cout<<"\t    MENU CATEGORY \n";
    cout<<"=========================================\n";
    cout<<"1. Appetizer"<<endl;
    cout<<"2. Main Course"<<endl;
    cout<<"3. Beverages"<<endl;
    cout<<"4. Check Cart"<<endl;
    cout<<"=========================================\n";
}

// DISPLAYS APPETIZER MENU
void displayAppetizerMenu(){
    cout<<"=========================================\n";
    cout<<"\t    APPETIZERS \n";
    cout<<"=========================================\n";
    cout<<"1. Truffle Fries"<<endl;
    cout<<"2. Mac and Cheese Bites"<<endl;
    cout<<"3. Mozzarella Sticks"<<endl;
    cout<<"4. Cocktail Meatballs"<<endl;
    cout<<"5. Return"<<endl;
    cout<<"=========================================\n";
}

int main(){
    introduction(); // INTRODUCTION CALL

    displayMenuCategory(); // DISPLAYS MENU CATEGORY
    cout<<"Which menu would you like to view? ";
    cin>>menuCategory;

    // SWITCH CASE FOR MENU CATEGORY
    switch(menuCategory){

        // APPETIZER 
        case 1:
            displayAppetizerMenu();
            do{
                cout<<"What would you like to order? ";
                cin>>appetizerChoice;

                switch(appetizerChoice){
                    case 1:
                        // APPENDS TO ORDER STRING
                        order.append("Truffle Fries ");
                        cout<<"One portion of TRUFFLE FRIES added! \n"<<endl;
                        break;
                    
                    case 2:
                        // APPENDS TO ORDER STRING
                        order.append("Mac and Cheese Bites ");
                        cout<<"One portion of MAC AND CHEESE BITES added! \n"<<endl;
                        break;

                    case 3:
                        // APPENDS TO ORDER STRING
                        order.append("Mozzarella Sticks ");
                        cout<<"One portion of MOZZARELLA STICKS added! \n"<<endl;
                        break;

                    case 4:
                        // APPENDS TO ORDER STRING
                        order.append("Cocktail Meatballs ");
                        cout<<"One portion of COCKTAIL MEATBALLS added! \n"<<endl;
                        break;

                    case 5:
                        break;
                        cout<<"CLOSING ORDER \n"<<endl;
                    
                    default:
                        cout<<"Invalid Input";
                        break;
                }

            } while(menuCategory != 5);

    }

    // ADDS ORDER STRING TO CUSTOMERORDER QUEUE
    // ONE CUSTOMER HAS ONE ORDER STRING
    customerOrder.add(order);
    
    // CUSTOMER NAMES
    cout<< "Customer: ";
    customerName.display();

    // CUSTOMER ORDERS
    cout <<"Order: ";
    customerOrder.display();
}