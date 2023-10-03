#pragma once

#include <string>

class Invoice
{
public:
    Invoice(std::string invoiceId);
    void addServiceCost(int costDollars);
    int getDollarsOwed();
    std::string getInvoiceID();
private:
    std::string invoiceId = 0;
    int dollarsOwed = 0;
};