LOCAL_MODULE_NAME =	Project

LOCAL_CPP_FILES =	\
			$(wildcard src/*.cpp)

LOCAL_HEADER_FILES = \
			include

LOCAL_CXXFLAGS =	\
			-static \
		  	-O3 \
		  	-std=c++1z \
		  	-Wall \
        	-w \
        	-Wextra

CPP_CROSS_COMPILE =	g++.exe

LOCAL_OEXT = \
			exe

RM = 		rm -rf

TOUCH = 	touch

LOCAL_OFILES =		\
			*.o \
			*.dat \
			$(LOCAL_MODULE_NAME).$(LOCAL_OEXT)

.SILENT:	dummy

.PHONY:		clean Project

dummy:
	echo Target undeclared: clean or Project
	echo
	echo

clean:
	@$(TOUCH) $(LOCAL_OFILES)
	@$(RM) $(LOCAL_OFILES)


Project:
	@$(CPP_CROSS_COMPILE) -I$(LOCAL_HEADER_FILES) $(LOCAL_CPP_FILES) $(LOCAL_CXXFLAGS) -o $(LOCAL_MODULE_NAME).$(LOCAL_OEXT)

