//
// Created by Анатолий Миронченко on 16.10.2021.
//

#ifndef TORGOVLATSENI_TSENI_H
#define TORGOVLATSENI_TSENI_H
#include <iostream>

namespace cost
{
    class Tseni {
    private:
        long startCost;//изначальная стоимость
        long costOfBuy;//стоимость продажи после обслуживания
        long costOfService;//стоимость обслуживания
    public:
        Tseni();//все компоненты равны 0
        Tseni(int cost);//только изначальная стоимость
        float costOfPowerAndFuel();
        float buyCost() ;
        float getStartCost() const;
        float getCostOfBuy();
        float getCostOfService();
        void SetStartCost(int startCost);
        //void print();
        friend std::ostream& operator<< (std::ostream &out,const Tseni &ts);
    };
}
#endif //TORGOVLATSENI_TSENI_H
