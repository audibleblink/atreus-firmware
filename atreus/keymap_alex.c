#include "keymap_common.h"
#include <avr/pgmspace.h>
#include "actionmap.h"
#include "action_code.h"

/* My Custon Layer:
   - ALT <=> CMD
   - Use | ~ instead of default PageUp PageDown on L2
*/


/* Enable Momentary Dual Function Modifiers */
#define AC_TAP(layer, key)  ACTION_LAYER_TAP_KEY(layer, AC_##key)

/* Window Tiling Macros */
#define AC_TFLS ACTION_MODS_KEY(MOD_LALT | MOD_LCTL | MOD_LGUI, KC_M)     /* Full Screen  */
#define AC_TLFT ACTION_MODS_KEY(MOD_LALT | MOD_LCTL | MOD_LGUI, KC_LEFT)  /* Tile Left    */
#define AC_TLRT ACTION_MODS_KEY(MOD_LALT | MOD_LCTL | MOD_LGUI, KC_RIGHT) /* Tile Right   */
#define AC_TNMN ACTION_MODS_KEY(MOD_LALT | MOD_LCTL, KC_RIGHT)            /* Next Monitor */
#define AC_TPMN ACTION_MODS_KEY(MOD_LALT | MOD_LCTL, KC_LEFT)             /* Prev Monitor */


const uint16_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {

  KEYMAP( /* 0: mostly letters */
      TAP(5,Q) , W        , E    , R    , T                  , Y    , U    , I   , O    , P    , \
      A        , TAP(4,S) , D    , F    , G                  , H    , J   , K    , L    , SCLN , \
      TAP(3,Z) , X        , C    , V    , B                  , N    , M   , COMM , DOT  , SLSH , \
      ESC      , TAB      , LALT , LSFT , BSPC , LGUI , LCTL , SPC , LM1  , MINS , QUOT , ENT
  ),

  KEYMAP( /* 1: punctuation and numbers */
      SH(1) , SH(2)   , SH(LBRC) , SH(RBRC) , GUI(GRAVE)               , SH(BSLS)  , 7    , 8   , 9  , SH(8)     , \
      SH(3) , SH(4)   , SH(9)    , SH(0)    , GRAVE                    , SH(GRAVE) , 4    , 5   , 6  , SH(EQUAL) , \
      SH(5) , SH(6)   , LBRC     , RBRC     , SH(GRAVE)                , SH(7)     , 1    , 2   , 3  , BSLS      , \
      ON(2) , ON(3)   , LALT     , LSFT     , BSPC      , LCTL  , LGUI , SPC       , LM1  , DOT , 0  , EQUAL
  ),

  KEYMAP( /* 2: arrows and function keys */
      INS , HOME , UP   , END   , PGUP               , UP   , F7     , F8  , F9  , F10 , \
      DEL , LEFT , DOWN , RIGHT , PGDN               , DOWN , F4     , F5  , F6  , F11 , \
      NO  , NO   , NO   , NO    , BOOT               , NO   , F1     , F2  , F3  , F12 , \
      NO  , LSFT , LALT , LSFT  , BSPC , LGUI , LCTL , SPC  , OFF(2) , NO  , NO  , ENT
  ),

  KEYMAP( /* 3: mouse */
      NO   , NO   , NO   , NO   , NO                 , WH_D , BTN1   , MS_U , BTN2 , NO , \
      ACL0 , ACL1 , ACL2 , NO   , NO                 , WH_U , MS_L   , MS_D , MS_R , NO , \
      TRNS , NO   , NO   , NO   , NO                 , NO   , NO     , NO   , NO   , NO , \
      ESC  , LSFT , LALT , LSFT , BSPC , LGUI , LCTL , SPC  , OFF(3) , NO   , NO   , ENT
  ),

  KEYMAP( /* 4: quick arrows, tiling,  and media */
      NO  , NO   , NO   , NO   , NO                 , MPRV , MPLY   , MNXT , VOLD  , VOLU , \
      NO  , TRNS , NO   , NO   , NO                 , LEFT , DOWN   , UP   , RIGHT , MUTE , \
      NO  , NO   , NO   , NO   , NO                 , TPMN , TLFT   , TFLS , TLRT  , TNMN , \
      ESC , LSFT , LALT , LSFT , DEL  , LGUI , LCTL , SPC  , OFF(4) , NO   , NO    , ENT
  ),

  KEYMAP( /* 5: quick number selections */
      TRNS , NO , NO , NO , NO , NO , GUI(7)  , GUI(8)  , GUI(9)  , NO , \
      NO   , NO , NO , NO , NO , NO , GUI(4)  , GUI(5)  , GUI(6)  , NO , \
      NO   , NO , NO , NO , NO , NO , GUI(1)  , GUI(2)  , GUI(3)  , NO , \
      NO   , NO , NO , NO , NO , NO , NO , NO , NO , NO , NO , NO
  ),
};
