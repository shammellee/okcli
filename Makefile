.PHONY = $(EXECUTABLE) clean
SHELL  = /bin/bash

PROJECT_NAME = $(EXECUTABLE)cli
EXECUTABLE   := ok
SOURCE_DIR   := src
BUILD_DIR     = $(PROJECT_NAME)

#all: $(EXECUTABLE)

$(EXECUTABLE): clean
	@mkdir $(BUILD_DIR)
	@cp $(SOURCE_DIR)/$@login $(SOURCE_DIR)/$@stats $(BUILD_DIR)/
	@$(CXX) -o $(BUILD_DIR)/$@ src/$@.cpp
	@echo '$(PROJECT_NAME) successfully built'

clean:
	@rm -rf $(BUILD_DIR)
	@echo 'Project clean'
