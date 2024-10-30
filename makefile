# Variables
CC = gcc
CFLAGS = -Wall -Wextra -g -I../Unity/src  # Ajoute le chemin d'inclusion
SRC = main.c fonction.c
OBJ = $(SRC:.c=.o)
EXEC = mon_projet
TEST_SRC = test.c
TEST_OBJ = $(TEST_SRC:.c=.o)
UNITY_SRC = ../Unity/src/unity.c  # Chemin vers unity.c

# Cible par défaut
all: $(EXEC)

# Règles de compilation
$(EXEC): $(OBJ)
	$(CC) -o $@ $(OBJ)

# Règles pour les tests
test: $(TEST_OBJ) $(UNITY_SRC)
	$(CC) -o tests $(TEST_OBJ) $(UNITY_SRC) $(OBJ)
	./tests

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyage
clean:
	rm -f $(OBJ) $(EXEC) tests $(TEST_OBJ)
