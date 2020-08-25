#ifndef JOI_GRAD_SHOPPING_CART_C_SHOPPING_CART_H
#define JOI_GRAD_SHOPPING_CART_C_SHOPPING_CART_H

#include "./product.h"
#include "./customer.h"
#include "./order.h"
#include <stdlib.h>
#include <memory.h>

typedef struct ShoppingCart {
    Product *products;
    int product_size;
    int capacity;
    Customer customer;
} ShoppingCart;

ShoppingCart shopping_cart_init(Product *products, int size, Customer customer);

void shopping_cart_add_product(ShoppingCart *cart, Product product);

void shopping_cart_print(const ShoppingCart *cart);

Order shopping_cart_checkout(const ShoppingCart *cart);

#endif //JOI_GRAD_SHOPPING_CART_C_SHOPPING_CART_H
