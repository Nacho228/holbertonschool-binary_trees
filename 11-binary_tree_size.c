#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: the tree to be measured.
 * Return: the size of the tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size_left = 0, size_right = 0, size;

if (!tree)
return (0);

size_left = binary_tree_size(tree->left);
size_right = binary_tree_size(tree->right);

size = size_left + 1 + size_right;

return (size);
}
