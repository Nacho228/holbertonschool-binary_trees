#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse a tree in post-order/
 * @tree: tree to be traversed.
 * @func: a function to be called for each node.
 * Return void:
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
