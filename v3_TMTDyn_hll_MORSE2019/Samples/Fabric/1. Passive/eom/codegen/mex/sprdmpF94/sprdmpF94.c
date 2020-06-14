/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF94.c
 *
 * Code generation for function 'sprdmpF94'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF94.h"

/* Function Definitions */
void sprdmpF94(const real_T in1[6], const real_T in2[224], real_T s, real_T
               out1[106], real_T *out2, real_T *out3, real_T *out4, real_T *out5,
               real_T out6[106], real_T out7[106], real_T *out8)
{
  int32_T i;
  static const int8_T iv0[106] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

  (void)in1;
  (void)s;

  /* SPRDMPF94 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF94(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jul-2019 05:29:51 */
  *out5 = in2[93];
  *out2 = 0.0;
  *out3 = 0.0;
  *out4 = 0.0;
  for (i = 0; i < 106; i++) {
    out1[i] = iv0[i];
    out6[i] = 0.0;
    out7[i] = 0.0;
  }

  *out8 = 1.0;
}

/* End of code generation (sprdmpF94.c) */