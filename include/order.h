#ifndef JOI_GRAD_SHOPPING_CART_C_ORDER_H
#define JOI_GRAD_SHOPPING_CART_C_ORDER_H

#include <stdio.h>

typedef struct Order {
    double total_price;
    int loyalty_points;
} Order;

void order_print(const Order *order);

#endif //JOI_GRAD_SHOPPING_CART_C_ORDER_H
