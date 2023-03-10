LIBFT_DIR			= libft
OBJS_DIR			= objects
SRC_DIR				= src
MANDATORY_DIR		= mandatory
BONUS_DIR			= bonus

CC					= cc
CCF_STRICT			= -Wall -Wextra -Werror
CCF_DEBUG			= -g3 -D VERBOSE=1
LIBFT				= $(LIBFT_DIR)/libft.a
LIBS				= $(LIBFT)
RM					= rm -rf

################################################################################
# MANDATORY
################################################################################

NAME				= push_swap
CCF_INCL_MANDATORY	= -I ./$(SRC_DIR)/$(MANDATORY_DIR)/includes -I $(LIBFT_DIR)

C_LINKED_LISTS = list/singly/ft_lstnew.c list/singly/ft_lstadd_front.c list/singly/ft_lstsize.c list/singly/ft_lstlast.c list/singly/ft_lstadd_back.c list/singly/ft_lstdelone.c list/singly/ft_lstclear.c list/singly/ft_lstiter.c list/singly/ft_lstmap.c list/singly/ft_lstprint.c
C_DOUBLY_LINKED_LISTS = list/doubly/ft_dlstnew.c list/doubly/ft_dlstadd_front.c list/doubly/ft_dlstadd_begin.c list/doubly/ft_dlstfirst.c list/doubly/ft_dlstlast.c list/doubly/ft_dlstadd_back.c list/doubly/ft_dlstsize.c list/doubly/ft_dlstdelone.c list/doubly/ft_dlstclear.c list/doubly/ft_dlstmap.c list/doubly/ft_dlstiter.c list/doubly/ft_dlstprint.c
C_STACK = stack/ft_stkclear.c stack/ft_stkinit.c stack/ft_stkis_empty.c stack/ft_stknew.c stack/ft_stkpeek.c stack/ft_stkpop.c stack/ft_stkprint.c stack/ft_stkpush.c
C_OPERATIONS = operations/push.c operations/rotate.c operations/reverse_rotate.c operations/swap.c
C_HELPERS = helpers/int.c helpers/helpers.c helpers/is_stkascend.c helpers/is_stkbetween.c helpers/stkcpy.c
C_LOG = log/debug_log.c log/error/ft_exterr.c log/error/ft_prterr.c log/error/safely_throw_error.c
C_VALIDATION = validation/v__program.c validation/v__push_swap.c
C_SORT = sort/s__xs_stack.c sort/s__sm_stack.c sort/s__big_stack.c
C_ALGORITHMS = algorithms/countsort/a__countsort.c algorithms/countsort/a__countsort_helpers.c algorithms/bubblesort/a__bubblesort.c algorithms/radixsort/a__radixsort.c
C_PARSE = parse/p__strarr_to_dlst.c parse/p__int_to_pair.c
C_DICTIONARY = dictionary/pair.c dictionary/dictionary.c

C_FILES_MANDATORY	= main.c push_swap.c $(C_LINKED_LISTS) $(C_DOUBLY_LINKED_LISTS) $(C_STACK) $(C_OPERATIONS) $(C_HELPERS) $(C_LOG) $(C_VALIDATION) $(C_SORT) $(C_ALGORITHMS) $(C_PARSE) $(C_DICTIONARY)
FILES_MANDATORY		= $(addprefix $(MANDATORY_DIR)/,$(C_FILES_MANDATORY))
SRCS_MANDATORY		= $(addprefix src/,$(FILES_MANDATORY))
OBJS_MANDATORY		= $(addprefix $(OBJS_DIR)/,$(FILES_MANDATORY:.c=.o))

all: $(NAME)

$(NAME): $(OBJS_MANDATORY) $(LIBFT)
	$(CC) $(OBJS_MANDATORY) $(LIBS) -o $(NAME)

$(OBJS_DIR)/$(MANDATORY_DIR)/%.o: $(SRC_DIR)/$(MANDATORY_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CCF_STRICT) $(CCF_INCL_MANDATORY) -c $< -o $@

debug: $(LIBFT)
	@echo "Compiling..."
	@$(CC) $(CCF_DEBUG) $(CCF_INCL_MANDATORY) $(SRCS_MANDATORY) $(LIBS) -o $(NAME)

rebuild:
	@make all -C $(LIBFT_DIR) --no-print-directory
	@$(CC) $(CCF_STRICT) $(CCF_INCL_MANDATORY) $(SRCS_MANDATORY) $(LIBS) -o $(NAME)

################################################################################
# LIBFT
################################################################################

$(LIBFT):
	make all -C $(LIBFT_DIR)

################################################################################
# CLEAN UP
################################################################################

clean:
	make clean -C $(LIBFT_DIR)
	$(RM) $(OBJS_DIR)

fclean: clean
	make fclean -C $(LIBFT_DIR)
	$(RM) $(NAME_B)
	$(RM) $(NAME)

re:	fclean all

################################################################################
# CONFIGURATION
################################################################################

.PHONY: all bonus clean libft fclean re rebuild debug

################################################################################
# Colors
################################################################################

# Black, Red, Green, Yellow, Blue, Purple, Cyan, White
BK = \033[0;30m
R = \033[0;31m
G = \033[0;32m
Y = \033[0;33m
B = \033[0;34m
P = \033[0;35m
C = \033[0;36m
W = \033[0;37m
# Bold
BKB = \033[1;30m
RB = \033[1;31m
GB = \033[1;32m
YB = \033[1;33m
BB = \033[1;34m
PB = \033[1;35m
CB = \033[1;36m
WB = \033[1;37m
# Reset Color
RC = \033[0m
