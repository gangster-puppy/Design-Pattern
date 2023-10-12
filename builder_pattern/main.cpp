#include "CarBuilder.h"
#include "Director.h"

int main(){
    // 如果不使用主管角色，那么就需要构建者一个个去手动构建
    // CarBuilder builder();  
    // builder.setColor("Red");  
    // builder.setEngineType("V6");  
    // builder.setSeatCount(4);  
    
    CarBuilder builder;
    // 以下为使用主管去安排构建步骤，每一种Director可指导一套流程的构建，
    // 灵活的构造了不同属性的Car，不需要再写一堆Car构造函数的重载了，也避免了一堆函数传参！！！！
    // Car的原生构造函数已经不用了，取而代之的是通过CarBuilder去获取Car实例****************
    Director director(&builder);
    director.construct();

    std::unique_ptr<Car> car = builder.getCar();  
    std::cout << *car << std::endl;
    return 0;
}