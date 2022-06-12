# https://makefiletutorial.com/#makefile-cookbook
TARGET = connect4
GXX = g++
GXXFLAGS = 
BUILD = $(GXX) $(GXXFLAGS)


HOMEDIR = ..
BINDIR = $(HOMEDIR)/bin
OBJDIR = $(HOMEDIR)/obj

MAIN_DEPS = $(OBJDIR)/board.o $(OBJDIR)/column.o $(OBJDIR)/cell.o

default: all

all: $(MAIN_DEPS)
	$(BUILD) main.cpp $(MAIN_DEPS) -o $(BINDIR)/$(TARGET)

$(OBJDIR)/cell.o: board/cell.h board/cell.cpp
	$(BUILD) -c board/cell.cpp -o $(OBJDIR)/cell.o

$(OBJDIR)/column.o: board/column.h board/column.cpp $(OBJDIR)/cell.o
	$(BUILD) -c board/column.cpp -o $(OBJDIR)/column.o

$(OBJDIR)/board.o: board/board.h board/board.cpp $(OBJDIR)/column.o $(OBJDIR)/cell.o
	$(BUILD) -c board/board.cpp -o $(OBJDIR)/board.o

run:
	$(BINDIR)/$(TARGET)

clean:
	rm -r $(BINDIR)/*
	rm -r $(OBJDIR)/*

br: all run
