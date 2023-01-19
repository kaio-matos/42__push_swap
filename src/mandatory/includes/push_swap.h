/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatos-s <kmatos-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 01:06:58 by kmatos-s          #+#    #+#             */
/*   Updated: 2023/01/19 20:31:35 by kmatos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <linked_list.h>
# include <libft.h>

typedef enum	e_bool
{
	FALSE,
	TRUE
} t_bool;

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
 * Adds a new item to the top of the stack,
 * replacing the current head to the new pushed element.
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
	t_stack	a;
	t_stack	b;
}	t_push_swap;

/******************************************\
* OPERATIONS							   *
\******************************************/

//
// SWAP OPERATIONS
//

/**
 * swap a
 *
 * Swap the first 2 elements at the top of stack a.
 * Do nothing if there is only one or no elements.
*/
void	sa(void);

/**
 * swap b
 *
 * Swap the first 2 elements at the top of stack b.
 * Do nothing if there is only one or no elements.
*/
void	sb(void);

/**
 * sa and sb at the same time.
*/
void	ss(void);


//
// PUSH OPERATIONS
//

/**
 * push a
 *
 * Take the first element at the top of b and put it at the top of a.
 * Do nothing if b is empty.
*/
void	pa(void);

/**
 * push b
 *
 * Take the first element at the top of a and put it at the top of b.
 * Do nothing if a is empty.
*/
void	pb(void);

//
// ROTATION OPERATIONS
//

/**
 * rotate a
 *
 * Shift up all elements of stack a by 1
 * The first element becomes the last one.
*/
void	ra(void);

/**
 * rotate b
 *
 * Shift up all elements of stack b by 1.
 * The first element becomes the last one
*/
void	rb(void);

/**
 * reverse rotate a
 *
 * Shift down all elements of stack a by 1.
 * The last element becomes the first one.
*/
void	rra(void);

/**
 * reverse rotate b
 *
 * Shift down all elements of stack b by 1.
 * The last element becomes the first one.
*/
void	rrb(void);

/**
 * rra and rrb at the same time
*/
void	rrr(void);

#endif
