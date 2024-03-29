#include "binary_trees.h"

/**
 * binary_tree_height - this binary tree measures the height of a binary tree
 * @tree: this is the root node of the tree
 *
 * Return: size of tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree)
	{
		r = tree->right ? binary_tree_height(tree->right) + 1 : 0;
		l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
		return (r > l ? r : l);
	}
	return (height);
}
