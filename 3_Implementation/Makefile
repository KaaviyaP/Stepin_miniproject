PROJ_NAME = Calculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = ./Build

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
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

SRC = src/timer_calculator.c

TEST_SRC = test/test_calculator.c\
unity/unity.c

INC = -Iinc\
-Iunity

TEST_OUTPUT = $(call FixPath,$(BUILD)/Test_$(PROJECT_NAME).$(EXEC))

INCLUDE_LIBS = -lcunit



# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean doc

all:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC)) -lm

run: all
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

test: $(SRC) $(TEST_SRC)
	gcc $^ $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) 
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) 

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) -lm
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC)) 
	gcov -a $(SRC) 

doc:
	make -C doc
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	make clean -C doc
	rmdir $(BUILD_DIR) doc/html







# Name of the project
PROJECT_NAME = Calculator

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
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJECT_OUTPUT).$(EXEC)) -lm

# Call `make run` to run the application
run:$(PROJECT_OUTPUT).out
	$(call FixPath, $(PROJECT_OUTPUT).$(EXEC))

# Document the code using Doxygen
#doc:
#	make -C ./documentation

# Build and run the unit tests
test:$(SRC) $(TEST_SRC)
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(TEST_OUTPUT)) -lm
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