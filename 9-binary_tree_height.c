#include "binary_tree.h"

/**
 * binary_tree_height - height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: Always 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height = binary_tree_height(tree->left);
	size_t left_height = binary_tree_height(tree->right);

	return 1 + max(left_height, right_height);
}
