#include "binary_trees.h"

/**
* binary_tree_inorder- function
* @tree: pointer
* @func: print function
*
* Return: non
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
