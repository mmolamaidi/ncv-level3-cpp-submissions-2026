#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Product
{
private:
    string productName;
    double price;
    int quantityInStock;
public:
    Product();
    Product(string pn, double pr, int qis);
    void setProduct(string pn, double pr, int qis);
    string getProductName();
    double getPrice();
    int getQuantityInStock();
};
Product::Product()
{
    productName ="";
    price= 0.0;
    quantityInStock=0;
}

Product::Product(string pn, double pr, int qis)
{
    setProduct(pn, pr, qis);
}

void Product::setProduct(string pn, double pr, int qis)
{
    productName = pn;
    if (pn == "")
        productName = "Unkown Product";
    else
        productName=pn;
    if (pr <0)
        price = 0;
    else
        price = pr;
    if (qis < 0)
        quantityInStock=0;
    else
        quantityInStock = qis;
}

string Product::getProductName()
{
    return productName;
}
double Product::getPrice()
{
    return price;
}
int Product::getQuantityInStock()
{
    return quantityInStock;
}
////////////////////////////////////////////////////////////////////////////////END CLASS////////////////////////////////////////////////////////


int main(){
    Product prd;
    prd.setProduct("Wireless Mouse", 249.99, 15);

    cout <<"Product Name:\t" <<prd.getProductName() << "\nPrice:\t\t"<< prd.getPrice() <<"\nQuantity:\t"<<prd.getQuantityInStock()<< endl;

return 0;
}
