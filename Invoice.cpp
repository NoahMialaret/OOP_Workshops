#include "Invoice.h"

Invoice::Invoice(std::string invoiceId)
    :
    invoiceId(invoiceId)
{}

void Invoice::addServiceCost(int costDollars)
{
    if (costDollars > 0)
    {
        dollarsOwed += costDollars;
    }
}

int Invoice::getDollarsOwed()
{
    return dollarsOwed;
}

std::string Invoice::getInvoiceID()
{
    return invoiceId;
}
