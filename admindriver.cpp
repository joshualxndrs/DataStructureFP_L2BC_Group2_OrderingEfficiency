#include <iostream>
#include <sstream>
#include "queue.hpp"
#include "LinkedList.hpp"
#include "display.hpp"
#include <string>
using namespace std;

int main(){
    int adminChoice;
    string customerName;
    int orderNum;
    string customerOrder;
    string customerTotalTemp;
    double customerTotal = 0.00;

    // queue<string> cusOrder;
    dsa::LinkedList<string> cusOrder;

    do{
        double customerTotal = 0.00;
        introduction(); 

        cout<<"What would you like to do? ";
        cin>>adminChoice;

        switch(adminChoice){
            // ADD CUSTOMER
            case 1:
                cout<<"Enter customer name: ";
                cin>>customerName;
                customerOrder.append(customerName + "\n\n");
                customerOrder.append(".....ORDERS : .....\n");
                
                displayMenu();

                do{
                    cout<<"Please enter order number: ";
                    cin>> orderNum;

                    switch(orderNum){
                        // TRUFFLE FRIES ORDER
                        case 1:
                            customerOrder.append("Truffle Fries\n");
                            customerTotal += 6.50;
                            cout<<"One portion of TRUFFLE FRIES added!\n"<<endl;
                            break;

                        // MAC AND CHEESE BITES ORDER
                        case 2:
                            customerOrder.append("Mac and Cheese Bites\n");
                            customerTotal += 8.20;
                            cout <<"One portion of MAC AND CHEESE BITES added!\n"<<endl;
                            break;

                        // MOZZARELLA STICKS ORDER
                        case 3:
                            customerOrder.append("Mozzarella Sticks\n");
                            customerTotal += 9.40;
                            cout<<"One portion of MOZZARELLA STICKS added!\n"<<endl;
                            break;

                        // COCKTAIL MEATBALLS ORDER
                        case 4:
                            customerOrder.append("Cocktail Meatballs\n");
                            customerTotal += 6.50;
                            cout<<"One portion of COCKTAIL MEATBALLS added!\n "<<endl;
                            break;
                        
                        // KOREAN FIRE WINGS ORDER
                        case 5:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Korean Fire Wings\n");
                            customerTotal += 12.10;
                            cout << "One portion of KOREAN FIRE WINGS added! \n"<< endl;
                            break;

                        // SMASHED CHEESE BURGERS ORDER
                        case 6:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Smashed Cheese Burgers\n");
                            customerTotal += 14.50;
                            cout << "One portion of SMASHED CHEESE BURGERS added! \n" << endl;
                            break;

                        // CRISPY CHICKEN SANDWICH ORDER
                        case 7:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Crispy Chicken Sandwich\n");
                            customerTotal += 10.70;
                            cout << "One portion of CRISPY CHICKEN SANDWICH added! \n" << endl;
                            break;

                        case 8:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Chicken Waffles\n");
                            customerTotal += 10.70;
                            cout << "One portion of CHICKEN WAFFLES added! \n"<< endl;
                            break;
                       case 9:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Coca Cola\n");
                            customerTotal += 1.30;
                            cout << "One bottle of COCA COLA added! \n" << endl;
                            break;

                        case 10:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Lemonade\n");
                            customerTotal += 1.10;
                            cout << "One bottle of LEMONADE added! \n" << endl;
                            break;

                        case 11:
                            cout<<"CLOSING ORDER"<<endl;
                            break;

                        default:
                            cout<<"INVALID INPUT"<<endl;
                            break;
                    }
                } while(orderNum !=11);

                // CALCULATE TOTAL PRICE
                customerOrder.append("...................\n");

                // CONVERTS CUSTOMERTOTAL TO STRING
                customerTotalTemp = to_string(customerTotal);
                customerTotalTemp.resize(5);

                // APPENDS TOTAL
                customerOrder.append("\nTotal Price : $" + customerTotalTemp + "\n");

                // ADDS CUSTOMER'S ORDER 
                cusOrder.add(customerOrder);

                // RESETS VARIABLES FOR NEXT CUSTOMER
                customerOrder = "";
                customerTotalTemp ="";
                customerTotal=0;
                break;
            
            // REMOVES FIRST ORDER
            case 2:
                cusOrder.remove();
                completion();
                break;

            // DISPLAYS ALL ORDERS
            case 3:
                displayAlert();
                cout<<"\n==============================\n";
                cout<<"CUSTOMER ORDERS: " <<endl;
                cout<<"==============================\n";
                cusOrder.display();

                break;

            // CLEAR ORDER LIST
            case 4:
                cusOrder.clear();
                cout<<"Order list cleared !"<<endl;
                break;

            // EXIT PROGRAM
            case 5:
                displayThanks(); // DISPLAYS THANK YOU
                break;

            // IF USER ENTERS NUMBERS OUTSIDE OF OPTIONS
            default:
                cout<<"INVALID INPUT"<<endl;
                break;
            
        }
    } while(adminChoice!=5);
}