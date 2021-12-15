#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <iostream>

using namespace std;

class Database {
    private:
        string name;
        string type;
    
    public:
        Database(string name, string type);
        string getName();
        string getType();
        void setName(string name);
        void setType(string name);
        ~Database();
};

#endif