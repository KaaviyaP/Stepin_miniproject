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



PROJ_NAME = timer_calculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)

# All source code files
SRC = src/timer_calculator.c
# All test source files
TEST_SRC = test/test_calculator.c\
unity/unity.c


COV_SRC = test_calculator.c

INC_H = inc
INC_T = unity

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean test doc all

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c


cppcheck:
	cppcheck --enable=all $(SRC) main.c
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	$(RM) *.DAT
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov