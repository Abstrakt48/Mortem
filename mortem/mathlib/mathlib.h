#pragma once

#include <math.h>

#define clamp( val, min, max ) ( ((val) > (max)) ? (max) : ( ((val) < (min)) ? (min) : (val) ) )

typedef float vec_t;

typedef vec_t vec2_t[2];
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];

typedef float matrix4x4_t[16];

#define PI 3.14159265358979323846
#define DEG2RAD( a ) ( ( (a) * PI ) / 180.0F )
#define RAD2DEG( a ) ( ( (a) * 180.0f ) / PI )

#define DotProduct(x,y) 		( x[0] * y[0] + x[1] * y[1] + x[2] * y[2] )
#define VectorSubtract(a,b,c) 	( c[0] = a[0] - b[0]; c[1] = a[1] - b[1]; c[2] = a[2] - b[2]; )
#define VectorAdd(a,b,c) 		( c[0] = a[0] + b[0]; c[1] = a[1] + b[1]; c[2] = a[2] + b[2]; )
#define VectorCopy(a,b) 		( b[0] = a[0]; b[1] = a[1]; b[2] = a[2]; )
#define VectorScale(a,b,c) 		( c[0] = b * a[0]; c[1] = b * a[1]; c[2] = b * a[2]; )
#define VectorClear(x) 			( x[0] = x[1] = x[2] = 0; )
#define	VectorNegate(x) 		( x[0] =- x[0]; x[1] =- x[1]; x[2] =- x[2]; )