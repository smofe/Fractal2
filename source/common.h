// Control structure definition for HLSL

// fxc compiler is very slow. Define this to have only one fractal equation.
//#define DEVLOPEMENT_SINGLE_FRACTAL 

#ifdef SHADER
#define FLOAT4 float4
#define INTEGER4 int4
#define Q1 P0.x	// individual float names
#define Q2 P0.y
#define Q3 P0.z
#define Q4 P0.w
#define Q5 P1.x
#define Q6 P1.y
#define Q7 P1.z
#define Q8 P1.w
#define Q9 P2.x
#define QA P2.y	
#define QB P2.z
#define QC P2.w
#define QD P3.x
#define QE P3.y
#define QF P3.z
#define QG P3.w

#define XSIZE			CI1.x
#define YSIZE			CI1.y
#define EQUATION		CI1.z
#define MAXSTEPS		CI1.w
#define DOINVERSION		CI2.x
#define ISSTEREO		CI2.y
#define COLORSCHEME		CI2.z
#define JULIAMODE		CI2.w
#define SHOWBALLS		I1.x
#define FOURGEN			I1.y
#define FINALITERATIONS I1.z
#define BOXITERATIONS	I1.w
#define PREABSX			I2.x
#define PREABSY			I2.y
#define PREABSZ			I2.z
#define ABSX			I2.w
#define ABSY			I3.x
#define ABSZ			I3.y
#define USEDELTADE		I3.z

#define TONOFF			I3.w
#define	TXSIZE			I4.x
#define	TYSIZE			I4.y
#define TSCALE          P6.x
#define TCENTERX        P6.y
#define TCENTERY        P6.z

#define ENHANCE			P7.x
#define COLORROLL		P7.y
#define SECONDSURFACE   P7.z

#define INVERSION_X			inv1.x
#define INVERSION_Y			inv1.y
#define INVERSION_Z			inv1.z
#define INVERSION_RADIUS	inv1.w
#define INVERSION_ANGLE		inv2.x
#define COLORPARAM			julia.w
#define BRIGHT				light.x
#define CONTRAST			light.y
#define SPECULAR			light.z
#define PARALLAX			light.w

// orbitTrap -------------------------------
#define OTcycles			OTs.x
#define OTstrength			OTs.y
#define OTcolorXR			OTx.x
#define OTcolorXG			OTx.y
#define OTcolorXB			OTx.z
#define OTcolorXW			OTx.w
#define OTcolorYR			OTy.x
#define OTcolorYG			OTy.y
#define OTcolorYB			OTy.z
#define OTcolorYW			OTy.w
#define OTcolorZR			OTz.x
#define OTcolorZG			OTz.y
#define OTcolorZB			OTz.z
#define OTcolorZW			OTz.w
#define OTcolorRR			OTr.x
#define OTcolorRG			OTr.y
#define OTcolorRB			OTr.z
#define OTcolorRW			OTr.w
#define OTindexX			OTindex.x
#define OTindexY			OTindex.y
#define OTindexZ			OTindex.z
#define OTindexR			OTindex.w
#define OTstyle				I4.z
#define OTfixedX			OTfixed.x
#define OTfixedY			OTfixed.y
#define OTfixedZ			OTfixed.z

cbuffer Control : register(b0)

#else
// Control structure definition for C++
#pragma once
#include "stdafx.h"

#define _CRT_SECURE_NO_WARNINGS
#pragma warning( disable : 4305 ) // double as float
#pragma warning( disable : 4244 ) // double as float
#pragma warning( disable : 4127 ) // constexpr

void abortProgram(char* name, int line);
#define ABORT(hr) if(FAILED(hr)) { abortProgram(__FILE__,__LINE__); }

template <class T>
void SafeRelease(T** ppT) { if (*ppT) { (*ppT)->Release(); *ppT = NULL; } }

#define FLOAT4 XMFLOAT4
#define INTEGER4 XMINT4
#define Q1 control.P0.x
#define Q2 control.P0.y
#define Q3 control.P0.z
#define Q4 control.P0.w
#define Q5 control.P1.x
#define Q6 control.P1.y
#define Q7 control.P1.z
#define Q8 control.P1.w
#define Q9 control.P2.x
#define QA control.P2.y	
#define QB control.P2.z
#define QC control.P2.w
#define QD control.P3.x
#define QE control.P3.y
#define QF control.P3.z
#define QG control.P3.w

#define XSIZE			control.CI1.x
#define YSIZE			control.CI1.y
#define EQUATION		control.CI1.z
#define MAXSTEPS		control.CI1.w
#define DOINVERSION		control.CI2.x
#define ISSTEREO		control.CI2.y
#define COLORSCHEME		control.CI2.z
#define JULIAMODE		control.CI2.w
#define SHOWBALLS		control.I1.x
#define FOURGEN			control.I1.y
#define FINALITERATIONS control.I1.z
#define BOXITERATIONS	control.I1.w
#define PREABSX			control.I2.x
#define PREABSY			control.I2.y
#define PREABSZ			control.I2.z
#define ABSX			control.I2.w
#define ABSY			control.I3.x
#define ABSZ			control.I3.y
#define USEDELTADE		control.I3.z

#define TONOFF			control.I3.w
#define	TXSIZE			control.I4.x
#define	TYSIZE			control.I4.y
#define TSCALE          control.P6.x
#define TCENTERX        control.P6.y
#define TCENTERY        control.P6.z

#define ENHANCE			control.P7.x
#define COLORROLL		control.P7.y
#define SECONDSURFACE   control.P7.z

#define INVERSION_X			control.inv1.x
#define INVERSION_Y			control.inv1.y
#define INVERSION_Z			control.inv1.z
#define INVERSION_RADIUS	control.inv1.w
#define INVERSION_ANGLE		control.inv2.x
#define COLORPARAM			control.julia.w
#define BRIGHT				control.light.x
#define CONTRAST			control.light.y
#define SPECULAR			control.light.z
#define PARALLAX			control.light.w

// orbitTrap -------------------------------
#define OTcycles			control.OTs.x
#define OTstrength			control.OTs.y
#define OTcolorXR			control.OTx.x
#define OTcolorXG			control.OTx.y
#define OTcolorXB			control.OTx.z
#define OTcolorXW			control.OTx.w
#define OTcolorYR			control.OTy.x
#define OTcolorYG			control.OTy.y
#define OTcolorYB			control.OTy.z
#define OTcolorYW			control.OTy.w
#define OTcolorZR			control.OTz.x
#define OTcolorZG			control.OTz.y
#define OTcolorZB			control.OTz.z
#define OTcolorZW			control.OTz.w
#define OTcolorRR			control.OTr.x
#define OTcolorRG			control.OTr.y
#define OTcolorRB			control.OTr.z
#define OTcolorRW			control.OTr.w
#define OTindexX			control.OTindex.x
#define OTindexY			control.OTindex.y
#define OTindexZ			control.OTindex.z
#define OTindexR			control.OTindex.w
#define OTstyle				control.I4.z
#define OTfixedX			control.OTfixed.x
#define OTfixedY			control.OTfixed.y
#define OTfixedZ			control.OTfixed.z

struct Control

#endif

// Control structure definition.  ensure 16 byte alighment
{
	FLOAT4 camera;
	FLOAT4 viewVector, topVector, sideVector;
	FLOAT4 P0, P1, P2, P3, P4, P5, P6, P7;

	FLOAT4 inv1, inv2;
	FLOAT4 julia;
	FLOAT4 light;
	FLOAT4 lightPosition;

	INTEGER4 CI1, CI2;
	INTEGER4 I1, I2, I3, I4;

	// orbit Trap -----------
	FLOAT4 OTs; // cycles, sterength, unused,unused
	FLOAT4 OTx, OTy, OTz, OTr; // color RGB, weight
	INTEGER4 OTindex; // color index
	FLOAT4 OTfixed;
};

#define EQU_01_MANDELBULB 1
#define EQU_02_APOLLONIAN 2
#define EQU_03_APOLLONIAN2 3
#define EQU_04_KLEINIAN 4
#define EQU_05_MANDELBOX 5
#define EQU_06_QUATJULIA 6
#define EQU_09_POLY_MENGER 7
#define EQU_10_GOLD 8
#define EQU_11_SPIDER 9
#define EQU_12_KLEINIAN2 10
#define EQU_18_SIERPINSKI 11
#define EQU_19_HALF_TETRA 12
#define EQU_24_KALEIDO 13 
#define EQU_25_POLYCHORA 14 
#define EQU_30_KALIBOX 15
#define EQU_34_FLOWER 16
#define EQU_38_ALEK_BULB 17
#define EQU_39_SURFBOX 18
#define EQU_41_KALI_RONTGEN 19
#define EQU_42_VERTEBRAE 20
#define EQU_44_BUFFALO 21
#define EQU_47_SPONGE 22
// ------------------------------------
#define EQU_20_FULL_TETRA 23
#define EQU_28_QUATJULIA2 24
#define EQU_29_MBROT 25
#define EQU_31_SPUDS 26
#define EQU_37_SPIRALBOX 27
#define EQU_40_TWISTBOX 28
#define EQU_43_DARKSURF 29
#define EQU_45_TEMPLE 30
#define EQU_46_KALI3 31
#define EQU_50_DONUTS 32
#define EQU_MAX 33

