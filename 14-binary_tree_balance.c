#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance
 *
 * Return: Balance factor of the binary tree. If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		int hl = binary_tree_height(tree->left);
		int hr = binary_tree_height(tree->right);

		return (hl - hr);
	}
	return (0);
}
