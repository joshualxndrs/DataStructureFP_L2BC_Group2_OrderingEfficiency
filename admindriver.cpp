#include <iostream>
#include "queue.hpp"
#include <string>
using namespace std;

void introduction(){
    cout<<"=========================================\n";
    cout<<"\t    WELCOME ADMIN \n";
    cout<<"=========================================\n";
    cout<<"1. Take order"<<endl;
    cout<<"2. Remove order"<<endl;
    cout<<"3. Display order queue"<<endl;
    cout<<"4. Clear order queue"<<endl;
    cout<<"5. Exit Program" << endl;
    cout<<"=========================================\n"<<endl;
}

void displayMenu(){
    cout<<"=========================================\n";
    cout<<"\t    MENU \n";
    cout<<"=========================================\n";
    cout<<"1. Truffle Fries"<<endl;
    cout<<"2. Mac and Cheese Bites"<<endl;
    cout<<"3. Mozzarella Sticks"<<endl;
    cout<<"4. Cocktail Meatballs"<<endl;
    cout<<"5. Return"<<endl;
    cout<<"=========================================\n"<<endl;
}

int main(){
    int adminChoice;
    string customerName;
    int orderNum;
    string customerOrder;
    
    queue<string> cusName(100);
    queue<string> cusOrder(100);

    do{
        introduction(); 

        cout<<"What would you like to do? ";
        cin>>adminChoice;

        switch(adminChoice){
            case 1:
                cout<<"Enter customer name: ";
                cin>>customerName;
                cusName.add(customerName);

                displayMenu();

                do{
                    cout<<"Please enter order number: ";
                    cin>> orderNum;

                    switch(orderNum){
                        case 1:
                            customerOrder.append("Truffle_Fries ");
                            cout<<"TRUFFLE FRIES added"<<endl;
                            break;

                        case 2:
                            customerOrder.append("Mac_and_Cheese_Bites ");
                            cout <<"MAC AND CHEESE BITES added"<<endl;
                            break;

                        case 3:
                            customerOrder.append("Mozzarella_Sticks ");
                            cout<<"MOZARELLA STICKS added"<<endl;
                            break;

                        case 4:
                            customerOrder.append("Cocktail_Meatballs");
                            cout<<"COCKTAIL MEATBALLS added"<<endl;
                            break;

                        case 5:
                            cout<<"CLOSING ORDER"<<endl;
                            break;

                        default:
                            cout<<"INVALID INPUT"<<endl;
                            break;
                    }
                } while(orderNum !=5);

                cusOrder.add(customerOrder);
                customerOrder = "";
                break;
            
            case 2:
                cusName.remove();
                cusOrder.remove();
                cout<<"Customer has been removed."<<endl;
                break;

            case 3:
                cout<<"Customer names: ";
                cusName.display();

                cout<<"Customer orders: ";
                cusOrder.display();

                break;

            case 4:
                break;

            case 5:
                cout<<"Thank you for using the program."<<endl;
                break;

            default:
                cout<<"INVALID INPUT"<<endl;
                break;
            
        }
    } while(adminChoice!=5);
}