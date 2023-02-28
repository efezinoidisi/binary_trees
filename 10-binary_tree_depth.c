#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth of node or 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;
	binary_tree_t *parent;

	if (tree == NULL)
		return (0);

	depth = 0;
	parent = tree->parent;
	while (parent)
	{
		depth++;
		parent = parent->parent;
	}
	return (depth);
}
