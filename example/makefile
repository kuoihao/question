CXX = g++              # C++ 编译器
CXXFLAGS = -std=c++11  # 编译标准
TARGET = main     # 目标可执行文件
SRC = main.cpp         # 源文件

all: $(TARGET) run

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $<

run: $(TARGET)
	echo "-----------------------------\n"
	./$(TARGET)
	

clean:
	rm -f $(TARGET)
