#include "binary_trees.h"

/**
 * binary_tree_node -  this function creates a binary tree node
 * @parent: this is the root node of the binary tree
 * @value: this is the value to be inserted into the node created
 *
 * Return: the address to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent == NULL)
		new_node->parent = NULL;
	else
		new_node->parent = parent;
	return (new_node);
}
