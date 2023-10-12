#include "CarBuilder.h"
class Director {
public:
    Director(CarBuilder* builder) : m_builder(builder) {}
    void construct() {
        if (m_builder) {
            m_builder->setColor("Red");
            m_builder->setEngineType("V6");
            m_builder->setSeatCount(4);
        }
    }
private:
    CarBuilder* m_builder;
};