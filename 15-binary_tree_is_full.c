#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is a full binary tree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if True or 0 if false
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (!tree->left || !tree->right)
		return (0);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (left && right);
}
