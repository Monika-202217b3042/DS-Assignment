#include <stdio.h>

int max_node = 15; // Maximum index in the array 'tree'
char tree[] = {'\0', 'D', 'A', 'F', 'E', 'B', 'R', 'T', 'G', 'Q', '\0', '\0', 'V', '\0', 'J', 'L'};

// Function to get the index of the right child of a node
int get_right_child(int index)
{
    if (tree[index] != '\0' && ((2 * index) + 1) <= max_node)
        return (2 * index) + 1;
    return -1; // No right child or out of bounds
}

// Function to get the index of the left child of a node
int get_left_child(int index)
{
    if (tree[index] != '\0' && (2 * index) <= max_node)
        return 2 * index;
    return -1; // No left child or out of bounds
}

// Preorder traversal function
void preorder(int index)
{
    if (index > 0 && tree[index] != '\0')
    {
        printf(" %c ", tree[index]); // Print the node
        preorder(get_left_child(index)); // Traverse left subtree
        preorder(get_right_child(index)); // Traverse right subtree
    }
}

// Postorder traversal function
void postorder(int index)
{
    if (index > 0 && tree[index] != '\0')
    {
        postorder(get_left_child(index)); // Traverse left subtree
        postorder(get_right_child(index)); // Traverse right subtree
        printf(" %c ", tree[index]); // Print the node
    }
}

// Inorder traversal function
void inorder(int index)
{
    if (index > 0 && tree[index] != '\0')
    {
        inorder(get_left_child(index)); // Traverse left subtree
        printf(" %c ", tree[index]); // Print the node
        inorder(get_right_child(index)); // Traverse right subtree
    }
}

// Function to print the tree structure
void print_tree()
{
    int i;
    printf("Tree Structure:\n");
    for (i = 1; i <= max_node; i++)
    {
        if (tree[i] != '\0')
        {
            printf(" %c ", tree[i]);
        }
        else
        {
            printf(" - ");
        }

        if (i == 1 || i == 3 || i == 7)
        {
            printf("\n");
        }
        else if (i == 15)
        {
            printf("\n");
        }
    }
}

int main()
{
    printf("Preorder:\n");
    preorder(1); // Start preorder traversal from root (index 1)
    printf("\nPostorder:\n");
    postorder(1); // Start postorder traversal from root (index 1)
    printf("\nInorder:\n");
    inorder(1); // Start inorder traversal from root (index 1)
    printf("\n");

    print_tree(); // Print the tree structure

    return 0;
}
 



