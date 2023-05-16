#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node.
 * Return: balance.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    int balance = 0, lh = 0, rh = 0;

    if (!tree)
        return (0);

    lh = binary_tree_balance(tree->left);
    rh = binary_tree_balance(tree->right);

    balance = lh - rh;

    return (balance);
}