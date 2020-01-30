SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
CFLAGS += -Wall -Iinclude -I/usr/include/freetype2 -lm -lpthread -lfftw3 \
          -lpulse-simple -lpulse -lGL -lGLU -lX11 -lXrender -lfreetype \
          -lXfixes -g

liveW: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

.PHONY: clean
clean:
	-rm -f $(OBJ) liveW
