#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with only one child;
 * @tree: pointer to the root node.
 * Return: the total count.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nodes = 0;

if (!tree)
return (0);

if (!tree->left && !tree->right)
return (0);

if (tree->left && tree->right)
return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

if ((tree->left && !tree->right) || (!tree->left && tree->right))
nodes++;

nodes += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

return (nodes);
}
