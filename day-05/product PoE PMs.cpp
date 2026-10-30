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

void getProductInfo(Product &prdc)
{
    string prn;
    double prp;
    int prq;

    cout<<"Enter product name:\n";
    cin>>prn;
    cout<<"Enter product price:\n";
    cin>>prp;
    cout<<"Enter product quantity\n";
    cin>>prq;

    prdc.setProduct(prn,prp,prq);

}

void displayProductInfo(Product &prdc)
{
     cout <<"Product Name:\t" <<prdc.getProductName() << "\nPrice:\t\t"<< prdc.getPrice() <<"\nQuantity:\t"<<prdc.getQuantityInStock()<< endl;
}

int main(){

    Product ps;

    getProductInfo(ps);
    displayProductInfo(ps);


return 0;
}
