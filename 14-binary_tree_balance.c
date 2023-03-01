#include "binary_trees.h"

/**
 * binary_tree_balance - calculates the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Description: the balance factor is the difference between the heights of the
 * left subtree and right subtree
 *
 * Return: balance factor or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = tree_height(tree->left);
	height_r = tree_height(tree->right);

	return (height_l - height_r);
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
