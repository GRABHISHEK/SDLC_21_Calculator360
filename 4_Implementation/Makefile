# Name of the project
PROJECT_NAME=calculator360

TEST_NAME= test_$(PROJECT_NAME)

#Environment variable
CC= gcc

CFLAGS= -o


MAIN=main.c

# All source code files
SRC=src/electrical/batterylife.c\
src/electrical/KWtoAmps.c\
src/electrical/singlephasepower.c\
src/electrical/threephasepower.c\
src/electrical/stardeltaconversion.c\
src/electrical/EBbill.c\
src/electrical/ohmslaw.c\
src/electrical/voltagedivider.c\
src/electrical/powerfactor.c\
src/electrical/electricalCalc.c


# All test source files
TEST=test.c\
unity/unity.c

# All include folders with header files
INC=electricalCalc.h\
-I unity

#SOurce file for coverage test
COV_SRC=test.c

#Multiplatform features
ifdef OS
   RM = del
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
	  CPPCHECK=cppcheck --enable=all $(SRC) $(MAIN)
	  VALGRIND=valgrind ./$(call FixPath,$(TEST_NAME).$(EXEC))
      FixPath = $1
	  EXEC = out
   endif
endif


# Default target built
$(PROJECT_NAME):all


# Run the target even if the matching name exists
.PHONY: run clean test doc all

#Run make call to invoke cppcheck and compliation
all: 
	$(CC) $(MAIN) $(SRC) $(INC) $(CFLAGS) $(call FixPath,$(PROJECT_NAME).$(EXEC)) 

# Call `make run` to run the application
run:
	./$(call FixPath,$(PROJECT_NAME).$(EXEC))

	
# Build and run the unit tests
test:
	$(CC) $(INC) $(SRC) $(TEST) $(CFLAGS) $(call FixPath,$(TEST_NAME).$(EXEC))
	./$(call FixPath,$(TEST_NAME).$(EXEC))	

	
#Run the target to find the memory leak in the program	
memoryleak:
	$(CC) $(INC) $(SRC) $(TEST) $(CFLAGS) $(call FixPath,$(TEST_NAME).$(EXEC))
	$(VALGRIND)
	

#Run the target to find static code analysis in the program
static:
	$(CPPCHECK)



#To test the coverage of the whole program
coverage:
	$(CC) -fprofile-arcs -ftest-coverage $(SRC) $(TEST) $(INC) $(CFLAGS) $(call FixPath,$(TEST_NAME).$(EXEC))
	./$(call FixPath,$(TEST_NAME).$(EXEC))
	gcov -a $(COV_SRC)

#To document the program
doc:
	make -C doc

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcda *.gcno