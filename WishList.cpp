// Fransiskus Agapa

#include "WishList.h"
#include "sstream"

using std::stringstream;

// default constructor - constructor initializer list style
WishList::WishList() : _name("NoName"), _color("NoColor"), _quantity(-1), _price(0.0), _total(0.0) {}

// constructor
WishList::WishList(const string &theName, const string &theColor, const int &theQuantity, const double &thePrice, const double &theTotal)
{
    _name = theName;
    _color = theColor;
    _quantity = theQuantity;
    _price = thePrice;
    _total = theTotal;
}

// name
string WishList::GetName() const
{
    return _name;
}

// color
string WishList::GetColor() const
{
    return _color;
}

// quantity
int WishList::GetQuantity() const
{
    return _quantity;
}

// price
double WishList::GetPrice() const
{
    return _price;
}

// total
double WishList::GetTotal() const
{
    return _total;
}

// line in json format
string WishList::lineJson() const
{
    stringstream asJson;
    asJson << "{\"Name\":\"" << _name << "\", \"Color\":\"" << _color << "\", \"Quantity\":" << _quantity << ", \"Price\":$" << _price << ", \"Total\":$" << _total <<  "}";
    return asJson.str();
}
