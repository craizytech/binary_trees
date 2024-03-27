#include "binary_trees.h"

/**
 * binary_tree_delete - this function deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *parent = tree;

	if (parent == NULL)
		return;
	binary_tree_delete(parent->left);
	binary_tree_delete(parent->right);

	free(parent);
}
