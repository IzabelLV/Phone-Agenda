#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include <string>
#include <vector>


class phoneAgenda
{
    public:
    void screen();
    void newContact();
    void searchByID();
    void searchByName();
    const std::vector<std::string>& getNames() const;
    const std::vector<std::string>& getPhones() const;


    private:
    std::vector<std::string> names;
    std::vector<std::string> phones;
};



#endif