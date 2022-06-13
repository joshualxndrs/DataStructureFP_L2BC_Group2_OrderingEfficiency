#include <iostream>
#include ".\queue.hpp"
#include <string>
using namespace std;

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

void displayAppetizerMenu(){
    cout<<"=========================================\n";
    cout<<"\t    APPETIZERS \n";
    cout<<"=========================================\n";
    cout<<"1. Truffle Fries"<<endl;
    cout<<"2. Mac and Cheese Bites"<<endl;
    cout<<"3. Mozzarella Sticks"<<endl;
    cout<<"3. Coctail Meatballs"<<endl;
    cout<<"5. Return"<<endl;
    cout<<"=========================================\n";
}

string itemAmount(){
    int amt;
    cout<<"Enter amount : ";
    cin>>amt;
    return "(" + to_string(amt) +") " ;
}


int main()
{
    // queue<string> admin(100);
    int orderSize;
    string name;
    int userInput;
    string ap1 = "Truffle_Fries,";
    string ap2 = "Mac_and_Cheese_Bites,";
    string ap3 = "Mozzarela_Sticks,";
    string ap4 = "Cocktail_Meatballs,";
    string order;

    cout<<"What is your name ? ";
    cin>>name;

    cout<<"How many items would you like to order? ";
    cin>> orderSize;

    
    displayMenuCategory();
    cout<<"What would you like to order? ";
    cin>>userInput;

    queue<string> customer(orderSize);

    switch(userInput){

        case 1:
        displayAppetizerMenu();
        cout<<"Choose an appetizer : ";
        cin>>userInput;
        switch(userInput){
            case 1 :
                order.append(itemAmount());
                order.append(ap1);
                break;
            case 2:
                order.append(itemAmount());
                order.append(ap2);
                break;
            case 3:
                order.append(itemAmount());
                order.append(ap3);
                break;
            case 4:
                order.append(itemAmount());
                order.append(ap4);
                break;
            case 5:
                break;
            default:
                cout<<"Invalid Input";
                break;
        }
        
    }
    // cout<<order;

    customer.add(order);
    customer.display();

}