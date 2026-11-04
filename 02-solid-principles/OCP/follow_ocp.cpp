#include <iostream>
#include <string>
using namespace std;

// Base class (Interface)
class PaymentProcessor {
public:

    virtual void processPayment(double amount) = 0;
    virtual ~PaymentProcessor() {}
};

// Credit Card Payment
class CreditCardPaymentProcessor : public PaymentProcessor {
public:

    void processPayment(double amount) override {
        cout << "Processing Credit Card Payment: $"
             << amount << endl;
    }
};

// PayPal Payment
class PayPalPaymentProcessor : public PaymentProcessor {
public:
     
    void processPayment(double amount) override {
        cout << "Processing PayPal Payment: $"
             << amount << endl;
    }
};

// Main funtion
int main() {

    CreditCardPaymentProcessor creditCard;
    PayPalPaymentProcessor paypal;

    PaymentProcessor* payment;

    payment = &creditCard;
    payment->processPayment(1000);

    payment = &paypal;
    payment->processPayment(2000);

    return 0;

};