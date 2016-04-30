#include "keymap_common.h"
#include <avr/pgmspace.h>
#include "actionmap.h"
#include "action_code.h"

/*
   My Custon Layer:
   - ALT <=> CMD
   - Use | ~ instead of PageUp PageDown on L2
   - Adds mouse layer
   - Tap Keys for S and D
*/


#define AC_TAP(layer, key)  ACTION_LAYER_TAP_KEY(layer, AC_##key)

const uint16_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {

  KEYMAP( /* 0: mostly letters */
      Q        , W        , E    , R    , T                  , Y    , U    , I   , O    , P    , \
      A        , TAP(4,S) , D    , F    , G                  , H    , J   , K    , L    , SCLN , \
      TAP(3,Z) , X        , C    , V    , B                  , N    , M   , COMM , DOT  , SLSH , \
      ESC      , TAB      , LALT , LSFT , BSPC , LCTL , LGUI , SPC , LM1  , MINS , QUOT , ENT
  ),

  KEYMAP( /* 1: punctuation and numbers */
      SH(1) , SH(2)   , SH(LBRC) , SH(RBRC) , SH(BSLS)                 , SH(BSLS)  , 7    , 8   , 9  , SH(8)     , \
      SH(3) , SH(4)   , SH(9)    , SH(0)    , GRAVE                    , SH(GRAVE) , 4    , 5   , 6  , SH(EQUAL) , \
      SH(5) , SH(6)   , LBRC     , RBRC     , SH(GRAVE)                , SH(7)     , 1    , 2   , 3  , BSLS      , \
      ON(2) , ON(3)   , LALT     , LSFT     , BSPC      , LCTL  , LGUI , SPC       , LM1  , DOT , 0  , EQUAL
  ),

  KEYMAP( /* 2: arrows and function keys */
      INS , HOME , UP   , END   , PGUP               , UP   , F7     , F8  , F9  , F10 , \
      DEL , LEFT , DOWN , RIGHT , PGDN               , DOWN , F4     , F5  , F6  , F11 , \
      NO  , NO   , NO   , NO    , BOOT               , NO   , F1     , F2  , F3  , F12 , \
      NO  , LSFT , LALT , LSFT  , BSPC , LCTL , LGUI , SPC  , OFF(2) , NO  , NO  , ENT
  ),

  KEYMAP( /* 3: mouse */
      NO   , NO   , NO   , NO   , NO                 , WH_U , NO     , MS_U , NO   , NO , \
      ACL0 , ACL1 , ACL2 , NO   , NO                 , WH_D , MS_L   , MS_D , MS_R , NO , \
      TRNS , NO   , NO   , NO   , NO                 , NO   , BTN1   , BTN2 , BTN3 , NO , \
      ESC  , LSFT , LALT , LSFT , BSPC , LCTL , LGUI , SPC  , OFF(3) , NO   , NO   , ENT
  ),

  KEYMAP( /* 4: quick arrows and media */
      NO  , NO   , NO   , NO   , NO                 , MPRV , MPLY   , MNXT , VOLD  , VOLU , \
      NO  , TRNS , NO   , NO   , NO                 , LEFT , DOWN   , UP   , RIGHT , NO   , \
      NO  , NO   , NO   , NO   , NO                 , NO   , NO     , NO   , NO    , NO   , \
      ESC , LSFT , LALT , LSFT , BSPC , LCTL , LGUI , SPC  , OFF(4) , NO   , NO    , ENT
  )
};
