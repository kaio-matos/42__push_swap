/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:06:58 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/02/07 19:58:38 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <linked_list.h>
# include <libft.h>

# define ERROR "Error\n"
# define DECIMAL_LENGTH 10

typedef enum e_bool
{
	FALSE,
	TRUE
}	t_bool;

/******************************************************************************\
* STACK																		   *
\******************************************************************************/

typedef struct s_stack
{
	size_t	size;
	t_dlist	*head;
	t_dlist	*foot;
}	t_stack;

/**
 * Allocates (with malloc(3)) and returns a new stack.
 *
 * @param content value for the new element of the stack
 * @return A stack with the passed content
 */
t_stack	*ft_stknew(void *content);

/**
 * Allocates (with malloc(3)) and initiate the stack passed pointer with NULL.
 *
 * @param stack The stack to be initiated
 */
void	ft_stkinit(t_stack **stack);

/**
 * Adds a new item to the top of the stack,
 * replacing the current head to the new pushed element.
 * If there is no head, the new element turns into the head.
 *
 * @param stack The stack to be modified
 * @param content value for the new element of the stack
 * @return A stack with the passed content
 */
t_stack	*ft_stkpush(t_stack *stack, void *content);

/**
 * Removes the first item of the stack,
 * decrementing the stack size and moving your head
 *
 * @param stack The stack to be modified
 * @param del The function to delete the content of the stack
 */
void	ft_stkpop(t_stack *stack, void (*del)(void *));

/**
 * Delete and frees the entire stack
 *
 * @param stack The stack to be deleted
 * @param del The function to delete the content of the stack
 */
void	ft_stkclear(t_stack *stack, void (*del)(void *));

/**
 * Get the element that is in the top of the stack (the head)
 *
 * @param stack The stack to be analyzed
 * @return The stored content inside the head
 */
void	*ft_stkpeek_head(t_stack *stack);

/**
 * Get the element that is in the bottom of the stack (the foot)
 *
 * @param stack The stack to be analyzed
 * @return The stored content inside the foot
 */
void	*ft_stkpeek_foot(t_stack *stack);

/**
 * Checks if the stack is empty
 *
 * @param stack The stack to be analyzed
 * @return A boolean value
 */
t_bool	ft_stkis_empty(t_stack *stack);

void	ft_stkhprint(t_stack *stack);
void	ft_stkprint(t_stack *stack);

/******************************************************************************\
* PUSH SWAP																	   *
\******************************************************************************/

typedef struct s_push_swap
{
	t_stack	*a;
	t_stack	*b;
}	t_push_swap;

void	push_swap(t_push_swap *ps);
void	free_program(t_push_swap *ps);

/******************************************\
* OPERATIONS							   *
\******************************************/

//
// SWAP OPERATIONS
//

/**
 * Swap the first 2 elements at the top of stack.
 * Do nothing if there is only one or no elements.
 *
 * @note Assumes the type int for the content
*/
t_bool	swap(t_stack *stack);

/**
 * swap a
 *
 * Swap the first 2 elements at the top of stack 'a'.
 * Do nothing if there is only one or no elements.
*/
t_bool	sa(t_push_swap *ps);

/**
 * swap b
 *
 * Swap the first 2 elements at the top of stack 'b'.
 * Do nothing if there is only one or no elements.
*/
t_bool	sb(t_push_swap *ps);

/**
 * sa and sb at the same time.
*/
t_bool	ss(t_push_swap *ps);

//
// PUSH OPERATIONS
//
t_bool	send(t_stack *from, t_stack *to);

/**
 * push a
 *
 * Take the first element at the top of 'b' and put it at the top of 'a'.
 * Do nothing if b is empty.
 *
 * @note Assumes the type int for the content
*/
t_bool	pa(t_push_swap *ps);

/**
 * push b
 *
 * Take the first element at the top of 'a' and put it at the top of 'b'.
 * Do nothing if a is empty.
*/
t_bool	pb(t_push_swap *ps);

//
// ROTATION OPERATIONS
//

/**
 * Shift up all elements of the passed stack by 1
 * The first element becomes the last one.
 * Do nothing if there is only one or no elements.
 *
 * @note Assumes the type int for the content
*/
t_bool	rotate(t_stack *stack);

/**
 * Shift down all elements of the passed stack by 1
 * The last element becomes the first one.
 * Do nothing if there is only one or no elements.
 *
 * @note Assumes the type int for the content
*/
t_bool	reverse_rotate(t_stack *stack);

/**
 * rotate a
 *
 * Shift up all elements of stack 'a' by 1
 * The first element becomes the last one.
 * Do nothing if there is only one or no elements.
*/
t_bool	ra(t_push_swap *ps);

/**
 * rotate b
 *
 * Shift up all elements of stack 'b' by 1.
 * The first element becomes the last one
 * Do nothing if there is only one or no elements.
*/
t_bool	rb(t_push_swap *ps);

/**
 * ra and rb at the same time.
*/
t_bool	rr(t_push_swap *ps);

/**
 * reverse rotate a
 *
 * Shift down all elements of stack 'a' by 1.
 * The last element becomes the first one.
 * Do nothing if there is only one or no elements.
*/
t_bool	rra(t_push_swap *ps);

/**
 * reverse rotate b
 *
 * Shift down all elements of stack 'b' by 1.
 * The last element becomes the first one.
 * Do nothing if there is only one or no elements.
*/
t_bool	rrb(t_push_swap *ps);

/**
 * rra and rrb at the same time
*/
t_bool	rrr(t_push_swap *ps);

/******************************************\
* DICTIONARY							   *
\******************************************/

typedef struct s_pair
{
	int		key;
	void	*value;
}	t_pair;

t_pair	*new_pair(int key, void *value);
t_pair	*get_pair(void *pointer);
void	swap_pair(t_pair *a, t_pair *b);
void	print_pair(t_pair pair);

void	dictadd(t_dlist **dict, t_pair *pair);
t_pair	*dictfind(t_dlist *dict, int key);
void	dictprint(t_dlist *dict);

/******************************************\
* ALGORITHMS							   *
\******************************************/

void	init_boxes(t_list *boxes[DECIMAL_LENGTH]);
void	fill_boxes(t_list *boxes[DECIMAL_LENGTH], t_push_swap *ps);
void	clear_boxes(t_list *boxes[DECIMAL_LENGTH]);
void	find_box_in_stack(int box_value, t_push_swap *ps, char c);

/**
 * Count Sort
 *
 * Count sort works only in numbers inside the range of 0 to 9.
 * Basically use index values and assign each number to your respectively index
 *
 * Example:
 * Given the following list: 1 3 5 1
 * 0 -
 * 1 - 1 1
 * 2 -
 * 3 - 3
 * 4 -
 * 5 - 5
 * ....
*/
void	a__countsort(t_push_swap *ps);

/**
 * Bubble Sort
 *
 * The idea behind bubble sort is to push the high value numbers to the end,
 * like a bubble in a cup of water (always goes from bottom to top)
*/
void	a__bubblesort(t_dlist *numbers);

/**
 * Radix Sort
 *
 * Follows the same idea as count sort,
 * the only difference is that it takes every single digit in the number
 * and uses count sort as a subroutine to sort based on each digit
*/
void	a__radixsort(t_push_swap *ps);

/******************************************\
* SORT									   *
\******************************************/

void	s__small_stack(t_push_swap *ps);
void	s__big_stack(t_push_swap *ps);

/******************************************\
* VALIDATION							   *
\******************************************/

char	**v__program(int argc, char **argv);
void	v__push_swap(t_push_swap *ps);

/******************************************\
* PARSE									   *
\******************************************/

void	p__numbers_to_decimal(void);
t_dlist	*p__strarr_to_dlst(char **numbers);
t_dlist	*p__int_to_pair(t_dlist *numbers);

/******************************************\
* HELPERS								   *
\******************************************/

int		*new_int(int value);
int		get_int(void *pointer);
t_bool	and(t_bool one, t_bool two);
t_bool	is_stkascend(t_stack **stack);
t_bool	is_stkbetween(t_stack **stack, int min, int max);
t_stack	*stkcpy(t_stack **stack);

/******************************************************************************\
* LOG																		   *
\******************************************************************************/

int		debug_log(const char *str, ...);
int		fdebug_log(int fd, const char *str, va_list args);
void	ft_prterr(char *message, ...);
void	ft_vprterr(char *message, va_list args);
void	ft_exterr(char *message, ...);
void	ft_exterra(int errno, char *message, ...);
void	safely_throw_error(t_push_swap *ps, char *message, ...);

#endif
