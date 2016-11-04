#ifndef GTUEXCEPTIONS_H
#define GTUEXCEPTIONS_H

#include <exception>
#include <iostream>

using namespace std;

class INSUFFICIENT_PARAMS_EXCEPTION : public exception{
public:
    virtual const char* what() const throw()
      {
        return "EXCEPTION -> INSUFFICIENT PARAMETER\n";
      }
};

class FILE_PATH_EXCEPTION : public exception{
public:
    virtual const char* what() const throw()
      {
        return "EXCEPTION -> FILE_PATH_EXCEPTION\n";
      }
};

class INVALID_COMMAND_EXCEPTION : public exception{
public:
    virtual const char* what() const throw()
      {
        return "EXCEPTION -> INVALID_COMMAND\n";
      }
};




#endif // GTUEXCEPTIONS_H
