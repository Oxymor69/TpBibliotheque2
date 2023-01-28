# Define the target executable
TARGET = main
# Define the C++ compiler
CC = g++

# Define any flags for the compiler
CFLAGS = -Wall -std=c++11

# Define the source files
SRC = TpBibliotheque2.cpp Auteur.cpp Livre.cpp Date.cpp Emprunt.cpp Bibliotheque.cpp Lecteur.cpp

# Define the header files
HEADERS = Auteur.h Livre.h Date.h Emprunt.h Bibliotheque.h Lecteur.h

# Define the object files
OBJ = $(SRC:.cpp=.o)

# Define the dependency files
DEPS = $(SRC:.cpp=.d)

# Define the rule for creating the target executable
$(TARGET): $(OBJ)
    $(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Define the rule for creating object files
%.o: %.cpp $(HEADERS)
    $(CC) $(CFLAGS) -c $< -o $@

# Define the rule for creating dependency files
%.d: %.cpp
    $(CC) $(CFLAGS) -MM $< > $@

# Define the rule for cleaning up the project
.PHONY: clean
clean:
    rm -f $(TARGET) $(OBJ) $(DEPS)

# Include the dependency files
-include $(DEPS)
