#include <CUnit/Basic.h>
#include <stdio.h>
#include "../include/placeholder.h"

void testPLACEHOLDER(void) {
    CU_ASSERT_EQUAL(2, my_sum(1, 1));
}

int main(int argc, char **argv) {
    CU_pSuite pSuite = NULL;

    if (CUE_SUCCESS != CU_initialize_registry()) {
        return CU_get_error();
    }

    pSuite = CU_add_suite("MySuit", NULL, NULL);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if (NULL == CU_add_test(pSuite, "test of placeholder()", testPLACEHOLDER)) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}