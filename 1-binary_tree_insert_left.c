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
    binary_tree_t *old_left = malloc(sizeof(binary_tree_t));
    
    if(parent == NULL || new_left == NULL)
    {
        free(new_left);
        free(old_left);
        return(NULL);
    }
        
        new_left->parent = parent;
        new_left->n = value;
        new_left->right = NULL;

        if(parent->left != NULL)
        {
            old_left->n = parent->left->n;
            parent->left = new_left;
            new_left->left = old_left;
            old_left->parent = new_left;
        }
        else
        {
            parent->left = new_left;
            new_left->left = NULL;
        }

return(new_left);
}
