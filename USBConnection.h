#ifndef USB_H
#define USB_H

#include <stack>

class USBConnection
{
private:
    USBConnection()
    {
        ID = USBConnection::IDs.top();
        USBConnection::IDs.pop();
    }
public:
    ~USBConnection()
    {
        USBConnection::IDs.push(this->get_id());
    }

    static USBConnection* CreateUsbConnection()
    {
        if (USBConnection::IDs.empty())
        {
            return nullptr;
        }

        return new USBConnection;
    }
    int get_id() const
    {
        return ID;
    }
private:
    int ID = 0;
    static std::stack<int> IDs;
};
std::stack<int> USBConnection::IDs({3, 2, 1});

#endif