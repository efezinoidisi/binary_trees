#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if true otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left != right)
		return (0);

	return (binary_tree_is_full(tree));
}

/**
 * tree_height - calculate height of a binary tree
 * @tree: pointer to root node of tree
 *
 * Return: height of tree or 0 if NULL
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t subtree_l, subtree_r;

	if (tree == NULL)
		return (0);

	subtree_l = tree_height(tree->left);
	subtree_r = tree_height(tree->right);

	return ((subtree_l > subtree_r ? subtree_l : subtree_r) + 1);
}

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
