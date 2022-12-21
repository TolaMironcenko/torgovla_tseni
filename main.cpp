#include <iostream>
#include <fstream>
#include "Tseni.h"
#include "newCost.h"

using namespace std;
using namespace cost;

int main() {
    int out;
    do {
        cout<<"что будете продавать?\n"
              "1 - новая продукция\n"
              "2 - б/у продукция\n";
        int choice;
        cin>>choice;
        if (choice == 1)
        {
            cout << "введите стоимость закупки :\n";
            int costZ;
            cin >> costZ;
            newCost NewCostZ(costZ);
            NewCostZ.FinalCostForBuy();
            cout << NewCostZ;
            cout<<"\t\t\tчтобы продолжить введите любое значение\n"
                  "\t\t\t\t\t\t\tчтобы выйти введите 0\n";
            ofstream fout("output.txt");
            fout<<NewCostZ<<endl;
            fout.close();
            cin>>out;

        }else if (choice == 2)
        {
            cout<<"введите изначальную стоимость :\n";
            int startCost;
            cin>>startCost;
            Tseni cost(startCost);
            cost.costOfPowerAndFuel();
            cost.buyCost();
            cout<<"подробная информация:\n"<<cost;
            cout<<"\t\t\tчтобы продолжить введите любое значение\n"
                  "\t\t\t\tчтобы выйти введите 0\n";
            ofstream fout("output.txt");
            fout<<"подробная информация:\n"<<cost<<endl;
            fout.close();
            cin>>out;
        }
    } while (out!= 0);
    return 0;
}
