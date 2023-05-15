#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a tree.
 * @tree: the tree to be measured.
 * Return: the height of the binary tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_subtree_height = 0, right_subtree_height = 0, height;

if (!tree)
return (0);

if (!tree->left && !tree->right)
return (0);

else
{
left_subtree_height = binary_tree_height(tree->left);
right_subtree_height = binary_tree_height(tree->right);

if (left_subtree_height <= right_subtree_height)
{
height = right_subtree_height + 1;
}
else
height = left_subtree_height + 1;
return (height);
}
}

