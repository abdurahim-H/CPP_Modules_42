# ============================================
# ||  🖥️  BUILD SYSTEM v1.0       ||
# ============================================
# ||  Project: My First Class in Orthodox Canonical Form ||
# ||  Author: Abdurahim Hudulov				 			 ||	
# ||  Date: 2024										 ||
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
# Using -std=c++98 to align with older C++ standards commonly used at 42;
# you can switch to -std=c++11 or above if needed.
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
LDFLAGS  =

# Source Files
# Option A: Explicitly list source files
SRCS     = main.cpp Fixed.cpp

# Option B: Use wildcard if you want to pick up all .cpp files in the folder
# SRCS     = $(wildcard *.cpp)

OBJS     = $(SRCS:.cpp=.o)

# Target Executable
# Change this if you’d like a more descriptive name, e.g. 'fixed' or 'ex00'
TARGET   = ex00

# Fancy Styling
SEP_LINE  = "$(BLUE)===========================================$(NC)"
HEADER    = "$(CYAN)|| BUILD SYSTEM ||$(NC)"
SUCCESS   = "$(GREEN)==> BUILD SUCCESSFUL$(NC)"
CLEAN_MSG = "$(GREEN)==> CLEANUP COMPLETE$(NC)"
FAIL_MSG  = "$(RED)==> BUILD FAILED$(NC)"

# Default Target
all: banner $(TARGET)

# Banner Display
banner:
	@echo $(SEP_LINE)
	@echo $(HEADER)
	@echo $(SEP_LINE)

# Linking Target Executable
$(TARGET): $(OBJS)
	@echo "$(BLUE)[ Linking Objects... ]$(NC)"
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS) $(LDFLAGS) && \
	echo $(SUCCESS) || echo $(FAIL_MSG)

# Compiling Source Files
%.o: %.cpp
	@echo "$(YELLOW)[ Compiling: $< ]$(NC)"
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "$(GREEN)[ Object Created: $@ ]$(NC)"

# Clean Temporary Files
clean:
	@echo "$(RED)[ Cleaning Object Files... ]$(NC)"
	rm -f $(OBJS)
	@echo $(CLEAN_MSG)

# Full Clean - Remove All Build Artifacts
fclean: clean
	@echo "$(RED)[ Removing Executable... ]$(NC)"
	rm -f $(TARGET)
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
