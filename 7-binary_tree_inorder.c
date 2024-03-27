#include "binary_trees.h"

/**
 * binary_tree_inorder - func goes through the binary tree (inorder)
 * @tree: this is the root node of the binary tree
 * @func: this is the function we pass a value to
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *parent = tree;

	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(parent->left, func);
	func(parent->n);
	binary_tree_inorder(parent->right, func);
}
