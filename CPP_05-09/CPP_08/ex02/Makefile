# ============================================
# ||  🔦  BUILD SYSTEM v1.4                ||
# ============================================
# ||  Project: ex02 - Mutated Abomination    ||
# ||  Author: Abdurahim Hudulov              ||
# ||  Date: 2025                             ||
# ============================================

# Colors
BLACK    = \033[1;30m
RED      = \033[1;31m
GREEN    = \033[1;32m
YELLOW   = \033[1;33m
BLUE     = \033[1;34m
MAGENTA  = \033[1;35m
CYAN     = \033[1;36m
WHITE    = \033[1;37m
NC       = \033[0m  # No Color

# Compiler and Flags
CXX      = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
LDFLAGS  =

# Project Name
NAME     = ex02

# Source Files
SRCS     = main.cpp MutantStack.cpp

# Header Files
HEADERS  = MutantStack.hpp MutantStack.h

# Template Implementation File (if used)
TEMPLATE = MutantStack.tpp

# Object Files
OBJS     = $(SRCS:.cpp=.o)

# Fancy Styling
SEP_LINE  = "$(BLUE)=========================================== $(NC)"
HEADER    = "$(CYAN)|| BUILD SYSTEM ||$(NC)"
SUCCESS   = "$(GREEN)==> BUILD SUCCESSFUL$(NC)"
CLEAN_MSG = "$(GREEN)==> CLEANUP COMPLETE$(NC)"
FAIL_MSG  = "$(RED)==> BUILD FAILED$(NC)"

# Default Target
all: banner $(NAME)

# Banner Display
banner:
	@echo $(SEP_LINE)
	@echo $(HEADER)
	@echo $(SEP_LINE)

# Linking Target Executable
$(NAME): $(OBJS)
	@echo "$(BLUE)[ Linking Objects... ]$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(LDFLAGS) && \
	echo $(SUCCESS) || echo $(FAIL_MSG)

# Compiling Source Files
%.o: %.cpp $(HEADERS) $(TEMPLATE)
	@echo "$(YELLOW)[ Compiling: $< ]$(NC)"
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "$(GREEN)[ Object Created: $@ ]$(NC)"

# Clean Temporary Files
clean:
	@echo "$(RED)[ Cleaning Object Files... ]$(NC)"
	$(RM) $(OBJS)
	@echo $(CLEAN_MSG)

# Full Clean - Remove All Build Artifacts
fclean: clean
	@echo "$(RED)[ Removing Executable... ]$(NC)"
	$(RM) $(NAME)
	@echo $(CLEAN_MSG)

# Rebuild Everything
re: fclean all

# Help
help:
	@echo $(SEP_LINE)
	@echo "$(CYAN)Build System Help:$(NC)"
	@echo $(SEP_LINE)
	@echo "  $(GREEN)make$(NC)         - Build the project."
	@echo "  $(GREEN)make clean$(NC)   - Remove object files."
	@echo "  $(GREEN)make fclean$(NC)  - Full clean (objects + executable)."
	@echo "  $(GREEN)make re$(NC)      - Rebuild the project."
	@echo $(SEP_LINE)

# Declare Phony Targets
.PHONY: all clean fclean re help banner
