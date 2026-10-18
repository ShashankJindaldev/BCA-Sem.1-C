#include <stdio.h>
#include "set_ops.h"

// function to help format and print array boundaries
void print_set(const char* operation_name, int set[], int size) {
    printf("%s: { ", operation_name);
    for (int i = 0; i < size; i++) {
        printf("%d", set[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf(" }\n");
}

int main() {
    int size_A, size_B;

    printf("Enter element count for Set A: ");
    if (scanf("%d", &size_A) != 1 || size_A < 0) {
        printf("Invalid constraint. Terminating.\n");
        return 1;
    }
    
    int set_A[size_A];
    if (size_A > 0) {
        printf("Enter %d integer(s) for Set A:\n", size_A);
        for (int i = 0; i < size_A; i++) {
            scanf("%d", &set_A[i]);
        }
    }

    printf("Enter element count for Set B: ");
    if (scanf("%d", &size_B) != 1 || size_B < 0) {
        printf("Invalid constraint. Terminating.\n");
        return 1;
    }
    
    int set_B[size_B];
    if (size_B > 0) {
        printf("Enter %d integer(s) for Set B:\n", size_B);
        for (int i = 0; i < size_B; i++) {
            scanf("%d", &set_B[i]);
        }
    }

    int result_union[size_A + size_B];
    int result_intersection[size_A];
    int result_difference[size_A];

    int u_size = set_union(set_A, size_A, set_B, size_B, result_union);
    int i_size = set_intersection(set_A, size_A, set_B, size_B, result_intersection);
    int d_size = set_difference(set_A, size_A, set_B, size_B, result_difference);

    printf("\n--- Engine Output ---\n");
    print_set("A", set_A, size_A);
    print_set("B", set_B, size_B);
    print_set("Union (A U B)", result_union, u_size);
    print_set("Intersection (A n B)", result_intersection, i_size);
    print_set("Difference (A - B)", result_difference, d_size);

    return 0;
}