#include "binary_trees.h"

/**
* calculate_height - function
* @tree: pointer
*
* Return: height
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

/**
* binary_tree_balance - function
* @tree: pointer
*
* Return: height
*/

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
