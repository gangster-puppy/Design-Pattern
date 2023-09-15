#include<iostream>
#include<map>
#include<stack>
#include "ICommand.h"
using namespace std;

class CommandHistory{
public:
    static CommandHistory* GetInstance(){
        static CommandHistory cmdHis;
        return &cmdHis;
    }
    void push(ICommand* cmd){m_cmdHisVec.push(cmd);}
    void pop(){m_cmdHisVec.pop();}
    size_t size(){return m_cmdHisVec.size();}
private:
    stack<ICommand*> m_cmdHisVec;
};

#define CMD_HIS CommandHistory::GetInstance()

class ICommandSender{
public:
    ICommandSender(){}
    ~ICommandSender(){}
    void setCommand(ICommand* cmd){m_cmd = cmd;}
    ICommand* getCommand(){return m_cmd;}
protected:
    ICommand* m_cmd;
};

class Button : public ICommandSender{
public:
    void click(){
        m_cmd->execute("Sent by Button");
        CMD_HIS->push(m_cmd);
        cout << "Count of Button history command is " << CMD_HIS->size() << endl;
    }
};

class Shortcut : public ICommandSender{
public:
    void setCommand(const string& key, ICommand* cmd){
        m_cmd = cmd;
        m_keyCmdMap[key] = cmd;
    }
    void press(){
        m_cmd->execute("Sent by Shortcut");
        CMD_HIS->push(m_cmd);
        cout << "Count of Shortcut history command is " << CMD_HIS->size() << endl;
    }
private:
    map<string, ICommand*> m_keyCmdMap;
};