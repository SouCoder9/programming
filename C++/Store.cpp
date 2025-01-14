#include<bits/stdc++.h>
using namespace std;

struct Product
{
    int product_id;
    string product_name;
    string product_category;
    float product_price;
};

struct Order{
    int order_id;
    string customer_id;
    int product_id;
    int quantity;
    time_t order_date;
};

int main()
{
 vector<Product> products = {
    {1, "speakers", "electronics", 10.99},
    {2, "4gb ram ssd", "electronics", 19.99},
    {3, "ssd", "electronics", 8.99},
    {4, "party cap", "wearable", 15.99},
    {5, "t-shirt", "wearable", 12.99},
    {6, "watch", "wearable", 9.99},
    {7, "mouse", "electronics", 9.99},
    {8, "keyboard", "electronics", 14.99},
    {9, "mouse pad", "electronics", 5.99},
    {10, "laptop", "electronics", 999.99},
 };
 deque<string>recentCustomers
 }

    return 0;
}