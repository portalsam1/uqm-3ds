#---------------------------------------------------------------------------------
.SUFFIXES:
#---------------------------------------------------------------------------------

ifeq ($(strip $(DEVKITARM)),)
$(error "Please set DEVKITARM in your environment. export DEVKITARM=<path to>devkitARM")
endif

TOPDIR ?= $(CURDIR)
UQMDIR := $(TOPDIR)/uqm-0.8.0
include $(DEVKITARM)/3ds_rules

#---------------------------------------------------------------------------------
# TARGET is the name of the output
# BUILD is the directory where object files & intermediate files will be placed
# SOURCES is a list of directories containing source code
# DATA is a list of directories containing data files
# INCLUDES is a list of directories containing header files
# GRAPHICS is a list of directories containing graphics files
# GFXBUILD is the directory where converted graphics files will be placed
#   If set to $(BUILD), it will statically link in the converted
#   files as if they were data files.
#
# NO_SMDH: if set to anything, no SMDH file is generated.
# ROMFS is the directory which contains the RomFS, relative to the Makefile (Optional)
# APP_TITLE is the name of the app stored in the SMDH file (Optional)
# APP_DESCRIPTION is the description of the app stored in the SMDH file (Optional)
# APP_AUTHOR is the author of the app stored in the SMDH file (Optional)
# ICON is the filename of the icon (.png), relative to the project folder.
#   If not set, it attempts to use one of the following (in this order):
#     - <Project name>.png
#     - icon.png
#     - <libctru folder>/default_icon.png
#---------------------------------------------------------------------------------
TARGET		:=	$(notdir $(CURDIR))
BUILD		:=	build
SOURCES		:=	src src/abxadec src/darwin src/getopt src/libs src/libs/callback src/libs/cdp src/libs/decomp src/libs/file src/libs/graphics src/libs/graphics/sdl src/libs/heap src/libs/input src/libs/input/sdl src/libs/list src/libs/log src/libs/math src/libs/md5 src/libs/memory src/libs/mikmod src/libs/network src/libs/network/connect src/libs/network/netmanager src/libs/network/socket src/libs/resource src/libs/sound src/libs/sound/decoders src/libs/sound/mixer src/libs/sound/mixer/nosound src/libs/sound/mixer/sdl src/libs/sound/openal src/libs/strings src/libs/task src/libs/threads src/libs/threads/pthread src/libs/threads/sdl src/libs/time src/libs/time/sdl src/libs/uio src/libs/uio/doc src/libs/uio/stdio src/libs/uio/zip src/libs/video src/regex src/res src/res/darwin src/uqm src/uqm/comm src/uqm/comm/arilou src/uqm/comm/blackur src/uqm/comm/chmmr src/uqm/comm/comandr src/uqm/comm/druuge src/uqm/comm/ilwrath src/uqm/comm/melnorm src/uqm/comm/mycon src/uqm/comm/orz src/uqm/comm/pkunk src/uqm/comm/rebel src/uqm/comm/shofixt src/uqm/comm/slyhome src/uqm/comm/slyland src/uqm/comm/spahome src/uqm/comm/spathi src/uqm/comm/starbas src/uqm/comm/supox src/uqm/comm/syreen src/uqm/comm/talkpet src/uqm/comm/thradd src/uqm/comm/umgah src/uqm/comm/urquan src/uqm/comm/utwig src/uqm/comm/vux src/uqm/comm/yehat src/uqm/comm/zoqfot src/uqm/planets src/uqm/planets/generate src/uqm/ships src/uqm/ships/androsyn src/uqm/ships/arilou src/uqm/ships/blackurq src/uqm/ships/chenjesu src/uqm/ships/chmmr src/uqm/ships/druuge src/uqm/ships/human src/uqm/ships/ilwrath src/uqm/ships/lastbat src/uqm/ships/melnorme src/uqm/ships/mmrnmhrm src/uqm/ships/mycon src/uqm/ships/orz src/uqm/ships/pkunk src/uqm/ships/probe src/uqm/ships/shofixti src/uqm/ships/sis_ship src/uqm/ships/slylandr src/uqm/ships/spathi src/uqm/ships/supox src/uqm/ships/syreen src/uqm/ships/thradd src/uqm/ships/umgah src/uqm/ships/urquan src/uqm/ships/utwig src/uqm/ships/vux src/uqm/ships/yehat src/uqm/ships/zoqfot src/uqm/supermelee src/uqm/supermelee/netplay src/uqm/supermelee/netplay/proto -I/opt/devkitpro/sdl2/include/ -I/opt/devkitpro/vorbis/include/ -I/opt/devkitpro/portlibs/3ds/include/ src src/abxadec src/darwin src/getopt src/libs src/libs/callback src/libs/cdp src/libs/decomp src/libs/file src/libs/graphics src/libs/graphics/sdl src/libs/heap src/libs/input src/libs/input/sdl src/libs/list src/libs/log src/libs/math src/libs/md5 src/libs/memory src/libs/mikmod src/libs/network src/libs/network/connect src/libs/network/netmanager src/libs/network/socket src/libs/resource src/libs/sound src/libs/sound/decoders src/libs/sound/mixer src/libs/sound/mixer/nosound src/libs/sound/mixer/sdl src/libs/sound/openal src/libs/strings src/libs/task src/libs/threads src/libs/threads/pthread src/libs/threads/sdl src/libs/time src/libs/time/sdl src/libs/uio src/libs/uio/doc src/libs/uio/stdio src/libs/uio/zip src/libs/video src/regex src/res src/res/darwin src/symbian src/uqm src/uqm/comm src/uqm/comm/arilou src/uqm/comm/blackur src/uqm/comm/chmmr src/uqm/comm/comandr src/uqm/comm/druuge src/uqm/comm/ilwrath src/uqm/comm/melnorm src/uqm/comm/mycon src/uqm/comm/orz src/uqm/comm/pkunk src/uqm/comm/rebel src/uqm/comm/shofixt src/uqm/comm/slyhome src/uqm/comm/slyland src/uqm/comm/spahome src/uqm/comm/spathi src/uqm/comm/starbas src/uqm/comm/supox src/uqm/comm/syreen src/uqm/comm/talkpet src/uqm/comm/thradd src/uqm/comm/umgah src/uqm/comm/urquan src/uqm/comm/utwig src/uqm/comm/vux src/uqm/comm/yehat src/uqm/comm/zoqfot src/uqm/planets src/uqm/planets/generate src/uqm/ships src/uqm/ships/androsyn src/uqm/ships/arilou src/uqm/ships/blackurq src/uqm/ships/chenjesu src/uqm/ships/chmmr src/uqm/ships/druuge src/uqm/ships/human src/uqm/ships/ilwrath src/uqm/ships/lastbat src/uqm/ships/melnorme src/uqm/ships/mmrnmhrm src/uqm/ships/mycon src/uqm/ships/orz src/uqm/ships/pkunk src/uqm/ships/probe src/uqm/ships/shofixti src/uqm/ships/sis_ship src/uqm/ships/slylandr src/uqm/ships/spathi src/uqm/ships/supox src/uqm/ships/syreen src/uqm/ships/thradd src/uqm/ships/umgah src/uqm/ships/urquan src/uqm/ships/utwig src/uqm/ships/vux src/uqm/ships/yehat src/uqm/ships/zoqfot src/uqm/supermelee src/uqm/supermelee/netplay src/uqm/supermelee/netplay/proto 
DATA		:=	data
INCLUDES	:=	include
GRAPHICS	:=	gfx
GFXBUILD	:=	$(BUILD)
#ROMFS		:=	romfs
#GFXBUILD	:=	$(ROMFS)/gfx

INCLUDEPATH := -I/e/UQM3DS/uqm-0.8.0/src -I/e/UQM3DS/uqm-0.8.0/src/abxadec -I/e/UQM3DS/uqm-0.8.0/src/darwin -I/e/UQM3DS/uqm-0.8.0/src/getopt -I/e/UQM3DS/uqm-0.8.0/src/libs -I/e/UQM3DS/uqm-0.8.0/src/libs/callback -I/e/UQM3DS/uqm-0.8.0/src/libs/cdp -I/e/UQM3DS/uqm-0.8.0/src/libs/decomp -I/e/UQM3DS/uqm-0.8.0/src/libs/file -I/e/UQM3DS/uqm-0.8.0/src/libs/graphics -I/e/UQM3DS/uqm-0.8.0/src/libs/graphics/sdl -I/e/UQM3DS/uqm-0.8.0/src/libs/heap -I/e/UQM3DS/uqm-0.8.0/src/libs/input -I/e/UQM3DS/uqm-0.8.0/src/libs/input/sdl -I/e/UQM3DS/uqm-0.8.0/src/libs/list -I/e/UQM3DS/uqm-0.8.0/src/libs/log -I/e/UQM3DS/uqm-0.8.0/src/libs/math -I/e/UQM3DS/uqm-0.8.0/src/libs/md5 -I/e/UQM3DS/uqm-0.8.0/src/libs/memory -I/e/UQM3DS/uqm-0.8.0/src/libs/mikmod -I/e/UQM3DS/uqm-0.8.0/src/libs/network -I/e/UQM3DS/uqm-0.8.0/src/libs/network/connect -I/e/UQM3DS/uqm-0.8.0/src/libs/network/netmanager -I/e/UQM3DS/uqm-0.8.0/src/libs/network/socket -I/e/UQM3DS/uqm-0.8.0/src/libs/resource -I/e/UQM3DS/uqm-0.8.0/src/libs/sound -I/e/UQM3DS/uqm-0.8.0/src/libs/sound/decoders -I/e/UQM3DS/uqm-0.8.0/src/libs/sound/mixer -I/e/UQM3DS/uqm-0.8.0/src/libs/sound/mixer/nosound -I/e/UQM3DS/uqm-0.8.0/src/libs/sound/mixer/sdl -I/e/UQM3DS/uqm-0.8.0/src/libs/sound/openal -I/e/UQM3DS/uqm-0.8.0/src/libs/strings -I/e/UQM3DS/uqm-0.8.0/src/libs/task -I/e/UQM3DS/uqm-0.8.0/src/libs/threads -I/e/UQM3DS/uqm-0.8.0/src/libs/threads/pthread -I/e/UQM3DS/uqm-0.8.0/src/libs/threads/sdl -I/e/UQM3DS/uqm-0.8.0/src/libs/time -I/e/UQM3DS/uqm-0.8.0/src/libs/time/sdl -I/e/UQM3DS/uqm-0.8.0/src/libs/uio -I/e/UQM3DS/uqm-0.8.0/src/libs/uio/doc -I/e/UQM3DS/uqm-0.8.0/src/libs/uio/stdio -I/e/UQM3DS/uqm-0.8.0/src/libs/uio/zip -I/e/UQM3DS/uqm-0.8.0/src/libs/video -I/e/UQM3DS/uqm-0.8.0/src/regex -I/e/UQM3DS/uqm-0.8.0/src/res -I/e/UQM3DS/uqm-0.8.0/src/res/darwin -I/e/UQM3DS/uqm-0.8.0/src/symbian -I/e/UQM3DS/uqm-0.8.0/src/uqm -I/e/UQM3DS/uqm-0.8.0/src/uqm/comm -I/e/UQM3DS/uqm-0.8.0/src/uqm/planets -I/e/UQM3DS/uqm-0.8.0/src/uqm/planets/generate -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/androsyn -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/arilou -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/blackurq -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/chenjesu -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/chmmr -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/druuge -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/human -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/ilwrath -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/lastbat -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/melnorme -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/mmrnmhrm -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/mycon -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/orz -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/pkunk -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/probe -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/shofixti -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/sis_ship -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/slylandr -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/spathi -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/supox -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/syreen -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/thradd -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/umgah -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/urquan -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/utwig -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/vux -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/yehat -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/zoqfot -I/e/UQM3DS/uqm-0.8.0/src/uqm/supermelee -I/e/UQM3DS/uqm-0.8.0/src/uqm/supermelee/netplay -I/e/UQM3DS/uqm-0.8.0/src/uqm/supermelee/netplay/proto -I/opt/devkitpro/sdl2/include/ -I/opt/devkitpro/vorbis/include/ -I/opt/devkitpro/portlibs/3ds/include/ -I/e/UQM3DS/uqm-0.8.0/src -I/e/UQM3DS/uqm-0.8.0/src/abxadec -I/e/UQM3DS/uqm-0.8.0/src/darwin -I/e/UQM3DS/uqm-0.8.0/src/getopt -I/e/UQM3DS/uqm-0.8.0/src/libs -I/e/UQM3DS/uqm-0.8.0/src/libs/callback -I/e/UQM3DS/uqm-0.8.0/src/libs/cdp -I/e/UQM3DS/uqm-0.8.0/src/libs/decomp -I/e/UQM3DS/uqm-0.8.0/src/libs/file -I/e/UQM3DS/uqm-0.8.0/src/libs/graphics -I/e/UQM3DS/uqm-0.8.0/src/libs/graphics/sdl -I/e/UQM3DS/uqm-0.8.0/src/libs/heap -I/e/UQM3DS/uqm-0.8.0/src/libs/input -I/e/UQM3DS/uqm-0.8.0/src/libs/input/sdl -I/e/UQM3DS/uqm-0.8.0/src/libs/list -I/e/UQM3DS/uqm-0.8.0/src/libs/log -I/e/UQM3DS/uqm-0.8.0/src/libs/math -I/e/UQM3DS/uqm-0.8.0/src/libs/md5 -I/e/UQM3DS/uqm-0.8.0/src/libs/memory -I/e/UQM3DS/uqm-0.8.0/src/libs/mikmod -I/e/UQM3DS/uqm-0.8.0/src/libs/network -I/e/UQM3DS/uqm-0.8.0/src/libs/network/connect -I/e/UQM3DS/uqm-0.8.0/src/libs/network/netmanager -I/e/UQM3DS/uqm-0.8.0/src/libs/network/socket -I/e/UQM3DS/uqm-0.8.0/src/libs/resource -I/e/UQM3DS/uqm-0.8.0/src/libs/sound -I/e/UQM3DS/uqm-0.8.0/src/libs/sound/decoders -I/e/UQM3DS/uqm-0.8.0/src/libs/sound/mixer -I/e/UQM3DS/uqm-0.8.0/src/libs/sound/mixer/nosound -I/e/UQM3DS/uqm-0.8.0/src/libs/sound/mixer/sdl -I/e/UQM3DS/uqm-0.8.0/src/libs/sound/openal -I/e/UQM3DS/uqm-0.8.0/src/libs/strings -I/e/UQM3DS/uqm-0.8.0/src/libs/task -I/e/UQM3DS/uqm-0.8.0/src/libs/threads -I/e/UQM3DS/uqm-0.8.0/src/libs/threads/pthread -I/e/UQM3DS/uqm-0.8.0/src/libs/threads/sdl -I/e/UQM3DS/uqm-0.8.0/src/libs/time -I/e/UQM3DS/uqm-0.8.0/src/libs/time/sdl -I/e/UQM3DS/uqm-0.8.0/src/libs/uio -I/e/UQM3DS/uqm-0.8.0/src/libs/uio/doc -I/e/UQM3DS/uqm-0.8.0/src/libs/uio/stdio -I/e/UQM3DS/uqm-0.8.0/src/libs/uio/zip -I/e/UQM3DS/uqm-0.8.0/src/libs/video -I/e/UQM3DS/uqm-0.8.0/src/regex -I/e/UQM3DS/uqm-0.8.0/src/res -I/e/UQM3DS/uqm-0.8.0/src/res/darwin -I/e/UQM3DS/uqm-0.8.0/src/symbian -I/e/UQM3DS/uqm-0.8.0/src/uqm -I/e/UQM3DS/uqm-0.8.0/src/uqm/comm -I/e/UQM3DS/uqm-0.8.0/src/uqm/planets -I/e/UQM3DS/uqm-0.8.0/src/uqm/planets/generate -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/androsyn -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/arilou -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/blackurq -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/chenjesu -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/chmmr -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/druuge -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/human -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/ilwrath -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/lastbat -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/melnorme -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/mmrnmhrm -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/mycon -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/orz -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/pkunk -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/probe -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/shofixti -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/sis_ship -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/slylandr -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/spathi -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/supox -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/syreen -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/thradd -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/umgah -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/urquan -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/utwig -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/vux -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/yehat -I/e/UQM3DS/uqm-0.8.0/src/uqm/ships/zoqfot -I/e/UQM3DS/uqm-0.8.0/src/uqm/supermelee -I/e/UQM3DS/uqm-0.8.0/src/uqm/supermelee/netplay -I/e/UQM3DS/uqm-0.8.0/src/uqm/supermelee/netplay/proto 
INCLUDEPATH += -I$(DEVKITPRO)/sdl2/include/ -I$(DEVKITPRO)/vorbis/include/ -I$(DEVKITPRO)/portlibs/3ds/include/
INCLUDEPATH += -I$(DEVKITARM)arm-none-eabi/include/

#---------------------------------------------------------------------------------
# options for code generation
#---------------------------------------------------------------------------------
ARCH	:=	-march=armv6k -mtune=mpcore -mfloat-abi=hard -mtp=soft

CFLAGS	:=	-g -Wall -O2 -mword-relocations \
			-ffunction-sections \
			$(ARCH)

DEFINES := -D __N3DS__ -D HAVE_MEMORY_H -D HAVE_CONFIG_H -D HAVE_UNISTD_H -D THREADLIB_SDL -D SDL_AUDIO_DRIVER_N3DS

CFLAGS	+=	$(INCLUDE) $(INCLUDEPATH) -D__3DS__ $(DEFINES)

CXXFLAGS	:= $(CFLAGS) -fno-rtti -fno-exceptions -std=gnu++11

ASFLAGS	:=	-g $(ARCH)
LDFLAGS	=	-z muldefs -specs=3dsx.specs -g $(ARCH) -Wl,-Map,$(notdir $*.map)

LIBS	:= -lSDL -logg -lvorbis -lcitro3d -lctru -lm -lm -lc -L$(DEVKITPRO)/portlibs/3ds/lib/ -L$(DEVKITPRO)/vorbis/lib/

#---------------------------------------------------------------------------------
# list of directories containing libraries, this must be the top level containing
# include and lib
#---------------------------------------------------------------------------------
LIBDIRS	:= $(CTRULIB)

#---------------------------------------------------------------------------------
# no real need to edit anything past this point unless you need to add additional
# rules for different file extensions
#---------------------------------------------------------------------------------
ifneq ($(BUILD),$(notdir $(CURDIR)))
#---------------------------------------------------------------------------------

export OUTPUT	:=	$(CURDIR)/$(TARGET)
export TOPDIR	:=	$(CURDIR)

export VPATH	:=	$(foreach dir,$(SOURCES),$(CURDIR)/$(dir)) \
			$(foreach dir,$(GRAPHICS),$(CURDIR)/$(dir)) \
			$(foreach dir,$(DATA),$(CURDIR)/$(dir))

export DEPSDIR	:=	$(CURDIR)/$(BUILD)

CFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.c)))
CPPFILES	:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.cpp)))
SFILES		:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.s)))
PICAFILES	:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.v.pica)))
SHLISTFILES	:=	$(foreach dir,$(SOURCES),$(notdir $(wildcard $(dir)/*.shlist)))
GFXFILES	:=	$(foreach dir,$(GRAPHICS),$(notdir $(wildcard $(dir)/*.t3s)))
BINFILES	:=	$(foreach dir,$(DATA),$(notdir $(wildcard $(dir)/*.*)))

#---------------------------------------------------------------------------------
# use CXX for linking C++ projects, CC for standard C
#---------------------------------------------------------------------------------
ifeq ($(strip $(CPPFILES)),)
#---------------------------------------------------------------------------------
	export LD	:=	$(CC)
#---------------------------------------------------------------------------------
else
#---------------------------------------------------------------------------------
	export LD	:=	$(CXX)
#---------------------------------------------------------------------------------
endif
#---------------------------------------------------------------------------------

#---------------------------------------------------------------------------------
ifeq ($(GFXBUILD),$(BUILD))
#---------------------------------------------------------------------------------
export T3XFILES :=  $(GFXFILES:.t3s=.t3x)
#---------------------------------------------------------------------------------
else
#---------------------------------------------------------------------------------
export ROMFS_T3XFILES	:=	$(patsubst %.t3s, $(GFXBUILD)/%.t3x, $(GFXFILES))
export T3XHFILES		:=	$(patsubst %.t3s, $(BUILD)/%.h, $(GFXFILES))
#---------------------------------------------------------------------------------
endif
#---------------------------------------------------------------------------------

export OFILES_SOURCES 	:=	$(CPPFILES:.cpp=.o) $(CFILES:.c=.o) $(SFILES:.s=.o)

export OFILES_BIN	:=	$(addsuffix .o,$(BINFILES)) \
			$(PICAFILES:.v.pica=.shbin.o) $(SHLISTFILES:.shlist=.shbin.o) \
			$(addsuffix .o,$(T3XFILES))

export OFILES := $(OFILES_BIN) $(OFILES_SOURCES)

export HFILES	:=	$(PICAFILES:.v.pica=_shbin.h) $(SHLISTFILES:.shlist=_shbin.h) \
			$(addsuffix .h,$(subst .,_,$(BINFILES))) \
			$(GFXFILES:.t3s=.h)

export INCLUDE	:=	$(foreach dir,$(INCLUDES),-I$(CURDIR)/$(dir)) \
			$(foreach dir,$(LIBDIRS),-I$(dir)/include) \
			-I$(CURDIR)/$(BUILD)

export LIBPATHS	:=	$(foreach dir,$(LIBDIRS),-L$(dir)/lib)

export _3DSXDEPS	:=	$(if $(NO_SMDH),,$(OUTPUT).smdh)

ifeq ($(strip $(ICON)),)
	icons := $(wildcard *.png)
	ifneq (,$(findstring $(TARGET).png,$(icons)))
		export APP_ICON := $(TOPDIR)/$(TARGET).png
	else
		ifneq (,$(findstring icon.png,$(icons)))
			export APP_ICON := $(TOPDIR)/icon.png
		endif
	endif
else
	export APP_ICON := $(TOPDIR)/$(ICON)
endif

ifeq ($(strip $(NO_SMDH)),)
	export _3DSXFLAGS += --smdh=$(CURDIR)/$(TARGET).smdh
endif

ifneq ($(ROMFS),)
	export _3DSXFLAGS += --romfs=$(CURDIR)/$(ROMFS)
endif

.PHONY: all clean

#---------------------------------------------------------------------------------
all: $(BUILD) $(GFXBUILD) $(DEPSDIR) $(ROMFS_T3XFILES) $(T3XHFILES)
	@$(MAKE) --no-print-directory -C $(BUILD) -f $(CURDIR)/Makefile

$(BUILD):
	@mkdir -p $@

ifneq ($(GFXBUILD),$(BUILD))
$(GFXBUILD):
	@mkdir -p $@
endif

ifneq ($(DEPSDIR),$(BUILD))
$(DEPSDIR):
	@mkdir -p $@
endif

#---------------------------------------------------------------------------------
clean:
	@echo clean ...
	@rm -fr $(BUILD) $(TARGET).3dsx $(OUTPUT).smdh $(TARGET).elf $(GFXBUILD)

#---------------------------------------------------------------------------------
$(GFXBUILD)/%.t3x	$(BUILD)/%.h	:	%.t3s
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@tex3ds -i $< -H $(BUILD)/$*.h -d $(DEPSDIR)/$*.d -o $(GFXBUILD)/$*.t3x

#---------------------------------------------------------------------------------
else

#---------------------------------------------------------------------------------
# main targets
#---------------------------------------------------------------------------------
$(OUTPUT).3dsx	:	$(OUTPUT).elf $(_3DSXDEPS)

$(OFILES_SOURCES) : $(HFILES)

$(OUTPUT).elf	:	$(OFILES)

#---------------------------------------------------------------------------------
# you need a rule like this for each extension you use as binary data
#---------------------------------------------------------------------------------
%.bin.o	%_bin.h :	%.bin
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@$(bin2o)

#---------------------------------------------------------------------------------
.PRECIOUS	:	%.t3x
#---------------------------------------------------------------------------------
%.t3x.o	%_t3x.h :	%.t3x
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@$(bin2o)

#---------------------------------------------------------------------------------
# rules for assembling GPU shaders
#---------------------------------------------------------------------------------
define shader-as
	$(eval CURBIN := $*.shbin)
	$(eval DEPSFILE := $(DEPSDIR)/$*.shbin.d)
	echo "$(CURBIN).o: $< $1" > $(DEPSFILE)
	echo "extern const u8" `(echo $(CURBIN) | sed -e 's/^\([0-9]\)/_\1/' | tr . _)`"_end[];" > `(echo $(CURBIN) | tr . _)`.h
	echo "extern const u8" `(echo $(CURBIN) | sed -e 's/^\([0-9]\)/_\1/' | tr . _)`"[];" >> `(echo $(CURBIN) | tr . _)`.h
	echo "extern const u32" `(echo $(CURBIN) | sed -e 's/^\([0-9]\)/_\1/' | tr . _)`_size";" >> `(echo $(CURBIN) | tr . _)`.h
	picasso -o $(CURBIN) $1
	bin2s $(CURBIN) | $(AS) -o $*.shbin.o
endef

%.shbin.o %_shbin.h : %.v.pica %.g.pica
	@echo $(notdir $^)
	@$(call shader-as,$^)

%.shbin.o %_shbin.h : %.v.pica
	@echo $(notdir $<)
	@$(call shader-as,$<)

%.shbin.o %_shbin.h : %.shlist
	@echo $(notdir $<)
	@$(call shader-as,$(foreach file,$(shell cat $<),$(dir $<)$(file)))

#---------------------------------------------------------------------------------
%.t3x	%.h	:	%.t3s
#---------------------------------------------------------------------------------
	@echo $(notdir $<)
	@tex3ds -i $< -H $*.h -d $*.d -o $*.t3x

-include $(DEPSDIR)/*.d

#---------------------------------------------------------------------------------------
endif
#---------------------------------------------------------------------------------------