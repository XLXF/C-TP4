ECHO = echo
RM = rm
COMP = g++
EDL = g++
INT = Main.h LectureLog.h GraphViz.h Noeud.h
REAL = $(INT:.h=.cpp)
OBJ = $(REAL:.cpp=.o)
EXE = prog
LIBS = -lm
CPPFLAGS = -g -Wall -ansi -pedantic -std=c++11
CDFLAGS =
RMFLAGS = 
EFFACE = clean
LIBPATH =
INCPATH = 

$(EXE) : $(OBJ)
	$(ECHO) "Edl de <prog>"
	$(EDL) -o $(EXE) $(LDFLAGS) $(OBJ) $(LIBS)

%.o : %.cpp
	$(ECHO) "Compil de <$<>"
	$(COMP) $(CPPFLAGS) -c $<

Main.o : Main.cpp Main.h

LectureLog.o : LectureLog.cpp LectureLog.h

GraphViz.o : GraphViz.cpp GraphViz.h

Noeud.o : Noeud.cpp Noeud.h

