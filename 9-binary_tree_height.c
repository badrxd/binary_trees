#include "binary_trees.h"

/**
* binary_tree_height - function
* @tree: tree
* Return: yes
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
	{
		return (0);
	}
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	if (tree->left || tree->right)
		if (l > r)
			return (l + 1);
		else
			return (r + 1);
	else
		return (0);
}
