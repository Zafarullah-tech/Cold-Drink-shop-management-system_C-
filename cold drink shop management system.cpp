#include <iostream>
#include<iostream>
#include<fstream>
using namespace std;
struct collection_of_data_types {
    string customer_name;
    string date;
    int type;
    int size;
    int quantity;
    
};
void display_welcome()
{
	cout<<endl;
	cout<<"                                                             __________________________________________"<<endl;
	cout<<"                                                            |__________________________________________|"<<endl;
	cout<<"                                                            |              WELCOME TO THE              |"<<endl;
	cout<<"                                                            |       COLD DRINK SHOP MANAGEMENT SYSTEM  |"<<endl;
	cout<<"                                                            |__________________________________________|"<<endl;
	cout<<"                                                            |__________________________________________|"<<endl;
	cout<<endl;
}
void two_option() {
    cout << endl;
    cout << "                                                                   _________________________________" << endl;
    cout << endl;
    cout << "                                       1) Start Selling                                                  2) View Sales History   " << endl;
    cout<<endl;
    cout << "                                        ________________________________________________________________________________________________" << endl;
    cout << endl;
}

void menu() {
    cout << endl;
    cout << "                                                            ____________________________________________" << endl;
    cout << "                                                           |                                            |" << endl;
    cout << "                                                           |                     MENU                   |" << endl;
    cout << "                                                           |                                            |" << endl;
    cout << "                                                           |____________________________________________|" << endl;
    cout << endl;
    cout << "                                                                   _________________________________" << endl;
    cout << endl;
    cout << "                                                                                1) COKE                    " << endl;
    cout << "                                                                                2) PEPSI                    " << endl;
    cout << "                                                                                3) SPRITE                  " << endl;
    cout << "                                                                                4) FANTA                   " << endl;
    cout << "                                                                                5) MOUNTAIN DEW             " << endl;
    cout << "                                        ________________________________________________________________________________________________" << endl;
    cout << endl;
    cout<<endl;
}
void submenu(int type) 
{
    switch (type) 
	{
        case 1:
            cout << "                                                                                _________" << endl;
            cout << "                                                                               |  COKE   |" << endl;
            cout << "                                                                               '''''''''' " << endl;
            cout << endl;
            cout << "                                                                        WHAT DO YOU WANT TO BUY ?" << endl;
            cout << endl;
            cout << "                                                           ___________________________________________________________________" << endl;
            cout << endl;
            cout << "                                                                               1) COKE 1 LTR                         RS:   150                 " << endl;
            cout << "                                                                               2) COKE 1.5 LTR                       RS:   200                 " << endl;
            cout << "                                                                               3) COKE 2 LTR                         RS:   280                 " << endl;
            cout<<endl;
            cout<<endl;
            break;
        case 2:
            cout << "                                                                                _________" << endl;
            cout << "                                                                               |  PEPSI  |" << endl;
            cout << "                                                                               ''''''''''' " << endl;
            cout << endl;
            cout << "                                                                        WHAT DO YOU WANT TO BUY ?" << endl;
            cout << endl;
            cout << "                                                           ___________________________________________________________________" << endl;
            cout << endl;
            cout << "                                                                               1) PEPSI 1 LTR                        RS:   150                 " << endl;
            cout << "                                                                               2) PEPSI 1.5 LTR                      RS:   200                 " << endl;
            cout << "                                                                               3) PEPSI 2 LTR                        RS:   280                 " << endl;
		    cout<<endl;
		    cout<<endl;	                                                                          
            break;
        case 3:
            cout << "                                                                                _________" << endl;
            cout << "                                                                               | SPRITE |" << endl;
            cout << "                                                                               ''''''''''' " << endl;
            cout << endl;
            cout << "                                                                        WHAT DO YOU WANT TO BUY ?" << endl;
            cout << endl;
            cout << "                                                           ___________________________________________________________________" << endl;
            cout << endl;
            cout << "                                                                               1) SPRITE 1 LTR                      RS:   150                 " << endl;
            cout << "                                                                               2) SPRITE 1.5 LTR                    RS:   200                 " << endl;
            cout << "                                                                               3) SPRITE 2 LTR                      RS:   280                 " << endl;
            cout<<endl;
            cout<<endl;
            break;
        case 4:
            cout << "                                                                                _________" << endl;
            cout << "                                                                               |  FANTA |" << endl;
            cout << "                                                                               ''''''''''' " << endl;
            cout << endl;
            cout << "                                                                        WHAT DO YOU WANT TO BUY ?" << endl;
            cout << endl;
            cout << "                                                           ___________________________________________________________________" << endl;
            cout << endl;
            cout << "                                                                               1) FANTA 1 LTR                       RS:   150                 " << endl;
            cout << "                                                                               2) FANTA 1.5 LTR                     RS:   200                 " << endl;
            cout << "                                                                               3) FANTA 2 LTR                       RS:   280                 " << endl;
            cout<<endl;
            cout<<endl;
            break;
        case 5:
            cout << "                                                                                _____________" << endl;
            cout << "                                                                               | MOUNTAIN DEW |" << endl;
            cout << "                                                                               '''''''''''''''''" << endl;
            cout << endl;
            cout << "                                                                        WHAT DO YOU WANT TO BUY ?" << endl;
            cout << endl;
            cout << "                                                           ___________________________________________________________________" << endl;
            cout << endl;
            cout << "                                                                               1) MOUNTAIN DEW 1 LTR               RS:   150                 " << endl;
            cout << "                                                                               2) MOUNTAIN DEW 1.5 LTR             RS:   200                 " << endl;
            cout << "                                                                               3) MOUNTAIN DEW 2 LTR               RS:   280                 " << endl;
            cout<<endl;
            cout<<endl;
            break;
        default:
            cout << "                                                                         Invalid choice!   " << endl;
    }
}
int getPrice(int type, int size) {
    // Price determination based on drink type and size
    if (type == 1) 
	{
        if (size == 1)
		{
		  return 150;
	}
        else if (size == 2) 
		{
		return 200;
	}
        else if (size == 3)
		{
		 return 280;
		 }
    }
	 else if (type == 2)
	  {
        if (size == 1)
		{
		 return 150;
		 }
        else if (size == 2)
		{
		 return 200;
		 }
        else if (size == 3)
		{
		 return 280;
	}
    }
	 else if (type == 3) 
	 {
        if (size == 1) 
		{
		return 150;
      	}
        else if (size == 2)
		{
		 return 200;
	}
        else if (size == 3) 
		{
		return 280;
	}
    } 
	else if (type == 4)
	 {
        if (size == 1)
		{
		  return 150;
	}
        else if (size == 2) 
		{
		return 200;
	}
        else if (size == 3) 
		{
		return 280;
	}
    } 
	else if (type == 5) 
	{
        if (size == 1) 
		{
		return 150;
	}
        else if (size == 2)
		{
		 return 200;
	}
        else if (size == 3) 
		{
		return 280;
	}
    }
    return 0;  // Return 0 if invalid type or size
}

void displaySales() {
    ifstream data;
data.open("data.txt");
    string line;
    if (data.is_open()) {
        while (getline(data, line)) {
            cout << line << endl;
        }
        data.close();
    } else {
        cout << "                                                                 Error opening sales history file." << endl;
    }
}
void displayBill(string customerName,string date, int totalBill ) {
    cout << endl;
    cout<<"                                                                     _______________________________________________________________"<<endl;
    cout<<"                                                                                          BILL                                       "<<endl;
    cout << "                                                                   ________________________________________________________________" << endl;
    cout << "                                                                                   Customer: " << customerName                 << endl;
    cout<<"                                                                                    Date : "<<date<<"                                "<<endl;
    cout << "                                                                                  Total Bill: RS " << totalBill << endl;
    cout << "                                                                   _______________________________________________________________" << endl;
    ofstream data;
    data.open("data.txt",ios::app);
    data << endl;
    data<<"BILL                     "<<endl;
    data<<"--------------------------------------------------" << endl;
    data<<"Customer: " << customerName << endl;
    data<<"Date : "<<date<<endl;
    data<<"Total Bill: RS " << totalBill << endl;
    data<<"--------------------------------------------------" << endl;
    data.close();
    
}
int main() {
    collection_of_data_types variable;
    
    display_welcome();
    
   
    int totalBill=0;
    bool buying = true;
    
    while (buying) {
    	
     two_option();  // Display the updated main menu with the new option
        
        cout << "                                                                        Enter your choice (1-2): ";
        int choice;
        cin >> choice;

        switch (choice) 
	{
            case 1:  // Start Selling
            cin.ignore();//function used for remove newline character(\n) generate from press enter key after cin>> in  buffer memory
    cout << "                                                                      Enter customer name: ";
    getline(cin, variable.customer_name);
    cout<<"                                                                      Enter date :";
    getline(cin, variable.date);
    
                menu();
        cout<<"                                                            Reminder if you press another key your bill will count zero "<<endl;
        cout<<endl;
        cout << "                                                                        Enter the type of drink (1-5): ";
        cin >> variable.type;

        submenu(variable.type);
        cout<<"                                                            Reminder if you press another key your bill will count zero "<<endl; 
        cout<<endl;
        cout << "                                                                        Enter the size (1-3): ";
        
        cin >> variable.size;
        

        cout << "                                                                        Enter quantity: ";
        cin >> variable.quantity;


        int itemPrice; // Get price based on type and size
        
		itemPrice = getPrice(variable.type, variable.size);
        
       
       
	   totalBill+= itemPrice * variable.quantity;  // Calculate bill for this purchase and update totalBill

        
        displayBill(variable.customer_name, variable.date, totalBill);   // Display current bill for this item

        
        // Check if user wants to continue shopping
        cout<<endl;
        cout << "                                                                    Would you like to continue shopping? (Y/N): ";
        char continueChoice;
        cin >> continueChoice;
        if (continueChoice == 'N' || continueChoice == 'n') 
		{
            buying = false;
        }
	
    
                break;

    case 2:  // View Sales History
                displaySales();  // Display the sales history
                break;

            default:
                cout << "                                                                         Invalid choice! Please select a valid option." << endl;
                break;
        }

        // Ask if the owner wants to continue or exit
        cout << endl;
        cout << "                                                                    Would you like to perform another operation? (Y/N): ";
        char continueChoice;
        cin >> continueChoice;
        if (continueChoice == 'N' || continueChoice == 'n') {
            buying = false;  // Exit the loop if the owner decides to exit
        }
        else
        buying=true;
    }

    return 0;
}

