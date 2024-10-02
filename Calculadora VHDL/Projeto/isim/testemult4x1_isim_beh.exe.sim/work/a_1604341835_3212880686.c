/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/sd/calculadora 05-07/multiplicador1bit.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1306455576395559435_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533613331_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1604341835_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(14, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 5432U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 5448U);
    t6 = ieee_p_3620187407_sub_1496620905533613331_3965413181(IEEE_P_3620187407, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (8U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 3488);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 3392);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t9, 0);
    goto LAB6;

}

static void work_a_1604341835_3212880686_p_1(char *t0)
{
    char t5[16];
    char t19[16];
    char t21[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t20;
    int t22;
    unsigned int t23;
    char *t24;

LAB0:    xsi_set_current_line(17, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5496U);
    t3 = (t0 + 5536);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_3620187407_sub_1306455576395559435_3965413181(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5496U);
    t3 = (t0 + 5548);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_3620187407_sub_1306455576395559435_3965413181(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5496U);
    t3 = (t0 + 5564);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_3620187407_sub_1306455576395559435_3965413181(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB9;

LAB10:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5496U);
    t3 = (t0 + 5580);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_3620187407_sub_1306455576395559435_3965413181(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB13;

LAB14:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5496U);
    t3 = (t0 + 5596);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_3620187407_sub_1306455576395559435_3965413181(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB17;

LAB18:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5496U);
    t3 = (t0 + 5612);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_3620187407_sub_1306455576395559435_3965413181(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB21;

LAB22:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5496U);
    t3 = (t0 + 5628);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_3620187407_sub_1306455576395559435_3965413181(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB25;

LAB26:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5496U);
    t3 = (t0 + 5644);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 7;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (7 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_p_3620187407_sub_1306455576395559435_3965413181(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB29;

LAB30:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 5660);
    t3 = (t0 + 3552);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t17 = (t9 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t0 + 3616);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB3:    t1 = (t0 + 3408);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(18, ng0);
    t7 = (t0 + 5544);
    t12 = (t0 + 3552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t17 = (t9 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t0 + 3616);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB3;

LAB5:    xsi_set_current_line(22, ng0);
    t7 = (t0 + 5556);
    t12 = (t0 + 3552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t17 = (t9 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t19 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 3;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t8 = (0 - 3);
    t20 = (t8 * -1);
    t20 = (t20 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t20;
    t4 = (t0 + 5560);
    t7 = (t21 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 3;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t22 = (3 - 0);
    t20 = (t22 * 1);
    t20 = (t20 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t20;
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t5, t1, t19, t4, t21);
    t12 = (t5 + 12U);
    t20 = *((unsigned int *)t12);
    t23 = (1U * t20);
    t10 = (4U != t23);
    if (t10 == 1)
        goto LAB7;

LAB8:    t13 = (t0 + 3616);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    memcpy(t24, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB7:    xsi_size_not_matching(4U, t23, 0);
    goto LAB8;

LAB9:    xsi_set_current_line(26, ng0);
    t7 = (t0 + 5572);
    t12 = (t0 + 3552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t17 = (t9 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t19 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 3;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t8 = (0 - 3);
    t20 = (t8 * -1);
    t20 = (t20 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t20;
    t4 = (t0 + 5576);
    t7 = (t21 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 3;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t22 = (3 - 0);
    t20 = (t22 * 1);
    t20 = (t20 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t20;
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t5, t1, t19, t4, t21);
    t12 = (t5 + 12U);
    t20 = *((unsigned int *)t12);
    t23 = (1U * t20);
    t10 = (4U != t23);
    if (t10 == 1)
        goto LAB11;

LAB12:    t13 = (t0 + 3616);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    memcpy(t24, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB11:    xsi_size_not_matching(4U, t23, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(30, ng0);
    t7 = (t0 + 5588);
    t12 = (t0 + 3552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t17 = (t9 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t19 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 3;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t8 = (0 - 3);
    t20 = (t8 * -1);
    t20 = (t20 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t20;
    t4 = (t0 + 5592);
    t7 = (t21 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 3;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t22 = (3 - 0);
    t20 = (t22 * 1);
    t20 = (t20 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t20;
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t5, t1, t19, t4, t21);
    t12 = (t5 + 12U);
    t20 = *((unsigned int *)t12);
    t23 = (1U * t20);
    t10 = (4U != t23);
    if (t10 == 1)
        goto LAB15;

LAB16:    t13 = (t0 + 3616);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    memcpy(t24, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB15:    xsi_size_not_matching(4U, t23, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(34, ng0);
    t7 = (t0 + 5604);
    t12 = (t0 + 3552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t17 = (t9 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t19 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 3;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t8 = (0 - 3);
    t20 = (t8 * -1);
    t20 = (t20 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t20;
    t4 = (t0 + 5608);
    t7 = (t21 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 3;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t22 = (3 - 0);
    t20 = (t22 * 1);
    t20 = (t20 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t20;
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t5, t1, t19, t4, t21);
    t12 = (t5 + 12U);
    t20 = *((unsigned int *)t12);
    t23 = (1U * t20);
    t10 = (4U != t23);
    if (t10 == 1)
        goto LAB19;

LAB20:    t13 = (t0 + 3616);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    memcpy(t24, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB19:    xsi_size_not_matching(4U, t23, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 5620);
    t12 = (t0 + 3552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t17 = (t9 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t19 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 3;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t8 = (0 - 3);
    t20 = (t8 * -1);
    t20 = (t20 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t20;
    t4 = (t0 + 5624);
    t7 = (t21 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 3;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t22 = (3 - 0);
    t20 = (t22 * 1);
    t20 = (t20 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t20;
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t5, t1, t19, t4, t21);
    t12 = (t5 + 12U);
    t20 = *((unsigned int *)t12);
    t23 = (1U * t20);
    t10 = (4U != t23);
    if (t10 == 1)
        goto LAB23;

LAB24:    t13 = (t0 + 3616);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    memcpy(t24, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB23:    xsi_size_not_matching(4U, t23, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(42, ng0);
    t7 = (t0 + 5636);
    t12 = (t0 + 3552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t17 = (t9 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t19 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 3;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t8 = (0 - 3);
    t20 = (t8 * -1);
    t20 = (t20 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t20;
    t4 = (t0 + 5640);
    t7 = (t21 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 3;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t22 = (3 - 0);
    t20 = (t22 * 1);
    t20 = (t20 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t20;
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t5, t1, t19, t4, t21);
    t12 = (t5 + 12U);
    t20 = *((unsigned int *)t12);
    t23 = (1U * t20);
    t10 = (4U != t23);
    if (t10 == 1)
        goto LAB27;

LAB28:    t13 = (t0 + 3616);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    memcpy(t24, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB27:    xsi_size_not_matching(4U, t23, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(46, ng0);
    t7 = (t0 + 5652);
    t12 = (t0 + 3552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 4U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t17 = (t9 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t19 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 3;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t8 = (0 - 3);
    t20 = (t8 * -1);
    t20 = (t20 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t20;
    t4 = (t0 + 5656);
    t7 = (t21 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 0;
    t11 = (t7 + 4U);
    *((int *)t11) = 3;
    t11 = (t7 + 8U);
    *((int *)t11) = 1;
    t22 = (3 - 0);
    t20 = (t22 * 1);
    t20 = (t20 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t20;
    t11 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t5, t1, t19, t4, t21);
    t12 = (t5 + 12U);
    t20 = *((unsigned int *)t12);
    t23 = (1U * t20);
    t10 = (4U != t23);
    if (t10 == 1)
        goto LAB31;

LAB32:    t13 = (t0 + 3616);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t24 = *((char **)t16);
    memcpy(t24, t11, 4U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB3;

LAB31:    xsi_size_not_matching(4U, t23, 0);
    goto LAB32;

}


extern void work_a_1604341835_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1604341835_3212880686_p_0,(void *)work_a_1604341835_3212880686_p_1};
	xsi_register_didat("work_a_1604341835_3212880686", "isim/testemult4x1_isim_beh.exe.sim/work/a_1604341835_3212880686.didat");
	xsi_register_executes(pe);
}
