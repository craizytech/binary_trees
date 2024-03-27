#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node to the right of the parent
 * @parent: node which we are inserting a new node to the right
 * @value: this is the new value of the new node
 *
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	if (parent->right == NULL)
		new_node->right == NULL;
	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return new_node;
}
