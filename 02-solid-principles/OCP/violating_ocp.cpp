#include <iostream>
#include <string>
using namespace std;

// Base class for payment processing
class PaymentProcessor {
public:

    void processPayment(string paymentType, double amount) {

        if (paymentType == "CreditCard") {
            cout << "Processing Credit Card Payment: $" << amount << endl;
        }

        else if (paymentType == "PayPal") {
            cout << "Processing PayPal Payment: $"
                 << amount << endl;
        }

    }
};

int main() {
    PaymentProcessor payment;
    payment.processPayment("CreditCard", 1000);
    payment.processPayment("PayPal", 2000);
    return 0;
}




// Violating OCP: suppose future mein req ati hai ki google pay bhi support karna hai toh hume existing PaymentProcessor class mein changes karne padenge

/* 

else if (paymentType == "GooglePay") {
    cout << "Processing Google Pay Payment: $"
         << amount << endl;
}
         
*/