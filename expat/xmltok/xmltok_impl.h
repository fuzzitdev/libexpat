enum {
  BT_NONXML,
  BT_MALFORM,
  BT_LT,
  BT_AMP,
  BT_LEAD2,
  BT_LEAD3,
  BT_LEAD4,
  BT_LEAD5,
  BT_LEAD6,
  BT_TRAIL,
  BT_GT,
  BT_QUOT,
  BT_APOS,
  BT_EQUALS,
  BT_QUEST,
  BT_EXCL,
  BT_SOL,
  BT_SEMI,
  BT_NUM,
  BT_LSQB,
  BT_RSQB,
  BT_S,
  BT_NMSTRT,
  BT_HEX,
  BT_DIGIT,
  BT_NAME,
  BT_MINUS,
  BT_OTHER, /* known not to be a name or name start character */
  BT_NONASCII /* might be a name or name start character */
};

#include <stddef.h>