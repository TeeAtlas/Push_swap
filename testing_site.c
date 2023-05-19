#include <stdio.h>
#include <stdlib.h>
#include "push_swap.h"

// Structure for the linked list node
typedef struct ListNode {
    int val;
    int index;
    struct ListNode* next;
} t_list;

// Function to create a new node with given value and index
t_list* create_node(int val, int index) {
    t_list* node = (t_list*)malloc(sizeof(t_list));
    node->val = val;
    node->index = index;
    node->next = NULL;
    return node;
}

// Function to insert a node into the sorted linked list based on index
t_list* insert_node(t_list* head, t_list* node) {
    if (head == NULL || node->index < head->index) {
        // Insert at the beginning if head is NULL or index is smaller
        node->next = head;
        return node;
    }
    t_list* current = head;
    while (current->next != NULL && node->index > current->next->index) {
        // Traverse to find the correct position to insert the node
        current = current->next;
    }
    node->next = current->next;
    current->next = node;
    return head;
}

// Function to sort the linked list by index in ascending order
t_list* sort_by_index(t_list* head) {
    t_list* sortedList = NULL;
    t_list* current = head;
    while (current != NULL) {
        t_list* nextNode = current->next;
        sortedList = insert_node(sortedList, current);
        current = nextNode;
    }
    return sortedList;
}

// Function to print the nodes in the linked list
void print_nodes(t_list* head) {
    t_list* current = head;
    while (current != NULL) {
        printf("Value: %d, Index: %d\n", current->val, current->index);
        current = current->next;
    }
}

int main() {
    // Create the linked list manually with five unsorted nodes
    t_list* node1 = create_node(9, 3);
    t_list* node2 = create_node(3, 0);
    t_list* node3 = create_node(7, 4);
    t_list* node4 = create_node(1, 2);
    t_list* node5 = create_node(5, 1);

    // Connect the nodes to form the original unsorted linked list
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    // Sort the nodes by index in ascending order
    t_list* sortedList = sort_by_index(node1);

    // Print the sorted nodes
    printf("Sorted Nodes:\n");
    print_nodes(sortedList);

    // Free the memory
    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);

    return 0;
}
