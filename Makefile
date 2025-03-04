all:
	@make -sC ex00
	@make -sC ex01
	@make -sC ex02
	@make -sC ex03


clean:
	@make -sC ex00 clean
	@make -sC ex01 clean
	@make -sC ex02 clean
	@make -sC ex03 clean


fclean:
	@make -sC ex00 fclean
	@make -sC ex01 fclean
	@make -sC ex02 fclean
	@make -sC ex03 fclean


re: fclean all

.PHONY: all clean fclean re 