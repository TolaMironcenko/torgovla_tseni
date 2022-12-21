//
// Created by Анатолий Миронченко on 17.10.2021.
//

#ifndef TORGOVLATSENI_NEWCOST_H
#define TORGOVLATSENI_NEWCOST_H
#include <iostream>

namespace cost
{
    class newCost {
    private:
        long NewStartCost;
        long NewFinalCost;
        long profit;
    public:
        newCost();
        newCost(float NewStartCost);
        float setNewStartCost(float NewStartCost);
        float getNewStartCost() const;
        float getNewFinalCost() const;
        float getProfit() const;
        float FinalCostForBuy();
        float NewProfit();
        friend std::ostream& operator<< (std::ostream &out,const newCost &ts);
    };
}



#endif //TORGOVLATSENI_NEWCOST_H
