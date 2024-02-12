#include <stdio.h>

int findClearingPrice(int INPUT_A[], int INPUT_B[])
{ 
    int price_range = 100;
    int clearingPrice = 0;
    int input_size=10;
    int bids_quantity[5];
    int bids_price[5];
    int asks_quantity[5];
    int asks_price[5];
    for (int i = 0; i < 5; i++)
    {
        bids_quantity[i] = INPUT_A[2*i];
        bids_price[i] = INPUT_A[2*i + 1];
        asks_quantity[i] = INPUT_B[2*i];
        asks_price[i] = INPUT_B[2*i + 1];
    }

    int diff = 0;
    int min_diff = 10000;
    // Sort bids and asks in descending order
    for (int i = 0; i < price_range; i++)
    {
        int ask_sum = 0;
        int bid_sum = 0;
        for (int j = 0; j < 5; ++j)
        {
            if (bids_price[j] >= i)
            {
                bid_sum =bid_sum+bids_quantity[j];
            }
           /* if (asks_price[j] <= i)
            {
                ask_sum =bid_sum + asks_quantity[j];
            }*/
        }
        diff = ask_sum - bid_sum;
        if (diff < min_diff)
        {
            min_diff = diff;
            clearingPrice = i;
        }
    }
    return clearingPrice;
}

int mpc_main()
{

    int INPUT_A_x[10];
    int INPUT_B_x[10];

    return findClearingPrice(INPUT_A_x, INPUT_B_x);
}
