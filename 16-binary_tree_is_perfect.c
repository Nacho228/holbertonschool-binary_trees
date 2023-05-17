#include "binary_trees.h"
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
/**
 *binary_tree_is_perfect - function that checks if a binary tree is perfect
 *@tree: a pointer to the given node
 *Return: 1 if is perfect or 0 is is not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;
	int full;
	int right_leaves, left_leaves;

	if (tree == NULL)
		return (0);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	full = binary_tree_is_full(tree);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (full == 1 && left_leaves == right_leaves)
	{
		if (left != right)
			return (0);

		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (tree->left && tree->right)
			return
			(binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->left));
	}
	return (0);
}
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root of a tree
 * Return: 1 if true 0 on failure
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	if ((tree->left) && (tree->right))
	{
		return
		(binary_tree_is_full(tree->left) &&  binary_tree_is_full(tree->right));
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root of a tree
 * Return: void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (0);
	}
	else
	{
		int ld = binary_tree_height(tree->left);
		int rd = binary_tree_height(tree->right);

		if (ld > rd)
		{
			return (ld + 1);
		}
		else
		{
			return (rd + 1);
		}
	}
}
/**
 * binary_tree_leaves- counts the leaves in a binary tree
 * @tree: pointer to the root of a tree
 * Return: void
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}

	if (tree->left == 0 && tree->right == 0)
	{
		return (1);
	}
	else
	{
		return  (binary_tree_leaves(tree->left) +  binary_tree_leaves(tree->right));
	}
}
