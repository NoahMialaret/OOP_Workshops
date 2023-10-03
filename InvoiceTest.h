#pragma once

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        testGetInvoiceId();
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(-10);
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            invoice.addServiceCost(5);
            if (invoice.getDollarsOwed() != 15) {
                std::cout << "Test 4 failed!" << std::endl;
            }
        }
    }

    void testGetInvoiceId()
    {
        {
            Invoice invoice("ABCD");
            if (invoice.getInvoiceID() != "ABCD") {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }
        {
            Invoice invoice("10023");
            if (invoice.getInvoiceID() != "10023") {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
    }
};