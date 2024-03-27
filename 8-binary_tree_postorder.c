#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through the BT using post-order traversal
 * @tree: root node of the tree
 * @func: this is the function we passs the values of the node to
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *parent = tree;

	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(parent->left, func);
	binary_tree_postorder(parent->right, func);
	func(parent->n);
}
