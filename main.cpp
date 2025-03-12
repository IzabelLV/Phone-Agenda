#include "agenda.h"


int main()
{
    phoneAgenda pt;
    int option;

    while(option != 4)
    {
        pt.screen();
        std::cin >> option;

        switch(option)
        {
            case 1:
            {
                pt.newContact();
                break;
            }
            case 2:
            {
                pt.searchByID();
                break;
            }
            case 3:
            {
                pt.searchByName();
                break;
            }
            default:
            std::cout << "Error!\n";
            break;
        }
    }

    return 0;
}