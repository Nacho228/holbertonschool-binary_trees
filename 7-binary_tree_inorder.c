#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through the tree in order traversal.
 * @tree: tree to be resorted.
 * @func: func to call for each node.
 * Return: void.
 * Time complexity: O(N).
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
