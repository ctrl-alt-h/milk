BUILD_DIR := ./build

cmake: config
	cd $(BUILD_DIR) && \
	cmake .. && \
	cmake --build .

config:
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)/*
