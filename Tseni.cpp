//
// Created by Анатолий Миронченко on 16.10.2021.
//
#include <iostream>
#include "Tseni.h"
namespace cost
{
    Tseni::Tseni()
    {
        startCost = 0;
        costOfBuy = 0;
        costOfService = 0;
    }

    Tseni::Tseni(int cost)
    {
        startCost = cost;
        costOfBuy = buyCost();
        costOfService = costOfPowerAndFuel();
    }

    float Tseni::costOfPowerAndFuel()
    {//возвращает 20% от изначальной стоимости
        costOfService = startCost/100*20;
        return costOfService;
    }

    float Tseni::buyCost()
    {//возвращает 80% от изначальной стоимости
        costOfBuy =  startCost/100*80;
    }

    float Tseni::getStartCost() const
    {
        return startCost;
    }

    std::ostream &operator << (std::ostream &out, const Tseni &ts)
    {
        return out<<"начальная цена покупки_____\t"<<ts.startCost<<"p\t"<<"\nцена обслуживания__________\t"
        <<ts.costOfService<<"p"<<"\nцена продажи_______________\t"<<ts.costOfBuy<<"p\t\n";
    }

    void Tseni::SetStartCost(int startCost)
    {
        this->startCost = startCost;
    }

    float Tseni::getCostOfBuy()
    {
        return costOfBuy;
    }

    float Tseni::getCostOfService()
    {
        return costOfService;
    }

    /*void Tseni::print()
    {
        costOfPowerAndFuel();
        buyCost();
        std::cout<<startCost<<"\n"<< costOfService<<"\n"<<costOfBuy<<std::endl;
    }*/
}