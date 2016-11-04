#ifndef ICommand_H
#define ICommand_H

#include <QApplication>

class ICommand{
public :
    inline ICommand(QStringList params){
        mParams=params;
    }
    virtual void execute()=0;
    virtual ~ICommand(){}
private:
    QStringList mParams;
};




#endif // ICommand_H