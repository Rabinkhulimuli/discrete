#include <stdio.h>

int main() {
    int set1[100], set2[100], union_set[200];
    int n1, n2, i, j, k = 0, flag;

    // Read the number of elements in set1 and set2
    printf("Enter the number of elements in set1: ");
    scanf("%d", &n1);
    printf("Enter the number of elements in set2: ");
    scanf("%d", &n2);

    // Read the elements of set1 and set2
    printf("Enter the elements of set1: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &set1[i]);
    }
    printf("Enter the elements of set2: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &set2[i]);
    }

    // Union of set1 and set2
    for (i = 0; i < n1; i++) {
        union_set[k++] = set1[i];
    }
    for (i = 0; i < n2; i++) {
        flag = 0;
        for (j = 0; j < n1; j++) {
            if (set2[i] == set1[j]) {
                flag = 1;
                break;
            }
        }
        if (!flag) {
            union_set[k++] = set2[i];
        }
    }

    // Print the union set
    printf("Union set: {");
    for (i = 0; i < k; i++) {
        printf("%d, ", union_set[i]);
    }
    printf("}\n");

    return 0;
}


