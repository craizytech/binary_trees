#include "binary_trees.h"

/**
 * binary_tree_insert_left - func inserts a node as the l-child of another node
 * @parent: the node we are inserting a left child into
 * @value: the value to insert into the newly created node
 *
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	if (parent->left == NULL)
		new_node->left = NULL;
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
