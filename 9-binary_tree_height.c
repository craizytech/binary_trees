#include "binary_trees.h"

/**
 * binary_tree_height - this binary tree measures the height of a binary tree
 * @tree: this is the root node of the tree
 *
 * Return: size of tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	const binary_tree_t *parent = tree;
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return 0;

	left_height = binary_tree_height(parent->left);
	right_height = binary_tree_height(parent->right);
	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
