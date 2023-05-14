#include "binary_trees.h"
#include "3-binary_tree_delete.c"
/**
 * binary_tree_node - function that creates a new node in a BT.
 * @parent: is a pointer to the root node.
 * @value: an integer to put in the new node.
 * Return: the new node or NULL in failure.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new = malloc(sizeof(binary_tree_t));

if (!new)
{
    return(NULL);   
}


new->parent = parent;
new->n = value;
new->left = NULL;
new->right = NULL;

return (new);
}
