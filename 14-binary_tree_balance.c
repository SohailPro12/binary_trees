#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
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
