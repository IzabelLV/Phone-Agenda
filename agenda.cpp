#include "agenda.h"



void phoneAgenda::screen()
{
    std::cout << "\t\t======= Phone Agenda =======\n\n"
                 "[1] New contact\n"
                 "[2] Search by ID\n"
                 "[3] Search by name\n"
                 "[4] Quit\n"
                 "Choose a number to execute an option:\n";
}


const std::vector<std::string>& phoneAgenda::getNames() const
{
    return names;
}

const std::vector<std::string>& phoneAgenda::getPhones() const
{
    return phones;
}


void phoneAgenda::newContact()
{
    std::string name;
    std::string phone;
    
    std::cout << "Enter a name for the contact: \n";
    std::cin >> name;
    names.push_back(name);
    
    std::cout << "Enter a phone for the contact: \n";
    std::cin >> phone;
    phones.push_back(phone);

    std::cout << "The ID for this contact will be " << names.size() << "\n";
}

void phoneAgenda::searchByID()
{
    int value;
    std::cout << "Enter the ID of the contact: \n";
    std::cin >> value;

    if (value >= names.size())
    {
        std::cout << "This ID does not exist\n";
    }

    std::cout << "Information for contact with ID " << value << "\n";
    std::cout << "Name: " << names[value] << "\n";
    std::cout << "Phone: " << phones[value] << "\n";
}

void phoneAgenda::searchByName()
{
    bool isFound = false;
    std::string name;
    std::cout << "Enter name: \n";
    std::cin >> name;

    for (int i = 0; i < names.size(); ++i)
    {
        if (names[i] == name)
        {
            std::cout << "Name: " << names[i] << "\n";
            std::cout << "Phone: " << phones[i] << "\n";
            isFound = true;
        }
    }

    if(!isFound)
    {
        std::cout << "No contact was found by this name\n";
    }
}