/* This file was converted by gperf_fold_key_conv.py
      from gperf output file. */
/* ANSI-C code produced by gperf version 3.1 */
/* Command-line: /usr/bin/gperf -n -C -T -c -t -j1 -L ANSI-C -F,-1 -N onigenc_unicode_fold3_key unicode_fold3_key.gperf  */
/* Computed positions: -k'3,6,9' */



/* This gperf source file was generated by make_unicode_fold_data.py */
#include <string.h>
#include "regenc.h"

#define TOTAL_KEYWORDS 14
#define MIN_WORD_LENGTH 9
#define MAX_WORD_LENGTH 9
#define MIN_HASH_VALUE 0
#define MAX_HASH_VALUE 13
/* maximum key range = 14, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
/*ARGSUSED*/
static unsigned int
hash(OnigCodePoint codes[])
{
  static const unsigned char asso_values[] =
    {
       6,  3, 14, 14, 14, 14, 14, 14,  1, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14,  0,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14,  0, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14,  4, 14, 14,  5, 14, 14,  4, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 10, 14, 14,
      14, 14, 14,  9, 14,  1, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14,  0, 14, 14,
      14,  8, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14, 14, 14, 14, 14,
      14, 14, 14, 14, 14, 14
    };
  return asso_values[(unsigned char)onig_codes_byte_at(codes, 8)] + asso_values[(unsigned char)onig_codes_byte_at(codes, 5)] + asso_values[(unsigned char)onig_codes_byte_at(codes, 2)];
}

int
onigenc_unicode_fold3_key(OnigCodePoint codes[])
{
  static const short int wordlist[] =
    {

      62,

      47,

      31,

      57,

      41,

      25,

      52,

      36,

      20,

      67,

      15,

      10,

      5,

      0
    };

  if (0 == 0)
    {
      int key = hash(codes);

      if (key <= MAX_HASH_VALUE)
        {
          int index = wordlist[key];

          if (index >= 0 && onig_codes_cmp(codes, OnigUnicodeFolds3 + index, 3) == 0)
            return index;
        }
    }
  return -1;
}


