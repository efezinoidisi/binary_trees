#include "binary_trees.h"

/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: size of tree or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	if (tree == NULL)
		return (0);
	size_l = tree->left ? binary_tree_size(tree->left) : 0;
	size_r = tree->right ? binary_tree_size(tree->right) : 0;

	return (size_l + size_r + 1);
}
