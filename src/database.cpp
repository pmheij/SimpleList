#include "include/database.h"

void Database::write(){
    ofstream db;
    db.open("db/lists.sl");

    if (db.is_open()){
        db << "1\n2\n3\n4\n5\n";
    }

    else
    {
        cout << "Cannot open file for writing\n";
    }
    
    db.close();
}