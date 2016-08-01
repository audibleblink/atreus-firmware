#include "keymap_common.h"
#include <avr/pgmspace.h>
#include "actionmap.h"
#include "action_code.h"

/* Enable Momentary Dual Function Modifiers: or T for TAP */
#define AC_TP(layer, key)  ACTION_LAYER_TAP_KEY(layer, AC_##key)

/* Find tag declaration in Vim*/
#define AC_TAG ACTION_MODS_KEY(MOD_LCTL, KC_RBRC)

/* Define ALT modifying function */
#define AC_AL(key) ACTION_MODS_KEY(MOD_LALT, AC_##key)

/* Define CTRL modifying function */
#define AC_CT(key) ACTION_MODS_KEY(MOD_LCTL, AC_##key)

const uint16_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {

  KEYMAP( /* 0: mostly letters */
      Q   , TP(4,W) , E   , R    , T                  , Y   , U   , I    , O    , P    , \
      A   , TP(3,S) , D   , F    , G                  , H   , J   , K    , L    , SCLN , \
      Z   , TP(5,X) , C   , V    , B                  , N   , M   , COMM , DOT  , SLSH , \
      ESC , LALT    , TAB , LSFT , BSPC , LGUI , LCTL , SPC , LM1 , MINS , QUOT , ENT
  ),

  KEYMAP( /* 1: punctuation and numbers */
      SH(1) , SH(2) , SH(LBRC) , SH(RBRC) , GUI(GRAVE)               , SH(BSLS)  , 7    , 8   , 9  , SH(8)     , \
      SH(3) , SH(4) , SH(9)    , SH(0)    , GRAVE                    , SH(GRAVE) , 4    , 5   , 6  , SH(EQUAL) , \
      SH(5) , SH(6) , LBRC     , RBRC     , SH(GRAVE)                , SH(7)     , 1    , 2   , 3  , BSLS      , \
      ON(2) , TRNS  , TRNS     , TRNS     , TRNS      , TRNS  , TRNS , TRNS      , TRNS , DOT , 0  , EQUAL
  ),

  KEYMAP( /* 2: arrows and function keys */
      INS    , HOME , UP   , END   , PGUP               , UP   , F7     , F8 , F9 , F10 , \
      DEL    , LEFT , DOWN , RIGHT , PGDN               , DOWN , F4     , F5 , F6 , F11 , \
      NO     , NO   , NO   , NO    , BOOT               , NO   , F1     , F2 , F3 , F12 , \
      OFF(2) , TRNS , TRNS , TRNS  , TRNS , TRNS , TRNS , TRNS , OFF(2) , NO , NO , TRNS
  ),

  KEYMAP( /* 3: quick arrows, tiling, and media */
      NO   , NO   , NO   , NO   , NO                 , MPRV , MPLY , MNXT , VOLD  , VOLU , \
      NO   , TRNS , NO   , NO   , NO                 , LEFT , DOWN , UP   , RIGHT , MUTE , \
      NO   , NO   , NO   , NO   , NO                 , TPMN , TLFT , TFLS , TLRT  , TNMN , \
      TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , NO   , TAG   , TRNS
  ),

  KEYMAP( /* 4: ALT Modified Numbers */
      NO   , TRNS , NO   , NO   , NO                 , NO   , AL(7) , AL(8) , AL(9) , NO , \
      NO   , NO   , NO   , NO   , NO                 , NO   , AL(4) , AL(5) , AL(6) , NO , \
      NO   , NO   , NO   , NO   , NO                 , NO   , AL(1) , AL(2) , AL(3) , NO , \
      TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS v, NO    , NO    , TRNS
  ),

  KEYMAP( /* 5: CTRL Modified Numbers */
      NO   , NO   , NO   , NO   , NO                 , NO   , CT(7) , CT(8) , CT(9) , NO , \
      NO   , NO   , NO   , NO   , NO                 , NO   , CT(4) , CT(5) , CT(6) , NO , \
      NO   , TRNS , NO   , NO   , NO                 , NO   , CT(1) , CT(2) , CT(3) , NO , \
      TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS , TRNS  , NO    , NO    , TRNS
  ),

  KEYMAP( /* 6: gaming mode */
      Q   , W    , E   , R    , T                 , Y    , U   , I    , O    , P    , \
      A   , S    , D   , F    , G                 , H    , J   , K    , L    , SCLN , \
      Z   , X    , C   , V    , B                 , N    , M   , COMM , DOT  , SLSH , \
      ESC , LALT , TAB , LSFT , SPC , LGUI , LCTL , BSPC , LM1 , MINS , QUOT , OFF(6)
  ),
};
