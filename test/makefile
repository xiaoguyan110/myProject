proDir=${HOME}/workspace/myProject
mkDir=$(proDir)/mk

-include $(mkDir)/dir.mk

INC= -I$(incDir)

all:readfile

readfile: $(shell ls $(builtDir)/*.o)
	g++ -o readfile $(shell ls $(builtDir)/*.o) $(INC) readfile.cc


.PHONY: clean

clean:
	-rm -f readfile
