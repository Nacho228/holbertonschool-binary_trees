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
    if(new_left == NULL || parent == NULL)
    {
        return(NULL);
    }
    else
    {
        new_left->n = value;
        if(parent->left != NULL)
        {
            new_left->left = parent->left;
            parent->left = new_left;
        }
        new_left->right = NULL;
    }
return(new_left);
}
