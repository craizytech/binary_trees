#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through the binary tree (preorder)
 * @tree: this is the root node of the tree
 * @func: this is the function we pass each node to
 */

void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	const binary_tree_t *parent = tree;

	if (tree == NULL || func == NULL)
		return;

	func(parent->n);
	binary_tree_preorder(parent->left, func);
	binary_tree_preorder(parent->right, func);
}
