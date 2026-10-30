#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Product {
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

Product::Product() {
    productName ="";
    price= 0.0;
    quantityInStock=0;
}

Product::Product(string pn, double pr, int qis) {
    setProduct(pn, pr, qis);
}

void Product::setProduct(string pn, double pr, int qis) {
    if (pn == "")
        productName = "Unknown Product";
    else
        productName = pn;

    if (pr < 0)
        price = 0;
    else
        price = pr;

    if (qis < 0)
        quantityInStock = 0;
    else
        quantityInStock = qis;
}

string Product::getProductName() {
    return productName;
}

double Product::getPrice() {
    return price;
}

int Product::getQuantityInStock() {
    return quantityInStock;
}

////////////////////////////////////////////////////////////////////////////////END CLASS////////////////////////////////////////////////////////

void getProductInfo(Product &prdc) {
    string prn;
    double prp;
    int prq;
    cout << "Enter product name:\n";
    cin >> prn;
    cout << "Enter product price:\n";
    cin >> prp;
    cout << "Enter product quantity\n";
    cin >> prq;
    prdc.setProduct(prn, prp, prq);
}

void displayProductInfo(Product &prdc) {
    cout<<fixed<<setprecision(2);
    cout << "Product Name:\t" << prdc.getProductName() << "\nPrice:\t\tR " << prdc.getPrice() << "\nQuantity:\t" << prdc.getQuantityInStock() << endl;
}

// New function to compare the first character of two products
bool compareFirstLetter(Product &p1, Product &p2) {
    string name1 = p1.getProductName();
    string name2 = p2.getProductName();

    // Ensure both names are not empty before accessing index 0
    if (!name1.empty() && !name2.empty()) {
        return name1[0] == name2[0];
    }
    return false;
}

int main() {
    Product p1, p2;

    cout << "        Product 1       " << endl;
    getProductInfo(p1);

    cout << "\n      Product 2       " << endl;
    getProductInfo(p2);

    cout << "\n   Product Details    " << endl;
    displayProductInfo(p1);
    cout << endl;
    displayProductInfo(p2);

    cout << "\n  Comparison Result   " << endl;
    if (compareFirstLetter(p1, p2)) {
        cout << "Both product names start with the same character: '" << p1.getProductName()[0] << "'" << endl;
    } else {
        cout << "The product names start with different characters." << endl;
    }

    return 0;
}
