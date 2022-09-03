// Author: Fransiskus Agapa
// 9/3/22
// Practice make improvement - Have Fun !!!
// :)

// ========================
// it is a wishlist where user puts name of a product,
// its color, quantity, price per quantity, and total pride to buy from BestBuy store
// ========================


#include <iostream>
#include "WishList.h"
#include "CapitalWord.h"
#include "ValidDigit.h"

using std::cout;
using std::endl;
using std::cin;
using std::getline;
using std::string;
using std::stoi;
using std::stod;

int main()
{
    string  choice;                                                 // user choice
    WishList* theWishList = nullptr;                                // class pointer to new allocated memory
    bool thereIsData;                                               // indicate user has input data or not
    cout << endl << "== BestBuy WishList ==" << endl;
    cout << "1. Input data" << endl;
    cout << "2. Display data" << endl;
    cout << "e. Exit" << endl;
    cout << "choice: ";
    cin >> choice;
    cout << endl;

    while(choice != "e" and choice != "E")
    {
        if(choice == "1")
        {
            cout << endl << "= Input Data ="  << endl << endl;
            string name;
            string color;
            string strQuantity;                                      // validate input as digit first
            int quantity;                                            // change strQuantity to int
            bool validQuantity = false;                              //  indicate valid digit for quantity
            string strPrice;
            double price;
            bool validPrice = false;
            double total;

            // name
            cout << "What is the name of the product: ";
            while(name.size() == 0)                                  // keep asking until user input something
            {
                getline(cin, name);
            }
            Capitalize(name);
            cout << endl;

            // color
            cout << "What is the color of the product: ";
            while(color.size() == 0)
            {
                cin >> color;
            }
            Capitalize(color);
            cout << endl;

            // quantity
            cout << "How many product you wish to purchase: ";
            while(strQuantity.size() == 0)
            {
                cin >> strQuantity;
            }
            validQuantity = Validate(strQuantity);
            if(validQuantity)
            {
                quantity = stoi(strQuantity);
            }
            else
            {
                cout << endl << "[ Invalid quantity ]" << endl;
                quantity = -1;
            }
            cout << endl;

            // price
            cout << "What is the price for one product: $";
            while(strPrice.size() == 0)
            {
                cin >> strPrice;
            }
            validPrice = Validate(strPrice);
            if(validPrice)
            {
                price = stod(strPrice);
            }
            else
            {
                cout << endl << "[ Invalid price ]" << endl;
                price = 0;
            }
            cout << endl;

            // total
            if(validPrice and validQuantity)                      // make sure price and quantity is valid
            {
                total = price;
                total *= quantity;
            }

            else if (validPrice)
            {
                total = price;
            }

            else
            {
                total = 0;
            }

            thereIsData = true;
            theWishList = new WishList(name, color, quantity, price, total);
            cout << endl << "[ Data Submitted ]" << endl;
            cout << endl << "===================" << endl;
        }

        else if(choice == "2")
        {
            cout << endl << "= Display Data =" << endl;
            if(thereIsData)
            {
                cout << endl << "Name: " << theWishList->GetName() << endl;
                cout << "Color: " << theWishList->GetColor() << endl;
                cout << "Quantity: " << theWishList->GetQuantity() << endl;
                cout << "Price: $" << theWishList->GetPrice() << endl;
                cout << "Total: $" << theWishList->GetTotal() << endl;
                cout << endl << theWishList->lineJson() << endl;
            }
            else
            {
                theWishList = new WishList;
                cout << endl << "Name: " << theWishList->GetName() << endl;
                cout << "Color: " << theWishList->GetColor() << endl;
                cout << "Quantity: " << theWishList->GetQuantity() << endl;
                cout << "Price: $" << theWishList->GetPrice() << endl;
                cout << "Total: $" << theWishList->GetTotal() << endl;
                cout << endl << theWishList->lineJson() << endl;
            }
            cout << endl << "===================" << endl;
        }

        else
        {
            cout << endl <<  "[ Invalid choice ]" << endl;
        }

        cout << endl << "== BestBuy WishList ==" << endl;
        cout << "1. Input data" << endl;
        cout << "2. Display data" << endl;
        cout << "e. Exit" << endl;
        cout << "choice: ";
        cin >> choice;
        cout << endl;
    }

    delete theWishList;

    if(choice == "e" or choice == "E")
        cout << endl << "== Exit Program ==" << endl;

    return 0;
}
