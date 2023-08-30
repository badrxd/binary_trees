#include "binary_trees.h"

/**
* binary_tree_preorder- function
* @tree: pointer
* @func: print function
*
* Return: 0 or 1
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
