#include "../include/order.h"

void order_print(const Order *order) {
    printf("Total price: %f\n", order->total_price);
    printf("Will receive %d loyalty points\n", order->loyalty_points);
}