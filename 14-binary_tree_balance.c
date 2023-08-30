#include "binary_trees.h"

/**
*
*
*
*
*
*/

int calculate_height(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
        l = calculate_height(tree->left);
        r = calculate_height(tree->right);
	return (l > r ? l + 1 : r + 1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = calculate_height(tree->left);
	r = calculate_height(tree->right);
	printf("%d \n", r);
	return (l - r);
}
