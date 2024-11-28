# Colors
GREEN = \033[0;32m
YELLOW = \033[1;33m
BLUE = \033[0;34m
RED = \033[0;31m
CYAN = \033[0;36m
MAGENTA = \033[0;35m
NC = \033[0m # No Color

# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Target executable
TARGET = megaphone

# Source files
SRCS = megaphone.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link the target executable (only if object files are updated)
$(TARGET): $(OBJS)
	@printf "$(BLUE)Linking object files...$(NC)\n"
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)
	@printf "$(GREEN)Build successful! Executable: $(MAGENTA)$(TARGET)$(NC)\n"

# Compile source files into object files (only if source files are updated)
%.o: %.cpp
	@printf "$(YELLOW)Compiling $(MAGENTA)$<$(NC)...\n"
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@printf "$(GREEN)Compiled: $(MAGENTA)$@$(NC)\n"

# Clean up build files
clean:
	@printf "$(RED)Cleaning up object files...$(NC)\n"
	rm -f $(OBJS)
	@printf "$(GREEN)Clean complete!$(NC)\n"

# Full clean: clean object files and target
fclean: clean
	@printf "$(RED)Removing executable: $(MAGENTA)$(TARGET)$(NC)\n"
	rm -f $(TARGET)
	@printf "$(GREEN)Full clean complete!$(NC)\n"

# Rebuild the target
re: fclean all

.PHONY: all clean fclean re
