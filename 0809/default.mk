# GNU Make 3.81
# Copyright (C) 2006  Free Software Foundation, Inc.
# This is free software; see the source for copying conditions.
# There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.

#  这个程序创建为 i486-pc-linux-gnu
gcc -c sub_add.c

# Make数据库，显示于 Fri Aug  9 14:14:44 2013

# 变量

# 自动
<D = $(patsubst %/,%,$(dir $<))
# 自动
?F = $(notdir $?)
# 环境
DESKTOP_SESSION = gnome
# 默认
CWEAVE = cweave
# 自动
?D = $(patsubst %/,%,$(dir $?))
# 自动
@D = $(patsubst %/,%,$(dir $@))
# 环境
XAUTHORITY = /var/run/gdm/auth-for-akaedu-Z7LLqd/database
# 环境
GDMSESSION = gnome
# 环境
XMODIFIERS = @im=ibus
# makefile
CURDIR := /home/akaedu/chengxu/0809
# makefile
SHELL = /bin/sh
# 默认
RM = rm -f
# 环境
GDM_LANG = zh_CN.utf8
# 环境
_ = /usr/bin/make
# 默认
PREPROCESS.F = $(FC) $(FFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -F
# 环境
XDG_CONFIG_DIRS = /etc/xdg/xdg-gnome:/etc/xdg
# 默认
OUTPUT_OPTION = -o $@
# 默认
COMPILE.cpp = $(COMPILE.cc)
# makefile (从'Makefile'，行 1)
MAKEFILE_LIST :=  Makefile
# 自动
@F = $(notdir $@)
# 环境
USERNAME = akaedu
# 默认
LINK.p = $(PC) $(PFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 环境
MANDATORY_PATH = /usr/share/gconf/gnome.mandatory.path
# 环境
XDG_DATA_DIRS = /usr/share/gnome:/usr/local/share/:/usr/share/
# 环境
DBUS_SESSION_BUS_ADDRESS = unix:abstract=/tmp/dbus-5hPcJ6PHxk,guid=d08d461f1f1f974c78ef7424520434f4
# 默认
CC = cc
# 默认
CHECKOUT,v = +$(if $(wildcard $@),,$(CO) $(COFLAGS) $< $@)
# 环境
LESSOPEN = | /usr/bin/lesspipe %s
# 默认
CPP = $(CC) -E
# 环境
ORBIT_SOCKETDIR = /tmp/orbit-akaedu
# 默认
LINK.cc = $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 默认
LEX = lex
# 环境
PATH = /home/akaedu/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/home/akaedu/crosstool/opt/FriendlyARM/toolschain/4.5.1/bin
# 默认
LD = ld
# 默认
TEXI2DVI = texi2dvi
# 默认
YACC = yacc
# 环境
SESSION_MANAGER = local/akaedu-desktop:@/tmp/.ICE-unix/1361,unix/akaedu-desktop:/tmp/.ICE-unix/1361
# 默认
COMPILE.mod = $(M2C) $(M2FLAGS) $(MODFLAGS) $(TARGET_ARCH)
# 默认
ARFLAGS = rv
# 默认
LINK.r = $(FC) $(FFLAGS) $(RFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 环境
WINDOWID = 69206021
# 默认
COMPILE.f = $(FC) $(FFLAGS) $(TARGET_ARCH) -c
# 默认
LINT.c = $(LINT) $(LINTFLAGS) $(CPPFLAGS) $(TARGET_ARCH)
# 默认
LINT = lint
# 默认
YACC.y = $(YACC) $(YFLAGS)
# 默认
AR = ar
# 默认
.FEATURES := target-specific order-only second-expansion else-if archives jobserver check-symlink
# 默认
TANGLE = tangle
# 环境
LS_COLORS = rs=0:di=01;34:ln=01;36:hl=44;37:pi=40;33:so=01;35:do=01;35:bd=40;33;01:cd=40;33;01:or=40;31;01:su=37;41:sg=30;43:ca=30;41:tw=30;42:ow=34;42:st=37;44:ex=01;32:*.tar=01;31:*.tgz=01;31:*.arj=01;31:*.taz=01;31:*.lzh=01;31:*.lzma=01;31:*.zip=01;31:*.z=01;31:*.Z=01;31:*.dz=01;31:*.gz=01;31:*.bz2=01;31:*.bz=01;31:*.tbz2=01;31:*.tz=01;31:*.deb=01;31:*.rpm=01;31:*.jar=01;31:*.rar=01;31:*.ace=01;31:*.zoo=01;31:*.cpio=01;31:*.7z=01;31:*.rz=01;31:*.jpg=01;35:*.jpeg=01;35:*.gif=01;35:*.bmp=01;35:*.pbm=01;35:*.pgm=01;35:*.ppm=01;35:*.tga=01;35:*.xbm=01;35:*.xpm=01;35:*.tif=01;35:*.tiff=01;35:*.png=01;35:*.svg=01;35:*.svgz=01;35:*.mng=01;35:*.pcx=01;35:*.mov=01;35:*.mpg=01;35:*.mpeg=01;35:*.m2v=01;35:*.mkv=01;35:*.ogm=01;35:*.mp4=01;35:*.m4v=01;35:*.mp4v=01;35:*.vob=01;35:*.qt=01;35:*.nuv=01;35:*.wmv=01;35:*.asf=01;35:*.rm=01;35:*.rmvb=01;35:*.flc=01;35:*.avi=01;35:*.fli=01;35:*.flv=01;35:*.gl=01;35:*.dl=01;35:*.xcf=01;35:*.xwd=01;35:*.yuv=01;35:*.axv=01;35:*.anx=01;35:*.ogv=01;35:*.ogx=01;35:*.aac=00;36:*.au=00;36:*.flac=00;36:*.mid=00;36:*.midi=00;36:*.mka=00;36:*.mp3=00;36:*.mpc=00;36:*.ogg=00;36:*.ra=00;36:*.wav=00;36:*.axa=00;36:*.oga=00;36:*.spx=00;36:*.xspf=00;36:
# 环境
SSH_AUTH_SOCK = /tmp/keyring-KFWjNE/ssh
# 默认
GET = get
# 自动
%F = $(notdir $%)
# 环境
DISPLAY = :0.0
# 默认
COMPILE.F = $(FC) $(FFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
# 默认
CTANGLE = ctangle
# 环境
GTK_IM_MODULE = ibus
# 默认
.LIBPATTERNS = lib%.so lib%.a
# 默认
LINK.C = $(LINK.cc)
# 环境
PWD = /home/akaedu/chengxu/0809
# 默认
LINK.S = $(CC) $(ASFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_MACH)
# 默认
PREPROCESS.r = $(FC) $(FFLAGS) $(RFLAGS) $(TARGET_ARCH) -F
# 环境
SSH_AGENT_PID = 1396
# 默认
LINK.c = $(CC) $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 环境
GTK_MODULES = canberra-gtk-module
# 默认
LINK.s = $(CC) $(ASFLAGS) $(LDFLAGS) $(TARGET_MACH)
# 环境
HOME = /home/akaedu
# 环境
XDG_SESSION_COOKIE = 35af84cebb495b103f2050ac4df6eff8-1376007411.505717-92447656
# 环境
LOGNAME = akaedu
# 环境
GDM_KEYBOARD_LAYOUT = us
# 环境
LESSCLOSE = /usr/bin/lesspipe %s %s
# 默认
CO = co
# 环境
GNOME_DESKTOP_SESSION_ID = this-is-deprecated
# 自动
^D = $(patsubst %/,%,$(dir $^))
# 环境
COLORTERM = gnome-terminal
# 默认
MAKE = $(MAKE_COMMAND)
# 环境
QT_IM_MODULE = ibus
# 环境
SHLVL = 1
# 默认
AS = as
# 默认
PREPROCESS.S = $(CC) -E $(CPPFLAGS)
# 默认
COMPILE.p = $(PC) $(PFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
# 默认
MAKE_VERSION := 3.81
# 环境
USER = akaedu
# 默认
FC = f77
# makefile
.DEFAULT_GOAL := all
# 自动
%D = $(patsubst %/,%,$(dir $%))
# 环境
GNOME_KEYRING_PID = 1343
# 默认
WEAVE = weave
# 默认
MAKE_COMMAND := make
# 默认
LINK.cpp = $(LINK.cc)
# 默认
F77 = $(FC)
# 环境
OLDPWD = /home/akaedu/chengxu
# 默认
.VARIABLES := 
# 默认
PC = pc
# 自动
*F = $(notdir $*)
# 环境
LANGUAGE = zh_CN:zh
# 默认
COMPILE.def = $(M2C) $(M2FLAGS) $(DEFFLAGS) $(TARGET_ARCH)
# 环境
GNOME_KEYRING_CONTROL = /tmp/keyring-KFWjNE
# makefile
MAKEFLAGS = p
# 环境
MFLAGS = -p
# 自动
*D = $(patsubst %/,%,$(dir $*))
# 默认
LEX.l = $(LEX) $(LFLAGS) -t
# 自动
+D = $(patsubst %/,%,$(dir $+))
# 默认
COMPILE.r = $(FC) $(FFLAGS) $(RFLAGS) $(TARGET_ARCH) -c
# 自动
+F = $(notdir $+)
# 默认
M2C = m2c
# 环境
DEFAULTS_PATH = /usr/share/gconf/gnome.default.path
# 默认
MAKEFILES := 
# 默认
COMPILE.cc = $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
# 自动
<F = $(notdir $<)
# 默认
CXX = g++
# 默认
COFLAGS = 
# 默认
COMPILE.C = $(COMPILE.cc)
# 自动
^F = $(notdir $^)
# 默认
COMPILE.S = $(CC) $(ASFLAGS) $(CPPFLAGS) $(TARGET_MACH) -c
# 默认
LINK.F = $(FC) $(FFLAGS) $(CPPFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 默认
SUFFIXES := .out .a .ln .o .c .cc .C .cpp .p .f .F .r .y .l .s .S .mod .sym .def .h .info .dvi .tex .texinfo .texi .txinfo .w .ch .web .sh .elc .el
# 默认
COMPILE.c = $(CC) $(CFLAGS) $(CPPFLAGS) $(TARGET_ARCH) -c
# 环境
SPEECHD_PORT = 7560
# 默认
COMPILE.s = $(AS) $(ASFLAGS) $(TARGET_MACH)
# 默认
.INCLUDE_DIRS = /usr/include /usr/local/include /usr/include
# 环境
MAKELEVEL := 0
# 默认
MAKEINFO = makeinfo
# 默认
LINK.f = $(FC) $(FFLAGS) $(LDFLAGS) $(TARGET_ARCH)
# 默认
TEX = tex
# 环境
LANG = zh_CN.utf8
# 环境
TERM = xterm
# 默认
F77FLAGS = $(FFLAGS)
# 默认
LINK.o = $(CC) $(LDFLAGS) $(TARGET_ARCH)
# 变量设置哈希表状态：
# 负载=128/1024=12%, Rehash=0, 冲突=14/157=9%

# Pattern-specific Variable Values

# 没有 pattern-specific 变量的值。

# 目录

# SCCS：无法对其进行 stat 操作。
# . (设备 2057，i-节点 3410399)： 16 文件， 20 不可能性.
# RCS：无法对其进行 stat 操作。

# 16 文件， 20 impossibilities in 3 directories.

# 隐含规则

%.out:

%.a:

%.ln:

%.o:

%: %.o
#  要执行的命令 (内置)：
	$(LINK.o) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.c:

%: %.c
#  要执行的命令 (内置)：
	$(LINK.c) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.ln: %.c
#  要执行的命令 (内置)：
	$(LINT.c) -C$* $<

%.o: %.c
#  要执行的命令 (内置)：
	$(COMPILE.c) $(OUTPUT_OPTION) $<

%.cc:

%: %.cc
#  要执行的命令 (内置)：
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.o: %.cc
#  要执行的命令 (内置)：
	$(COMPILE.cc) $(OUTPUT_OPTION) $<

%.C:

%: %.C
#  要执行的命令 (内置)：
	$(LINK.C) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.o: %.C
#  要执行的命令 (内置)：
	$(COMPILE.C) $(OUTPUT_OPTION) $<

%.cpp:

%: %.cpp
#  要执行的命令 (内置)：
	$(LINK.cpp) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.o: %.cpp
#  要执行的命令 (内置)：
	$(COMPILE.cpp) $(OUTPUT_OPTION) $<

%.p:

%: %.p
#  要执行的命令 (内置)：
	$(LINK.p) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.o: %.p
#  要执行的命令 (内置)：
	$(COMPILE.p) $(OUTPUT_OPTION) $<

%.f:

%: %.f
#  要执行的命令 (内置)：
	$(LINK.f) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.o: %.f
#  要执行的命令 (内置)：
	$(COMPILE.f) $(OUTPUT_OPTION) $<

%.F:

%: %.F
#  要执行的命令 (内置)：
	$(LINK.F) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.o: %.F
#  要执行的命令 (内置)：
	$(COMPILE.F) $(OUTPUT_OPTION) $<

%.f: %.F
#  要执行的命令 (内置)：
	$(PREPROCESS.F) $(OUTPUT_OPTION) $<

%.r:

%: %.r
#  要执行的命令 (内置)：
	$(LINK.r) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.o: %.r
#  要执行的命令 (内置)：
	$(COMPILE.r) $(OUTPUT_OPTION) $<

%.f: %.r
#  要执行的命令 (内置)：
	$(PREPROCESS.r) $(OUTPUT_OPTION) $<

%.y:

%.ln: %.y
#  要执行的命令 (内置)：
	$(YACC.y) $< 
	$(LINT.c) -C$* y.tab.c 
	$(RM) y.tab.c

%.c: %.y
#  要执行的命令 (内置)：
	$(YACC.y) $< 
	mv -f y.tab.c $@

%.l:

%.ln: %.l
#  要执行的命令 (内置)：
	@$(RM) $*.c
	$(LEX.l) $< > $*.c
	$(LINT.c) -i $*.c -o $@
	$(RM) $*.c

%.c: %.l
#  要执行的命令 (内置)：
	@$(RM) $@ 
	$(LEX.l) $< > $@

%.r: %.l
#  要执行的命令 (内置)：
	$(LEX.l) $< > $@ 
	mv -f lex.yy.r $@

%.s:

%: %.s
#  要执行的命令 (内置)：
	$(LINK.s) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.o: %.s
#  要执行的命令 (内置)：
	$(COMPILE.s) -o $@ $<

%.S:

%: %.S
#  要执行的命令 (内置)：
	$(LINK.S) $^ $(LOADLIBES) $(LDLIBS) -o $@

%.o: %.S
#  要执行的命令 (内置)：
	$(COMPILE.S) -o $@ $<

%.s: %.S
#  要执行的命令 (内置)：
	$(PREPROCESS.S) $< > $@

%.mod:

%: %.mod
#  要执行的命令 (内置)：
	$(COMPILE.mod) -o $@ -e $@ $^

%.o: %.mod
#  要执行的命令 (内置)：
	$(COMPILE.mod) -o $@ $<

%.sym:

%.def:

%.sym: %.def
#  要执行的命令 (内置)：
	$(COMPILE.def) -o $@ $<

%.h:

%.info:

%.dvi:

%.tex:

%.dvi: %.tex
#  要执行的命令 (内置)：
	$(TEX) $<

%.texinfo:

%.info: %.texinfo
#  要执行的命令 (内置)：
	$(MAKEINFO) $(MAKEINFO_FLAGS) $< -o $@

%.dvi: %.texinfo
#  要执行的命令 (内置)：
	$(TEXI2DVI) $(TEXI2DVI_FLAGS) $<

%.texi:

%.info: %.texi
#  要执行的命令 (内置)：
	$(MAKEINFO) $(MAKEINFO_FLAGS) $< -o $@

%.dvi: %.texi
#  要执行的命令 (内置)：
	$(TEXI2DVI) $(TEXI2DVI_FLAGS) $<

%.txinfo:

%.info: %.txinfo
#  要执行的命令 (内置)：
	$(MAKEINFO) $(MAKEINFO_FLAGS) $< -o $@

%.dvi: %.txinfo
#  要执行的命令 (内置)：
	$(TEXI2DVI) $(TEXI2DVI_FLAGS) $<

%.w:

%.c: %.w
#  要执行的命令 (内置)：
	$(CTANGLE) $< - $@

%.tex: %.w
#  要执行的命令 (内置)：
	$(CWEAVE) $< - $@

%.ch:

%.web:

%.p: %.web
#  要执行的命令 (内置)：
	$(TANGLE) $<

%.tex: %.web
#  要执行的命令 (内置)：
	$(WEAVE) $<

%.sh:

%: %.sh
#  要执行的命令 (内置)：
	cat $< >$@ 
	chmod a+x $@

%.elc:

%.el:

(%): %
#  要执行的命令 (内置)：
	$(AR) $(ARFLAGS) $@ $<

%.out: %
#  要执行的命令 (内置)：
	@rm -f $@ 
	cp $< $@

%.c: %.w %.ch
#  要执行的命令 (内置)：
	$(CTANGLE) $^ $@

%.tex: %.w %.ch
#  要执行的命令 (内置)：
	$(CWEAVE) $^ $@

%:: %,v
#  要执行的命令 (内置)：
	$(CHECKOUT,v)

%:: RCS/%,v
#  要执行的命令 (内置)：
	$(CHECKOUT,v)

%:: RCS/%
#  要执行的命令 (内置)：
	$(CHECKOUT,v)

%:: s.%
#  要执行的命令 (内置)：
	$(GET) $(GFLAGS) $(SCCS_OUTPUT_OPTION) $<

%:: SCCS/s.%
#  要执行的命令 (内置)：
	$(GET) $(GFLAGS) $(SCCS_OUTPUT_OPTION) $<

# 86 条隐含规则，5 (5.8%) 终端。

# 文件

# 不是一个目标：
.web.p:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(TANGLE) $<

# 不是一个目标：
.l.r:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LEX.l) $< > $@ 
	mv -f lex.yy.r $@

# 不是一个目标：
.dvi:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.F.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.F) $(OUTPUT_OPTION) $<

all: main
#  对隐含规则的搜索尚未完成。
#  文件不存在。
#  文件尚未被更新。
# 变量设置哈希表状态：
# 负载=0/32=0%, Rehash=0, 冲突=0/2=0%
#  要执行的命令 (从“Makefile”，行 2)：
	echo ok, finished!
	

# 不是一个目标：
.y.ln:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(YACC.y) $< 
	$(LINT.c) -C$* y.tab.c 
	$(RM) y.tab.c

# 不是一个目标：
.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.o) $^ $(LOADLIBES) $(LDLIBS) -o $@

# 不是一个目标：
.y:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.def.sym:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.def) -o $@ $<

.PHONY: clean
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.p.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.p) $(OUTPUT_OPTION) $<

# 不是一个目标：
.p:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.p) $^ $(LOADLIBES) $(LDLIBS) -o $@

# 不是一个目标：
.txinfo.dvi:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(TEXI2DVI) $(TEXI2DVI_FLAGS) $<

sub.o: sub.c
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (从“Makefile”，行 14)：
	gcc -c sub.c
	

# 不是一个目标：
.a:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

add.o: add.c
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (从“Makefile”，行 11)：
	gcc -c add.c
	

# 不是一个目标：
.l.ln:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	@$(RM) $*.c
	$(LEX.l) $< > $*.c
	$(LINT.c) -i $*.c -o $@
	$(RM) $*.c

# 不是一个目标：
.w.c:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(CTANGLE) $< - $@

# 不是一个目标：
.texi.dvi:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(TEXI2DVI) $(TEXI2DVI_FLAGS) $<

# 不是一个目标：
.sh:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	cat $< >$@ 
	chmod a+x $@

# 不是一个目标：
.cc:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.cc) $^ $(LOADLIBES) $(LDLIBS) -o $@

# 不是一个目标：
.cc.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.cc) $(OUTPUT_OPTION) $<

# 不是一个目标：
.def:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.SUFFIXES: .out .a .ln .o .c .cc .C .cpp .p .f .F .r .y .l .s .S .mod .sym .def .h .info .dvi .tex .texinfo .texi .txinfo .w .ch .web .sh .elc .el
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.c.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.c) $(OUTPUT_OPTION) $<

# 不是一个目标：
Makefile:
#  对隐含规则的搜索已完成。
#  最近更新 2013-08-09 13:09:00.151896158
#  文件已经被更新。
#  更新成功。
# 变量设置哈希表状态：
# 负载=0/32=0%, Rehash=0, 冲突=0/0=0%

# 不是一个目标：
.r.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.r) $(OUTPUT_OPTION) $<

# 不是一个目标：
.r:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.r) $^ $(LOADLIBES) $(LDLIBS) -o $@

# 不是一个目标：
.info:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.elc:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.l.c:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	@$(RM) $@ 
	$(LEX.l) $< > $@

# 不是一个目标：
.out:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

sub_add.o: sub_add.c
#  对隐含规则的搜索尚未完成。
#  隐含/静态模式主干：“sub_add”
#  从不检查修改时间。
#  文件已经被更新。
#  更新失败。
# 自动
# @ := sub_add.o
# 自动
# % := 
# 自动
# * := sub_add
# 自动
# + := sub_add.c
# 自动
# | := 
# 自动
# < := sub_add.c
# 自动
# ^ := sub_add.c
# 自动
# ? := sub_add.c
# 变量设置哈希表状态：
# 负载=8/32=25%, Rehash=0, 冲突=1/10=10%
#  要执行的命令 (从“Makefile”，行 8)：
	gcc -c sub_add.c
	

# 不是一个目标：
.C:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.C) $^ $(LOADLIBES) $(LDLIBS) -o $@

# 不是一个目标：
.r.f:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(PREPROCESS.r) $(OUTPUT_OPTION) $<

# 不是一个目标：
.S:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.S) $^ $(LOADLIBES) $(LDLIBS) -o $@

# 不是一个目标：
.texinfo.info:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(MAKEINFO) $(MAKEINFO_FLAGS) $< -o $@

# 不是一个目标：
.c:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.c) $^ $(LOADLIBES) $(LDLIBS) -o $@

# 不是一个目标：
.w.tex:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(CWEAVE) $< - $@

# 不是一个目标：
.c.ln:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINT.c) -C$* $<

# 不是一个目标：
.s.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.s) -o $@ $<

# 不是一个目标：
.s:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.s) $^ $(LOADLIBES) $(LDLIBS) -o $@

# 不是一个目标：
sub.c:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
add.c:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.texinfo.dvi:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(TEXI2DVI) $(TEXI2DVI_FLAGS) $<

# 不是一个目标：
.el:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.texinfo:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.y.c:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(YACC.y) $< 
	mv -f y.tab.c $@

# 不是一个目标：
.web.tex:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(WEAVE) $<

# 不是一个目标：
.texi.info:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(MAKEINFO) $(MAKEINFO_FLAGS) $< -o $@

# 不是一个目标：
.DEFAULT:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.h:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.tex.dvi:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(TEX) $<

# 不是一个目标：
.cpp.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.cpp) $(OUTPUT_OPTION) $<

# 不是一个目标：
.cpp:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.cpp) $^ $(LOADLIBES) $(LDLIBS) -o $@

clean:
#  Phony target (prerequisite of .PHONY).
#  对隐含规则的搜索尚未完成。
#  文件不存在。
#  文件尚未被更新。
#  要执行的命令 (从“Makefile”，行 18)：
	rm ./a.out
	rm *.o
	rm main
	@echo clean ok
	

# 不是一个目标：
.C.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.C) $(OUTPUT_OPTION) $<

# 不是一个目标：
.ln:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.texi:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.txinfo:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.tex:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.txinfo.info:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(MAKEINFO) $(MAKEINFO_FLAGS) $< -o $@

# 不是一个目标：
.ch:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
sub_add.c:
#  对隐含规则的搜索已完成。
#  最近更新 2013-08-09 14:13:46.287896168
#  文件已经被更新。
#  更新成功。
# 变量设置哈希表状态：
# 负载=0/32=0%, Rehash=0, 冲突=0/0=0%

main: sub_add.o add.o sub.o
#  对隐含规则的搜索尚未完成。
#  最近更新 2013-08-09 13:09:28.575896158
#  文件尚未被更新。
# 变量设置哈希表状态：
# 负载=0/32=0%, Rehash=0, 冲突=0/2=0%
#  要执行的命令 (从“Makefile”，行 5)：
	gcc sub_add.o add.o sub.o -o main
	

# 不是一个目标：
.S.s:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(PREPROCESS.S) $< > $@

# 不是一个目标：
.mod:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.mod) -o $@ -e $@ $^

# 不是一个目标：
.mod.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.mod) -o $@ $<

# 不是一个目标：
.F.f:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(PREPROCESS.F) $(OUTPUT_OPTION) $<

# 不是一个目标：
.w:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.S.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.S) -o $@ $<

# 不是一个目标：
.l:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.F:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.F) $^ $(LOADLIBES) $(LDLIBS) -o $@

# 不是一个目标：
.web:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.sym:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。

# 不是一个目标：
.f:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(LINK.f) $^ $(LOADLIBES) $(LDLIBS) -o $@

# 不是一个目标：
.f.o:
#  对隐含规则的搜索尚未完成。
#  从不检查修改时间。
#  文件尚未被更新。
#  要执行的命令 (内置)：
	$(COMPILE.f) $(OUTPUT_OPTION) $<

# 文件 哈希表 状态:
# 负载=77/1024=8%, Rehash=0, 冲突=269/1288=21%
# VPATH 搜索路径

# 没有“vpath”搜索路径。

# 没有通用搜索路径(“VPATH”变量)。

# # of strings in strcache: 1
# # of strcache buffers: 1
# strcache size: total = 4096 / max = 4096 / min = 4096 / avg = 4096
# strcache free: total = 4087 / max = 4087 / min = 4087 / avg = 4087

# 结束Make数据库于Fri Aug  9 14:14:44 2013

