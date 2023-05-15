#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the total leaves of a BT.
 * @tree: pointer to the root node.
 * Return: the total leaves.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t left_leaves = 0, right_leaves = 0, leaf = 0;

if (!tree)
return (0);

if (!tree->left && !tree->right)
return (1);

left_leaves = binary_tree_leaves(tree->left);
right_leaves = binary_tree_leaves(tree->right);

leaf = left_leaves + right_leaves;

return (leaf);
}
