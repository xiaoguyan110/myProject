proDir=${HOME}/hear/
mkDir=$(proDir)/mk

-include $(mkDir)/dir.mk

INC= -I$(incDir)

all:built main.app

built:
	g++ -c $(INC) sales.cc -o $(builtDir)/sales.o 
	g++ -c $(INC) window_mgr.cc -o $(builtDir)/window_mgr.o 
	g++ -c $(INC) screen.cc -o $(builtDir)/screen.o 
	g++ -c $(INC) comm.cc -o $(builtDir)/comm.o 
	g++ -c $(INC) main.cc -o $(builtDir)/main.o 
	g++ -c $(INC) account.cc -o $(builtDir)/account.o 

main.app: $(shell ls $(builtDir)/*.o)
	g++ -o $(binDir)/main.app $(shell ls $(builtDir)/*.o)


.PHONY: clean

clean:
	-rm -f $(builtDir)/*.o
	-rm -f $(binDir)/main.app