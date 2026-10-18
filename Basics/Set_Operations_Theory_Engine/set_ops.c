#include "set_ops.h"

int set_union(int set_A[], int size_A, int set_B[], int size_B, int result_set[]) {
    int result_size = 0;

    for (int i = 0; i < size_A; i++) {
        result_set[result_size] = set_A[i];
        result_size++;
    }

    for (int i = 0; i < size_B; i++) {
        int is_duplicate = 0;
        
        for (int j = 0; j < result_size; j++) {
            if (set_B[i] == result_set[j]) {
                is_duplicate = 1;
                break;
            }
        }

        if (!is_duplicate) {
            result_set[result_size] = set_B[i];
            result_size++;
        }
    }

    return result_size;
}

int set_intersection(int set_A[], int size_A, int set_B[], int size_B, int result_set[]) {
    int result_size = 0;

    for (int i = 0; i < size_A; i++) {
        for (int j = 0; j < size_B; j++) {
            if (set_A[i] == set_B[j]) {
                result_set[result_size] = set_A[i];
                result_size++;
                break;
            }
        }
    }

    return result_size;
}

int set_difference(int set_A[], int size_A, int set_B[], int size_B, int result_set[]) {
    int result_size = 0;

    for (int i = 0; i < size_A; i++) {
        int found_in_B = 0;
        
        for (int j = 0; j < size_B; j++) {
            if (set_A[i] == set_B[j]) {
                found_in_B = 1;
                break;
            }
        }
        
        if (!found_in_B) {
            result_set[result_size] = set_A[i];
            result_size++;
        }
    }

    return result_size;
}