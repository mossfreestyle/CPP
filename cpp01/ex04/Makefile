NAME = replace

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJDIR = obj
OBJ = $(addprefix $(OBJDIR)/,$(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@if [ -d "$(OBJDIR)" ] && rmdir "$(OBJDIR)" 2>/dev/null; then echo "Removed empty $(OBJDIR)/"; fi

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
