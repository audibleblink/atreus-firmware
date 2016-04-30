#include "keymap_common.h"
#include <avr/pgmspace.h>
#include "actionmap.h"
#include "action_code.h"

/* My Custon Layer with ALT <=> CMD and | ~ instead of PageU/PageD on Layer 2 */

const uint16_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {

  KEYMAP( /* 0: mostly letters */
      Q   , W   , E    , R    , T                  , Y    , U    , I    , O    , P    , \
      A   , S   , D    , F    , G                  , H    , J    , K    , L    , SCLN , \
      Z   , X   , C    , V    , B                  , N    , M    , COMM , DOT  , SLSH , \
      ESC , TAB , LALT , LSFT , BSPC , LCTL , LGUI , SPC  , LM1  , MINS , QUOT , ENT
  ),

  KEYMAP( /* 1: punctuation and numbers */
      SH(1) , SH(2)   , SH(LBRC) , SH(RBRC) , SH(BSLS)                 , SH(BSLS)  , 7    , 8   , 9  , SH(8)     , \
      SH(3) , SH(4)   , SH(9)    , SH(0)    , GRAVE                    , SH(GRAVE) , 4    , 5   , 6  , SH(EQUAL) , \
      SH(5) , SH(6)   , LBRC     , RBRC     , SH(GRAVE)                , SH(7)     , 1    , 2   , 3  , BSLS      , \
      ON(2) , SH(INS) , LALT     , LSFT     , BSPC      , LCTL  , LGUI , SPC       , LM1  , DOT , 0  , EQUAL
  ),

  KEYMAP( /* 2: arrows and function keys */
      INS , HOME , UP   , END   , PGUP               , UP   , F7     , F8  , F9  , F10 , \
      DEL , LEFT , DOWN , RIGHT , PGDN               , DOWN , F4     , F5  , F6  , F11 , \
      NO  , NO   , NO   , NO    , BOOT               , NO   , F1     , F2  , F3  , F12 , \
      NO  , LSFT , LALT , LSFT  , BSPC , LCTL , LGUI , SPC  , OFF(2) , NO  , NO  , ENT
  )
};
