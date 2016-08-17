#ifdef CH_LANG_CC
/*
 *      _______              __
 *     / ___/ /  ___  __ _  / /  ___
 *    / /__/ _ \/ _ \/  V \/ _ \/ _ \
 *    \___/_//_/\___/_/_/_/_.__/\___/
 *    Please refer to Copyright.txt, in Chombo's root directory.
 */
#endif

#ifndef _CHECK_MARK_H_
#define _CHECK_MARK_H_

#define check_mark_width 16
#define check_mark_height 16
static unsigned char check_mark_bits[] =
{
   0x00, 0xc0, 0x00, 0xe0, 0x00, 0x70, 0x00, 0x38, 0x00, 0x1c, 0x00, 0x0e,
   0x00, 0x0e, 0x00, 0x07, 0x80, 0x03, 0x83, 0x03, 0xcf, 0x01, 0xdf, 0x01,
   0xfc, 0x01, 0xf8, 0x00, 0xf0, 0x00, 0xe0, 0x00
};

#endif