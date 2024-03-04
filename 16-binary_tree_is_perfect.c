#include "binary_trees.h"

/**
 * _height - Helper function to calculate the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 */
static size_t _height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + _height(tree->left) : 1;
	right_height = tree->right ? 1 + _height(tree->right) : 1;
	return ((left_height > right_height) ? left_height : right_height);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = _height(tree);
	if (height == 0)
		return (1);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right) &&
			_height(tree->left) == _height(tree->right) &&
			_height(tree->left) == height - 1);
}

