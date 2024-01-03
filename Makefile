TARGET = lab3
CXX = g++
CXXFLAGS = -std=c++17
LIBS = -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

# List source files (replace main.cpp with your actual source files)
SRCS = $(TARGET).cpp

# Generate corresponding object file names
OBJS = $(SRCS:.cpp=.o)

# The default target builds the executable
all: $(TARGET).exe

# Linking step
$(TARGET).exe: $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBS)

# Compilation step
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Run the executable
run: $(TARGET).exe
	./$(TARGET).exe

# Clean up (for Windows using 'del' command)
clean:
	del /F /Q $(OBJS) $(TARGET).exe
