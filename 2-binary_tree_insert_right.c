#include "binary_trees.h"

/**
 *binary_tree_insert_right -  function that inserts a node
 * as the left-child of another node
 *@parent: Is a pointer to the node to insert the left-child in
 *@value: Is the value to store in the new node
 *Return: A pointer ti the create node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *root = NULL;

	if (!parent)
		return (NULL);
	root = binary_tree_node(parent, value);
	if (!root)
	{
		return (NULL);
	}
	root->parent = parent;
	root->n = value;
	if (parent->right)
	{
		root->right = parent->right;
		parent->right->parent = root;
	}
	parent->right = root;

	return (parent->right);
}