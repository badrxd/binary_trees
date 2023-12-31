#include "binary_trees.h"

/**
* binary_tree_size - function
* @tree: tree
* Return: yes
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);

	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	return (1 + l + r);
}
