#include "binary_trees.h"

/**
* binary_tree_rotate_left - function
* @tree: pointer
*
* Return: pointer
*/

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root;

	if (!tree)
		return (NULL);

	root = tree->right;
	tree->right = root->left;
	root->parent = tree->parent;
	root->left = tree;
	return (root);
}
