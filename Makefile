##
## EPITECH PROJECT, 2026
## Makefile
## File description:
## ...
##

all:
	@make -C server
	@make -C client
	@cp client/myteams_cli .
	@cp server/myteams_server .

clean:
	@make clean -C server
	@make clean -C client

fclean: clean
	@make fclean -C server
	@make fclean -C client
	@rm -f myteams_cli
	@rm -f myteams_server

re:
	@make re -C server
	@make re -C client
	@cp client/myteams_cli .
	@cp server/myteams_server .

unit_tests:    fclean
	@make unit_tests -C server
	@make unit_tests -C client
	@cp client/unit_tests_client .
	@cp server/unit_tests_server .

tests_run:    unit_tests
	@make tests_run -C server
	@make tests_run -C client

tests_coverage: unit_tests
	@make tests_coverage -C server
	@make tests_coverage -C client

.PHONY:	all clean fclean re unit_tests tests_run tests_coverage
