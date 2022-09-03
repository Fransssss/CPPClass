// Fransiskus Agapa

#ifndef CPPCLASS_WISHLIST_H
#define CPPCLASS_WISHLIST_H

#include "string"

using std::string;

class WishList
{
private:
    string _name;
    string _color;
    int _quantity;
    double _price;
    double _total;
public:
WishList();                                                             // default constructor
WishList(const string& theName, const string& theColor, const int& theQuantity, const double& thePrice, const double& theTotal);
string GetName() const;
string GetColor() const;
int GetQuantity() const;
double GetPrice() const;
double GetTotal() const;
string lineJson() const;
};

#endif //CPPCLASS_WISHLIST_H
