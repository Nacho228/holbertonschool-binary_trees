#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as right child of another.
 * @parent: pointer to the parent node.
 * @value: value to pass to new_right->n.
 * Return: pointer to the new node, null otherwise.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_right = malloc(sizeof(binary_tree_t));

if (parent == NULL)
{
free(new_right);
return (NULL);
}

new_right->parent = parent;
new_right->n = value;
new_right->left = NULL;

if (parent->right != NULL)
{
new_right->right = parent->right;
new_right->right->parent = new_right;
}
else
{
new_right->right = NULL;
}
parent->right = new_right;
return (new_right);
}

