CC = gcc
CFLAGS = -Wall -pthread
TARGET = concorrencia
SOURCES = concorrencia.c
OBJECTS = $(SOURCES:.c=.o)
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)
