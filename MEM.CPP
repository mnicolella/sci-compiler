//	mem.cpp
// 	memory management routines

#include	<dos.h>
#include	<stdio.h>

#include "sol.hpp"

#include	"sc.hpp"

#include	"error.hpp"
#include	"mem.hpp"

Bool	writeMemSizes;

//	if we're running under Windows, trust it to manage our memory
#if !defined(WINDOWS) && !defined(__386__)

#define	Normalize(p)	\
				(char*) MK_FP(FP_SEG(p) + (FP_OFF(p) >> 4), FP_OFF(p) & 0x0f)

#define	NullP(p)			!((FP_SEG(p) | FP_OFF(p)))

#define	LessP(p1, p2)																\
				(FP_SEG(p1) < FP_SEG(p2) ||										\
				(FP_SEG(p1) == FP_SEG(p2) && FP_OFF(p1) < FP_OFF(p2)))
#define	LessEqP(p1, p2)															\
				(FP_SEG(p1) <= FP_SEG(p2) ||										\
				(FP_SEG(p1) == FP_SEG(p2) && FP_OFF(p1) <= FP_OFF(p2)))

static ulong	memSizes[32];
static ulong	newCalls;

static void	WriteMemSizes();

#endif
