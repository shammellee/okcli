.PHONY = $(EXECUTABLE) clean
SHELL  = /bin/bash

PROJECT_NAME = $(EXECUTABLE)cli
EXECUTABLE   := ok
SOURCE_DIR   := src
BUILD_DIR     = $(PROJECT_NAME)

$(EXECUTABLE): clean
	@mkdir $(BUILD_DIR)
	@cp $(SOURCE_DIR)/$@login $(SOURCE_DIR)/$@stats $(SOURCE_DIR)/$@config $(BUILD_DIR)/
	@$(CXX) -o $(BUILD_DIR)/$@ src/$@.cpp
	@echo '$(PROJECT_NAME) successfully built'

config:
	@$(BUILD_DIR)/okconfig

clean:
	@rm -rf $(BUILD_DIR)
	@echo 'Project clean'
