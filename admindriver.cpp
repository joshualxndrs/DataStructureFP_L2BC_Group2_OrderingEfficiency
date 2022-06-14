#include <iostream>
#include "queue.hpp"
#include <string>
using namespace std;

void introduction(){
    cout<<"\n================================================================================================================================\n\n";
    cout<<"     _,ggg,_                                                ,gggggggggggggg                      ,ggggggg,                   \n";
    cout<<"    d8P'''Y8b,                                             dP'''''88'''''                      ,dP''''''Y8b             I8   \n";
    cout<<"    88,    '8b,                                            Yb,_    88                          d8'    a  Y8             I8   \n";
    cout<<"     'Y8baaa`8b                                             `''    88                          88     'Y8P'          88888888\n";
    cout<<"        `''' Y8                                                 ggg88gggg                      `8baaaa                  I8   \n";
    cout<<"             d8  gg      gg   ,ggg,   gg      gg   ,ggg,           88   8,ggggg,   ,gggggg,   ,d8P''''       ,gggg,gg   I8   \n";
    cout<<",ad8888b,   ,8P  I8      8I  i8" "8i  I8      8I  i8' '8i          88   dP'  'Y8gggdP''''8I   d8'           dP'  'Y8I   I8   \n";
    cout<<"I8P'  `'Y8a,8P'  I8,    ,8I  I8, ,8I  I8,    ,8I  I8, ,8I    gg,   88  i8'    ,8I ,8'    8I   Y8,          i8'    ,8I  ,I8,  \n";
    cout<<"I8b,,___,,888b,_,d8b,  ,d8b, `YbadP' ,d8b,  ,d8b, `YbadP'     'Yb,,8P ,d8,   ,d8',dP     Y8,  `Yba,,_____,,d8,   ,d8b,,d88b, \n";
    cout<<" `'Y88888P'' 'Y88P''Y88P'`Y8888P'Y8888P''Y88P'`Y8888P'Y888      'Y8P' P'Y8888P'  8P      `Y8    `'Y8888888P'Y8888P'`Y88P''Y8 \n\n";
    cout<<"===============================================================================================================================\n";
    cout<<"1. Take order"<<endl;
    cout<<"2. Complete top order"<<endl;
    cout<<"3. Display order queue"<<endl;
    cout<<"4. Clear order queue"<<endl;
    cout<<"5. Exit Program" << endl;
    cout<<"========================================================\n"<<endl;
}

void displayMenu(){
    cout<<"========================================================\n\n";
    cout<<"ooo. .oo.  .oo.    .ooooo.  ooo. .oo.   oooo  oooo  \n";
    cout<<"`888P'Y88bP'Y88b  d88' `88b `888P'Y88b  `888  `888   \n";
    cout<<" 888   888   888  888ooo888  888   888   888   888   \n";
    cout<<" 888   888   888  888    .o  888   888   888   888   \n";
    cout<<"o888o o888o o888o `Y8bod8P' o888o o888o  `V88V'V8P'    \n\n";
    cout<<"========================================================\n";
    cout<<"1. Truffle Fries....................$6.50"<<endl;
    cout<<"2. Mac and Cheese Bites.............$8.20"<<endl;
    cout<<"3. Mozzarella Sticks................$9.40"<<endl;
    cout<<"4. Cocktail Meatballs...............$6.50"<<endl;
    cout<<"5. Korean Fire Wings...............$12.10" << endl;
    cout<<"6. Smashed Cheese Burgers..........$14.50" << endl;
    cout<<"7. Crispy Chicken Sandwich.........$10.70" << endl;
    cout<<"8. Chicken Waffles.................$10.70" << endl;
    cout<<"9. Coca Cola........................$1.30" << endl;
    cout<<"10. Lemonade........................$1.10" << endl;
    cout<<"11. Return"<<endl;
    cout<<"========================================================\n";
}

int main(){
    int adminChoice;
    string customerName;
    int orderNum;
    string customerOrder;
    string customerTotalTemp;
    
    queue<string> cusName(100);
    queue<string> cusOrder(100);

    do{
        double customerTotal = 0.00;
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
                            customerOrder.append("Truffle Fries\n");
                            customerTotal + 6.50;
                            cout<<"One portion of TRUFFLE FRIES added!\n"<<endl;
                            break;

                        case 2:
                            customerOrder.append("Mac and Cheese Bites\n");
                            customerTotal + 8.20;
                            cout <<"One portion of MAC AND CHEESE BITES added!\n"<<endl;
                            break;

                        case 3:
                            customerOrder.append("Mozzarella Sticks\n");
                            customerTotal + 9.40;
                            cout<<"One portion of MOZZARELLA STICKS added!\n"<<endl;
                            break;

                        case 4:
                            customerOrder.append("Cocktail Meatballs\n");
                            customerTotal + 6.50;
                            cout<<"One portion of COCKTAIL MEATBALLS added!\n "<<endl;
                            break;
                        case 5:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Korean Fire Wings\n");
                            customerTotal + 12.10;
                            cout << "One portion of KOREAN FIRE WINGS added! \n"<< endl;
                            break;

                        case 6:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Smashed Cheese Burgers\n");
                            customerTotal + 14.50;
                            cout << "One portion of SMASHED CHEESE BURGERS added! \n" << endl;
                            break;

                        case 7:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Crispy Chicken Sandwich\n");
                            customerTotal + 10.70;
                            cout << "One portion of CRISPY CHICKEN SANDWICH added! \n" << endl;
                            break;

                        case 8:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Chicken Waffles\n");
                            customerTotal + 10.70;
                            cout << "One portion of CHICKEN WAFFLES added! \n"<< endl;
                            break;
                       case 9:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Coca Cola\n");
                            customerTotal + 1.30;
                            cout << "One bottle of COCA COLA added! \n" << endl;
                            break;

                        case 10:
                            // APPENDS TO ORDER STRING
                            customerOrder.append("Lemonade\n");
                            customerTotal + 1.10;
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
                cout<< customerTotal<<endl;
                customerTotalTemp = to_string(customerTotal);
                customerOrder.append("\nTotal Price : $" + customerTotalTemp );
                cusOrder.add(customerOrder);
                customerOrder = "";
                customerTotalTemp ="";
                customerTotal=0;
                break;
            
            case 2:
                cusName.remove();
                cusOrder.remove();
                cout<<"=================================================================================================\n\n";
                cout<<"  .oooooo.                                          oooo                .                   .o8  \n";
                cout<<" d8P'  `Y8b                                         `888              .o8                  '888  \n";
                cout<<"888           .ooooo.  ooo. .oo.  .oo.   oo.ooooo.   888   .ooooo.  .o888oo  .ooooo.   .oooo888  \n";
                cout<<"888          d88' `88b `888P'Y88bP'Y88b   888' '88b  888  d88' `88b   888   d88' `88b d88' `888  \n";
                cout<<"888          888   888  888   888   888   888   888  888  888ooo888   888   888ooo888 888   888  \n";
                cout<<"`88b    ooo  888   888  888   888   888   888   888  888  888    .o   888 . 888    .o 888   888  \n";
                cout<<" `Y8bood8P'  `Y8bod8P' o888o o888o o888o  888bod8P' o888o `Y8bod8P'   '888' `Y8bod8P' `Y8bod88P' \n";
                cout<<"                                          888                                                    \n";
                cout<<"                                         o888o                                                   \n\n";
                cout<<"=================================================================================================\n";
                cout<<"Customer has been removed."<<endl;
                break;

            case 3:
                cout<<"====================================================================\n\n";
                cout<<"oooooooooo.    o8o                      oooo                        \n";
                cout<<"`888'   `Y8b   `''                      `888                        \n";
                cout<<" 888      888 oooo   .oooo.o oo.ooooo.   888   .oooo.   oooo    ooo \n";
                cout<<" 888      888 `888  d88(  '8  888' `88b  888  `P  )88b   `88.  .8'  \n";
                cout<<" 888      888  888  `'Y88b.   888   888  888   .oP'888    `88..8'   \n";
                cout<<" 888     d88'  888  o.  )88b  888   888  888  d8(  888     `888'    \n";
                cout<<"o888bood8P'   o888o 8''888P'  888bod8P' o888o `Y888''8o     .8'     \n";
                cout<<"                              888                       .o..P'      \n";
                cout<<"                             o888o                      `Y8P'       \n\n";
                cout<<"====================================================================\n";
                cout<<"CUSTOMER NAMES : " <<endl;
                cout<<"====================\n";
                cusName.display();

                cout<<"\n====================\n";
                cout<<"CUSTOMER ORDERS: " <<endl;
                cout<<"====================\n";
                cusOrder.display();

                break;

            case 4:
                break;

            case 5:
                cout<<"=====================================================================================================\n\n";
                cout<<"ooooooooooooo oooo                              oooo             oooooo   oooo                       \n";
                cout<<"8'   888   `8 `888                              `888              `888.   .8'                        \n";
                cout<<"     888       888 .oo.    .oooo.   ooo. .oo.    888  oooo         `888. .8'    .ooooo.  oooo  oooo  \n";
                cout<<"     888       888P'Y88b  `P  )88b  `888P'Y88b   888 .8P'           `888.8'    d88' `88b `888  `888  \n";
                cout<<"     888       888   888   .oP'888   888   888   888888.             `888'     888   888  888   888  \n";
                cout<<"     888       888   888  d8(  888   888   888   888 `88b.            888      888   888  888   888  \n";
                cout<<"    o888o     o888o o888o `Y888""8o o888o o888o o888o o888o          o888o     `Y8bod8P'  `V88V'V8P' \n\n";
                cout<<"=====================================================================================================\n";
                break;

            default:
                cout<<"INVALID INPUT"<<endl;
                break;
            
        }
    } while(adminChoice!=5);
}