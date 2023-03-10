#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 *
 * Return: common ancestor or NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first->parent == second)
		return (first->parent);
	if (second->parent == first)
		return (second->parent);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	if (depth_first == depth_second && first->parent != second->parent)
		return (first->parent->parent);

	if (depth_first == depth_second)
		return (first->parent);

	return (binary_trees_ancestor(first->parent, second->parent));
}

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
