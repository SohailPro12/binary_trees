#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		int hl, hr;

		hl = binary_tree_height(tree->left);
		hr = binary_tree_height(tree->right);

		if (!tree->left && !tree->right)
			return (1);

		if (hl == hr && binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the binary tree. If tree is NULL, return 0.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hl = 0, hr = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		hl = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		hr = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}

	return ((hl > hr) ? hl : hr);
}
