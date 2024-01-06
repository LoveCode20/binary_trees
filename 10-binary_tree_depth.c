#include " binary_trees.h"

/**
 * binary_tree_depth - the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: Always 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL) {
		return (0);
	}
	size_t depth = 0;

	while (tree->parent != NULL) {
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
