#include "../include/product.h"
#include "../include/customer.h"
#include "../include/shopping_cart.h"

int main(int argc, char **argv) {
    Product product1 = {10.0, "DIS_10_PRODUCT1", "product 1"};
    Product product2 = {20.0, "DIS_10_PRODUCT2", "product 2"};

    Product products[] = {product1, product2};

    Customer customer = {"A Customer"};

    ShoppingCart shopping_cart = shopping_cart_init(products, sizeof(products) / sizeof(Product), customer);

    Product product3 = {30.0, "DIS_10_PRODUCT3", "product 3"};
    shopping_cart_add_product(&shopping_cart, product3);
    shopping_cart_print(&shopping_cart);

    Order order = shopping_cart_checkout(&shopping_cart);
    order_print(&order);

    return 0;
}