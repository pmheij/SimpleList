#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[])
{
    if (arg_count > 1)
    {
        List simpleList;
        simpleList.name = string(args[1]);
        simpleList.print_menu();
    }
    else
    {
        cout << "Username not provided  . . . exiting the program\n";
    }

        Database data;
        data.write();

    return 0;
}