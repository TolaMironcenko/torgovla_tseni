//
// Created by Анатолий Миронченко on 17.10.2021.
//

#include "newCost.h"

namespace cost
{
    newCost::newCost()
    {
        NewStartCost = 0;
        NewFinalCost = 0;
    }

    newCost::newCost(float NewStartCost)
    {
        this->NewStartCost = NewStartCost;
        NewFinalCost = 0;
    }

    float newCost::setNewStartCost(float NewStartCost)
    {
        this->NewStartCost = NewStartCost;
    }

    float newCost::getNewStartCost() const
    {
        return NewStartCost;
    }

    float newCost::getNewFinalCost() const
    {
        return NewFinalCost;
    }

    float newCost::FinalCostForBuy()
    {
        NewFinalCost = (NewStartCost*2)+NewProfit();
        profit = NewProfit();
    }

    float newCost::getProfit() const
    {
        return profit;
    }

    float newCost::NewProfit()
    {
        return profit = NewStartCost+(NewStartCost/100*20);
    }

    std::ostream &operator << (std::ostream &out, const newCost &ts)
    {
        return out<<"цена закупки____"
        <<ts.NewStartCost<<"p"
        <<"\nцена продажи____"
        <<ts.NewFinalCost<<"p"
        <<"\nприбыль_________"<<ts.profit<<"p\n";
    }
}