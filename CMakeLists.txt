cmake_minimum_required (VERSION 3.12)

project ("sc")

add_executable (sc
	"ALIST.CPP"
	"ANODE.CPP"
	"ASM.CPP"
	"BANNER.CPP"
	"BUILTINS.CPP"
	"CHARTYPE.CPP"
	"CLASS.CPP"
	"COMPILE.CPP"
	"DEBUG.CPP"
	"DEFINE.CPP"
	"ERROR.CPP"
	"EXPR.CPP"
	"fileio.cpp"
	"getargs.cpp"
	"INPUT.CPP"
	"LIST.CPP"
	"LISTING.CPP"
	"LOOP.CPP"
	"MEM.CPP"
	"new.cpp"
	"OBJECT.CPP"
	"OPTIMIZE.CPP"
	"OUTPUT.CPP"
	"PARSE.CPP"
	"PNODE.CPP"
	"PROC.CPP"
	"RESOURCE.CPP"
	"SC.CPP"
	"SELECTOR.CPP"
	"SHARE.CPP"
	"string.cpp"
	"SYMBOL.CPP"
	"SYMTBL.CPP"
	"TEXT.CPP"
	"TOKEN.CPP"
	"TOKTYPES.CPP"
	"UPDATE.CPP"
)

set_property(TARGET sc PROPERTY CXX_STANDARD 20)

target_compile_definitions(sc PRIVATE _CRT_SECURE_NO_WARNINGS)

install(TARGETS sc RUNTIME)