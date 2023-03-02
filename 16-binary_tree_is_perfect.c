#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if true otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, nodes, expected;

	if (tree == NULL)
		return (0);

	height = tree_height(tree);
	expected = get_power(height, 2) - 1;
	nodes = binary_tree_size(tree);
	printf("nodes: %d height: %d expected: %d\n", nodes, height, expected);

	if (expected != nodes)
		return (0);

	return (1);
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


/**
 * get_power - calculate the power of a number
 * @n: number to get power
 * @base: base number
 *
 * Return: power of number
 */

size_t get_power(size_t n, size_t base)
{
	size_t result = 1;

	while (n != 0)
	{
		result *= base;
		n--;
	}

	return (result);
}
