#pragma once
#include<iostream>
using namespace std;

// 命令实际接收者
class Document{
public:
    void setText(const string& text){
        m_text = text;
    }
    void save(){
        cout << m_text << " has been saved" << endl;               
    }
private:
    string m_text;
};