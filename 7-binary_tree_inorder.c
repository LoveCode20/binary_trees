#include "binary_trees.h"

/**
 * binary_tree_inorder - a binary tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a function to call for each node
 * Return: NULL or nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->data);
	binary_tree_inorder(tree->right, func);
}