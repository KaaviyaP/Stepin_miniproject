# Name of the project
PROJECT_NAME = timer_calculator

# Output directory
BUILD = build

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


# All source code files
SRC = src/timer_calculator.c
# All test source files
TEST_SRC = test/test_calculator.c\
unity/unity.c

TEST_OUTPUT = $(call FixPath,$(BUILD)/Test_$(PROJECT_NAME).$(EXEC))

# All include folders with header files
INC	= -Iinc\
-Iunity

#Library Inlcudes
#if working with CUnit 
#INCLUDE_LIBS = -lcunit
INCLUDE_LIBS =

# Project Output name
PROJECT_OUTPUT = $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(PROJECT_OUTPUT).$(EXEC)) -lm

# Call `make run` to run the application
run:$(PROJECT_OUTPUT).out
	$(call FixPath, $(PROJECT_OUTPUT).$(EXEC))

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
test:$(SRC) $(TEST_SRC)
	gcc $^ $(TEST_SRC) $(INC) -o $(call FixPath,$(TEST_OUTPUT)) -lm
	$(call FixPath, $(TEST_OUTPUT))
#Coverage
coverageCheck:$(BUILD)
	gcc -fprofile-arcs -ftest-coverage $(TEST_SRC) $(INC) -o $(call FixPath, $(TEST_OUTPUT)) -lm
	$(call FixPath, $(TEST_OUTPUT))
	gcov -a $(SRC)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build