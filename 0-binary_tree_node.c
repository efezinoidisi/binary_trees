#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree
 * @parent: pointer to parent node of the node to create
 * @value: value that the node should hold
 *
 * Return: pointer to the new node or NULL if it fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	return (node);
}
