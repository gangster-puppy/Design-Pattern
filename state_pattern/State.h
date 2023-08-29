#pragma once
class Context;
class IState{
public:
    virtual ~IState() {}
    virtual void doPaint(Context* ctx) = 0;
};

class NomorlState : public IState{
public:
    static NomorlState* GetInstance();
    virtual void doPaint(Context* ctx) override;
    ~NomorlState() = default;

    // 拷贝构造/赋值、移动构造/赋值 函数全部禁止调用
    NomorlState(const NomorlState &) = delete;
    NomorlState(NomorlState &&) = delete;
    NomorlState& operator=(const NomorlState&) = delete;
    NomorlState& operator=(NomorlState &&) = delete;
private:
    // 构造函数为private
    NomorlState(){}
};

class HoverUnselectState : public IState{
public:
    static HoverUnselectState* GetInstance();
    virtual void doPaint(Context* ctx) override;
    ~HoverUnselectState() = default;

    HoverUnselectState(const HoverUnselectState &) = delete;
    HoverUnselectState(HoverUnselectState &&) = delete;
    HoverUnselectState& operator=(const HoverUnselectState&) = delete;
    HoverUnselectState& operator=(HoverUnselectState &&) = delete;
private:
    HoverUnselectState(){}
};

class HoverSelectState : public IState{
public:
    static HoverSelectState* GetInstance();
    virtual void doPaint(Context* ctx) override;
    ~HoverSelectState() = default;

    HoverSelectState(const HoverSelectState &) = delete;
    HoverSelectState(HoverSelectState &&) = delete;
    HoverSelectState& operator=(const HoverSelectState&) = delete;
    HoverSelectState& operator=(HoverSelectState &&) = delete;
private:
    HoverSelectState(){}
};

class UnhoverSelectState : public IState{
public:
    static UnhoverSelectState* GetInstance();
    virtual void doPaint(Context* ctx) override;
    ~UnhoverSelectState() = default;

    UnhoverSelectState(const UnhoverSelectState &) = delete;
    UnhoverSelectState(UnhoverSelectState &&) = delete;
    UnhoverSelectState& operator=(const UnhoverSelectState&) = delete;
    UnhoverSelectState& operator=(UnhoverSelectState &&) = delete;
private:
    UnhoverSelectState(){}
};