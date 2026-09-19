/* Date : 18.09.2026*/

#include <bits/stdc++.h>
using namespace std;
int maxProfit(int prices[], int size){
    int bestBuy = prices[0];
    int maxProfit = 0;
    for (int i = 0; i<size; i++){
        if(prices[i] > bestBuy ){
            maxProfit = max (maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min (bestBuy, prices[i]);
    }
    return maxProfit;
}
int main(){
    int size = 6;
    int prices[size] = {1,3,5,2,6,7};
    cout<< "Maximum Profit: ";
    cout<< maxProfit(prices, size);
    return 0;
}