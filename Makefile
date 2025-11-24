PROJECT := milk

CC 	= gcc
CFLAGS 	= -Wall -Wextra -g

SOURCE_DIR 	= ./src
BUILD_DIR  	= ./build
SOURCE_FILES  	= $(SOURCE_DIR)/main.c

$(PROJECT): config
	$(CC) $(CFLAGS) $(SOURCE_FILES) -o $(BUILD_DIR)/$@

config:
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)
