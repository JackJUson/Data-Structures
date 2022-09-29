// Binary Search Tree ADT Tester ... 

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "BSTree.h"

int main(int argc, char *argv[]) {
    Tree t = TreeCreate(4);
    t = TreeInsert(t, 2);
    t = TreeInsert(t, 6);
    t = TreeInsert(t, 5);
    t = TreeInsert(t, 1);
    t = TreeInsert(t, 7);
    t = TreeInsert(t, 10);
    t = TreeInsert(t, 9);
    t = TreeInsert(t, 8);

    /* List style print */
    showTree(t);

    /* Inorder style print */
    showTreeIn(t, 0);

    printf("Number of nodes in Tree: %d\n", TreeNumNodes(t));

    if (TreeSearch(t, 3)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    if (TreeSearch(t, 10)) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    TreeFree(t);
    return 0;
}