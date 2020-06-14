MATLAB_ROOT = /usr/local/MATLAB/R2018b
MAKEFILE = fj_vd_matF_mex.mk

include fj_vd_matF_mex.mki


SRC_FILES =  \
	fj_vd_matF_data.c \
	fj_vd_matF_initialize.c \
	fj_vd_matF_terminate.c \
	fj_vd_matF.c \
	error.c \
	_coder_fj_vd_matF_info.c \
	_coder_fj_vd_matF_api.c \
	_coder_fj_vd_matF_mex.c \
	c_mexapi_version.c

MEX_FILE_NAME_WO_EXT = fj_vd_matF_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexa64
TARGET = $(MEX_FILE_NAME)

SYS_LIBS = 


#
#====================================================================
# gmake makefile fragment for building MEX functions using Unix
# Copyright 2007-2016 The MathWorks, Inc.
#====================================================================
#

OBJEXT = o
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLISTCPP  = $(OBJLISTC:.cpp=.$(OBJEXT))
OBJLIST  = $(OBJLISTCPP:.cu=.$(OBJEXT))

target: $(TARGET)

ML_INCLUDES = -I "$(MATLAB_ROOT)/simulink/include"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/toolbox/shared/simtargets"
SYS_INCLUDE = $(ML_INCLUDES)

# Additional includes

SYS_INCLUDE += -I "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/codegen/mex/fj_vd_matF"
SYS_INCLUDE += -I "/home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code"
SYS_INCLUDE += -I "./interface"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/extern/include"
SYS_INCLUDE += -I "."

EML_LIBS = -lemlrt -lcovrt -lut -lmwmathutil 
SYS_LIBS += $(CLIBS) $(EML_LIBS)


EXPORTFILE = $(MEX_FILE_NAME_WO_EXT)_mex.map
ifeq ($(Arch),maci)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS))
else ifeq ($(Arch),maci64)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) -Wl,-rpath,@loader_path
else
  EXPORTOPT = -Wl,--version-script,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) $(OMPFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS) $(OMPFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) 
endif
LINK_FLAGS += $(OMPLINKFLAGS)
ifeq ($(Arch),maci)
  LINK_FLAGS += -L$(MATLAB_ROOT)/sys/os/maci
endif
ifeq ($(EMC_CONFIG),optim)
  ifeq ($(Arch),mac)
    COMP_FLAGS += $(CDEBUGFLAGS)
    CXX_FLAGS += $(CXXDEBUGFLAGS)
  else
    COMP_FLAGS += $(COPTIMFLAGS)
    CXX_FLAGS += $(CXXOPTIMFLAGS)
  endif
  LINK_FLAGS += $(LDOPTIMFLAGS)
else
  COMP_FLAGS += $(CDEBUGFLAGS)
  CXX_FLAGS += $(CXXDEBUGFLAGS)
  LINK_FLAGS += $(LDDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS += 

CCFLAGS = $(COMP_FLAGS) -std=c99   $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS = $(CXX_FLAGS) -std=c++11   $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CXX) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : /home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : /home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/codegen/mex/fj_vd_matF/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : /home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : /home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/codegen/mex/fj_vd_matF/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : interface/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



%.$(OBJEXT) : /home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : /home/hadi/MEGAsync/Hadi/AutoTMTDyn/Code/AutoTMTDyn/Beta/v1.0/code/codegen/mex/fj_vd_matF/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : interface/%.cu
	$(CC) $(CCFLAGS) "$<"




$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(OBJLIST) $(LINK_FLAGS) $(SYS_LIBS)

#====================================================================

