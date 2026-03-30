##
## EPITECH PROJECT, 2026
## Makefile
## File description:
## ...
##

SRC	=	$(shell find src -name "*.cpp")

SRC_TESTS	=	$(shell find src tests -name "*.cpp" ! -name "main.cpp")

NAME	=	myteams_server

OBJ	=	$(SRC:.cpp=.o)

CXXFLAGS	=	-std=c++20 -Wall -Wextra -Werror -I./src

CXX	=	clang++

GREEN = \033[0;32m

CYAN = \033[0;36m

MAGENTA = \033[0;35m

RESET = \033[0m

all:
	@echo -e "$(CYAN)Building server...$(RESET)"
	@$(MAKE) $(NAME) | grep Build

$(NAME):	$(OBJ)
	@if $(CXX) $(OBJ) -o $(NAME) $(CXXFLAGS); then \
		echo -e "$(GREEN)✓ Build successful!$(RESET)\n"; \
	fi

clean:
	@echo -e "$(CYAN)Cleaning up temporary files...$(RESET)"
	@rm -rf $(OBJ)
	@find . -type f -name '*.gcda' -delete
	@find . -type f -name '*.gcno' -delete
	@find . -type f -name '*.gcov' -delete
	@find . -type f -name '*~' -delete
	@echo -e "$(GREEN)Cleaning finished!$(RESET)\n"

fclean: clean
	@echo -e "$(CYAN)Cleaning up binary files...$(RESET)"
	@rm -rf $(NAME)
	@rm -rf unit_tests
	@echo -e "$(GREEN)Cleaning finished!$(RESET)\n"

re: fclean all

unit_tests:    fclean
	@echo -e "$(CYAN)Building server and unit tests...$(RESET)"
	@if $(CXX) -o unit_tests_server $(SRC_TESTS) $(CXXFLAGS) -lcriterion --coverage; \
	then \
		echo -e "$(GREEN)✓ Build successful!$(RESET)\n"; \
	fi

tests_run:    unit_tests
	@./unit_tests --verbose

tests_coverage: unit_tests
	@./unit_tests --verbose
	@echo -e "$(MAGENTA)Lines coverage:$(RESET)\n"
	@gcovr --exclude tests/ --txt-metric line \
		--gcov-executable "llvm-cov-20 gcov"
	@echo -e "$(MAGENTA)Branches coverage:$(RESET)\n"
	@gcovr --exclude tests/ --txt-metric branch \
		--gcov-executable "llvm-cov-20 gcov"

.PHONY:	all clean fclean re unit_tests tests_run tests_coverage
