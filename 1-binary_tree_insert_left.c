#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as left child of another.
 * @parent: pointer to the parent node.
 * @value: value to pass to new_left->n.
 * Return: pointer to the new node, null otherwise.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_left = malloc(sizeof(binary_tree_t));

if (parent == NULL)
{
free(new_left);
return (NULL);
}

new_left->parent = parent;
new_left->n = value;
new_left->right = NULL;

if (parent->left != NULL)
{
new_left->left = parent->left;
new_left->left->parent = new_left;
}
else
{
new_left->left = NULL;
}
parent->left = new_left;
return (new_left);
}

