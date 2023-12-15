CXX = g++              # C++ 编译器
CXXFLAGS = -std=c++11  # 编译标准
TARGET = main          # 目标可执行文件
SRC = main.cpp         # 源文件
INPUT_FILE = ../in    # 输入文件名

all: $(TARGET) run

$(TARGET): $(SRC)
	@$(CXX) $(CXXFLAGS) -o $@ $<

run: $(TARGET)
	@./$(TARGET) < ${INPUT_FILE}
	

clean:
	rm -f $(TARGET)

