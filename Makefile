.PHONY = $(EXECUTABLE) clean
SHELL  = /bin/bash

EXECUTABLE := okc
SOURCE_DIR := src
BUILD_DIR  := $(EXECUTABLE)

#all: $(EXECUTABLE)

$(EXECUTABLE): clean
	@mkdir $(BUILD_DIR)
	@cp $(SOURCE_DIR)/$@d $(SOURCE_DIR)/$@p $(BUILD_DIR)/
	@g++ -o $(BUILD_DIR)/$@ src/$@.cpp 
	@echo '$(EXECUTABLE) successfully built'

clean:
	@rm -rf $(BUILD_DIR) .okc_cookies
	@echo 'Project clean'
