#pragma once
class IState;
class Context{
private:
    IState* m_state;
    bool m_isHover;
    bool m_isSelect;
public:
    Context(IState* state) : m_state(state){}
    // 提供状态转换接口给外部去调用
    void changeState(IState* state);

    // 将绘制的动作全部交给状态类去处理，不过也要把本类的指针传过去，因为状态类会更改当前类的成员变量。
    void paintTags();

    bool getHoverState();
    void setHoverState(bool hover);
    bool getSelectState();
    void setSelectState(bool select);
};