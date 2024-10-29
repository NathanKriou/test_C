# Variables
CC = gcc
CFLAGS = -Wall -Wextra -g
SRC = main.c fonctions.c
OBJ = $(SRC:.c=.o)
EXEC = mon_projet
TEST_SRC = tests.c
TEST_OBJ = $(TEST_SRC:.c=.o)
UNITY_DIR = path/to/unity/src
UNITY_SRC = $(UNITY_DIR)/unity.c

# Cible par défaut
all: $(EXEC)

# Règles de compilation
$(EXEC): $(OBJ)
	$(CC) -o $@ $(OBJ)

# Règles pour les tests
test: $(TEST_OBJ) $(UNITY_SRC)
	$(CC) -o tests $(TEST_OBJ) $(UNITY_SRC)
	./tests

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage
clean:
	rm -f $(OBJ) $(EXEC) tests $(TEST_OBJ)
