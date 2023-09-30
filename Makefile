# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrigarc <adrigarc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 19:00:05 by adrigarc          #+#    #+#              #
#    Updated: 2023/04/18 22:40:29 by adrigarc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#---------------------------------------------------#
#                   LIBFT MAKEFILE     				#
#---------------------------------------------------#

# name of the output library
NAME = libft.a

# name of the output library for bonus
NAME_BONUS = .bonus

# define some color codes for pretty printing
RED = \033[91m
YELLOW = \033[93m
WHITE = \033[97m
GREEN = \033[92m
DEF_CL = \033[m
CYAN = \033[96m

#---------------------------------------------------#
#                   COMPILER SETTINGS               #
#---------------------------------------------------#

# compiler
CC = gcc

# compiler flags
CFLAGS = -Wall -Wextra -Werror

# command to remove files
RM = rm -f

# command to run norminette
NORM = norminette -R CheckForbiddenSourceHeader .

# command to create a library archive
AR = ar -rcs

#---------------------------------------------------#
#                   SOURCE FILES					#
#---------------------------------------------------#

# header file
HEADER = libft.h

# source files
SRC    = ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isdigit.c ft_isprint.c  \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_itoa.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# bonus source files
BONUS  = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# object files generated from source files
OBJ = $(SRC:.c=.o)

# object files generated from bonus source files
OBJ_BONUS = ${BONUS:.c=.o}

# dependencies generated from source files
DEPS = $(SRC:.c=.d)

# dependencies generated from bonus source files
DEPS_BONUS = $(BONUS:.c=.d)

#---------------------------------------------------#
#                   OBJECT FILES					#
#---------------------------------------------------#

# rule to generate an object file from a C source file
%.o: %.c Makefile
	@$(CC) $(CFLAGS) -MMD -I./ -c $< -o $@
	@echo "$(CYAN)Compiling: $(CYAN)$<$(DEF_CL) $(GREEN)[OK]$(DEF_CL)"

#---------------------------------------------------#
#                   MAIN TARGET   					#
#---------------------------------------------------#

# default rule to build the main library
all: $(NAME)

# include dependencies for all source files
-include $(DEPS)

# rule to build the main library
$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "Compilation $(GREEN) Completed ! $(DEF_CL)"

# rule to build the bonus library
bonus: $(NAME_BONUS)

# include dependencies for all bonus source files
-include $(DEPS_BONUS)

# rule to build the bonus library
$(NAME_BONUS): $(OBJ) ${OBJ_BONUS}
	@$(AR) $(NAME) $(OBJ) $(OBJ_BONUS)
	@touch .bonus
	@echo "Compilation with $(YELLOW)bonus $(GREEN)completed!$(DEF_CL)"

#---------------------------------------------------#
#                    CLEANING   					#
#---------------------------------------------------#

# rule to clean up object files and dependencies
clean:
	@$(RM) $(OBJ) $(OBJ_BONUS)
	@echo "$(CYAN)	Deleted objects: $(RED)$(OBJ) $(OBJ_BONUS) $(DEF_CL)"
	@$(RM) $(DEPS) $(DEPS_BONUS)
	@echo "$(CYAN)	Deleted dependencies: $(RED)$(DEPS) $(DEPS_BONUS) $(DEF_CL)"

# rule to remove the compiled library file and cleaned object files
fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN)	DELETED: $(RED)$(NAME)$(DEF_CL)"

#---------------------------------------------------#
#               ADDITIONAL TARGET  					#
#---------------------------------------------------#

# rule to completely rebuild the program from scratch
re: fclean all

# rule to apply and print norminette
norm:
	@echo "$(YELLOW)Norminette says:$(DEF_CL)"
	@$(NORM)

# rule to tell make that the listed targets do not correspond to actual files.
.PHONY: all bonus clean fclean re norm