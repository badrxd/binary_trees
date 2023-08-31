#include "binary_trees.h"

/**
* binary_tree_rotate_right - function
* @tree: pointer
*
* Return: root
*/

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root;

	if (!tree)
		return (NULL);

	root = tree->left;
	tree->left = root->right;
	if (root->right)
		root->right->parent = tree;
	root->right = tree;
	root->parent = tree->parent;
	tree->parent = root;
	return (root);
}
