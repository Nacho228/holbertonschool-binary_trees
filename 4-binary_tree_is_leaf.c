#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is leaf.
 * @node: node to check.
 * Return: 1 if success, 0 otherwise.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (!node->left && !node->right)
return (1);

else
return (0);

return (1);
}
