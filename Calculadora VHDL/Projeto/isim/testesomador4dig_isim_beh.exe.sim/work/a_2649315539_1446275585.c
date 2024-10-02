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
static const char *ng0 = "/home/sd/calculadora 05-07/bcd_adder.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3307759752501539734_1035706684(char *, char *, char *, int );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_16272557775307340295_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_2649315539_1446275585_p_0(char *t0)
{
    char t1[16];
    char t2[16];
    char t5[16];
    char t10[16];
    char t14[16];
    char t17[16];
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    unsigned char t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(17, ng0);

LAB3:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t0 + 5512U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)99, (unsigned char)2, (char)97, t4, t7, (char)101);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t0 + 5528U);
    t8 = xsi_base_array_concat(t8, t10, t11, (char)99, (unsigned char)2, (char)97, t9, t12, (char)101);
    t13 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t2, t3, t5, t8, t10);
    t15 = (t0 + 5598);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 3;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (3 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t0 + 1352U);
    t22 = *((char **)t19);
    t23 = *((unsigned char *)t22);
    t19 = ieee_p_3620187407_sub_16272557775307340295_3965413181(IEEE_P_3620187407, t14, t15, t17, t23);
    t24 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t1, t13, t2, t19, t14);
    t25 = (t1 + 12U);
    t21 = *((unsigned int *)t25);
    t26 = (1U * t21);
    t27 = (5U != t26);
    if (t27 == 1)
        goto LAB5;

LAB6:    t28 = (t0 + 3648);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t24, 5U);
    xsi_driver_first_trans_fast(t28);

LAB2:    t33 = (t0 + 3552);
    *((int *)t33) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t26, 0);
    goto LAB6;

}

static void work_a_2649315539_1446275585_p_1(char *t0)
{
    char t9[16];
    char t13[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t14;
    unsigned int t15;
    int t17;
    char *t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5560U);
    t3 = ieee_p_1242562249_sub_3307759752501539734_1035706684(IEEE_P_1242562249, t2, t1, 9);
    if (t3 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 3712);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t10 = (4 - 3);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t4 = (t0 + 3776);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);

LAB3:    t1 = (t0 + 3568);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(21, ng0);
    t4 = (t0 + 3712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t10 = (4 - 3);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t2 + t12);
    t4 = (t13 + 0U);
    t5 = (t4 + 0U);
    *((int *)t5) = 3;
    t5 = (t4 + 4U);
    *((int *)t5) = 0;
    t5 = (t4 + 8U);
    *((int *)t5) = -1;
    t14 = (0 - 3);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t5 = (t4 + 12U);
    *((unsigned int *)t5) = t15;
    t5 = (t0 + 5602);
    t7 = (t16 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t17 = (3 - 0);
    t15 = (t17 * 1);
    t15 = (t15 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t15;
    t8 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t9, t1, t13, t5, t16);
    t18 = (t9 + 12U);
    t15 = *((unsigned int *)t18);
    t19 = (1U * t15);
    t3 = (4U != t19);
    if (t3 == 1)
        goto LAB5;

LAB6:    t20 = (t0 + 3776);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 4U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB3;

LAB5:    xsi_size_not_matching(4U, t19, 0);
    goto LAB6;

}


extern void work_a_2649315539_1446275585_init()
{
	static char *pe[] = {(void *)work_a_2649315539_1446275585_p_0,(void *)work_a_2649315539_1446275585_p_1};
	xsi_register_didat("work_a_2649315539_1446275585", "isim/testesomador4dig_isim_beh.exe.sim/work/a_2649315539_1446275585.didat");
	xsi_register_executes(pe);
}
