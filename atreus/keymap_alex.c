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

/* Find tag declaration in Vim*/
#define AC_TAG ACTION_MODS_KEY(MOD_LCTL, KC_RBRC)

/* Linewise word skipping */
#define AC_WL ACTION_MODS_KEY(MOD_LALT, KC_LEFT)
#define AC_WR ACTION_MODS_KEY(MOD_LALT, KC_RIGHT)

/* Window Tiling Macros */
#define AC_TFLS ACTION_MODS_KEY(MOD_LALT | MOD_LCTL | MOD_LGUI, KC_M)     /* Full Screen  */
#define AC_TLFT ACTION_MODS_KEY(MOD_LALT | MOD_LCTL | MOD_LGUI, KC_LEFT)  /* Tile Left    */
#define AC_TLRT ACTION_MODS_KEY(MOD_LALT | MOD_LCTL | MOD_LGUI, KC_RIGHT) /* Tile Right   */
#define AC_TNMN ACTION_MODS_KEY(MOD_LALT | MOD_LCTL, KC_RIGHT)            /* Next Monitor */
#define AC_TPMN ACTION_MODS_KEY(MOD_LALT | MOD_LCTL, KC_LEFT)             /* Prev Monitor */


const uint16_t PROGMEM actionmaps[][MATRIX_ROWS][MATRIX_COLS] = {

  KEYMAP( /* 0: mostly letters */
      Q        , TAP(5,W) , E    , R    , T                  , Y    , U    , I   , O    , P    , \
      A        , TAP(4,S) , D    , F    , G                  , H    , J   , K    , L    , SCLN , \
      TAP(3,Z) , X        , C    , V    , B                  , N    , M   , COMM , DOT  , SLSH , \
      ESC      , LALT     , TAB  , LSFT , BSPC , LGUI , LCTL , SPC , LM1  , MINS , QUOT , ENT
  ),

  KEYMAP( /* 1: punctuation and numbers */
      SH(1) , SH(2)   , SH(LBRC) , SH(RBRC) , GUI(GRAVE)               , SH(BSLS)  , 7    , 8   , 9  , SH(8)     , \
      SH(3) , SH(4)   , SH(9)    , SH(0)    , GRAVE                    , SH(GRAVE) , 4    , 5   , 6  , SH(EQUAL) , \
      SH(5) , SH(6)   , LBRC     , RBRC     , SH(GRAVE)                , SH(7)     , 1    , 2   , 3  , BSLS      , \
      ON(2) , ON(6)   , TAB      , LSFT     , BSPC      , LGUI  , LCTL , SPC       , LM1  , DOT , 0  , EQUAL
  ),

  KEYMAP( /* 2: arrows and function keys */
      INS , HOME , UP   , END   , PGUP               , UP   , F7     , F8  , F9  , F10 , \
      DEL , LEFT , DOWN , RIGHT , PGDN               , DOWN , F4     , F5  , F6  , F11 , \
      NO  , NO   , NO   , NO    , BOOT               , NO   , F1     , F2  , F3  , F12 , \
      NO  , LALT , TAB  , LSFT  , BSPC , LGUI , LCTL , SPC  , OFF(2) , NO  , NO  , ENT
  ),

  KEYMAP( /* 3: mouse */
      NO   , NO   , NO   , NO   , NO                 , WH_D , BTN1   , MS_U , BTN2 , NO , \
      ACL0 , ACL1 , ACL2 , NO   , NO                 , WH_U , MS_L   , MS_D , MS_R , NO , \
      TRNS , NO   , NO   , NO   , NO                 , NO   , NO     , NO   , NO   , NO , \
      ESC  , LALT , TAB  , LSFT , BSPC , LGUI , LCTL , SPC  , OFF(3) , NO   , NO   , ENT
  ),

  KEYMAP( /* 4: quick arrows, tiling,  and media */
      NO  , NO   , NO   , NO   , NO                 , MPRV , MPLY   , MNXT , VOLD  , VOLU , \
      NO  , TRNS , NO   , NO   , NO                 , LEFT , DOWN   , UP   , RIGHT , MUTE , \
      NO  , NO   , NO   , NO   , NO                 , TPMN , TLFT   , TFLS , TLRT  , TNMN , \
      ESC , LALT , TAB  , LSFT , DEL  , LGUI , LCTL , SPC  , OFF(4) , NO   , TAG   , ENT
  ),

  KEYMAP( /* 5: word movements */
      NO  , TRNS , NO   , NO   , NO                 , NO   , NO     , NO   , NO    , NO , \
      NO  , NO   , NO   , NO   , NO                 , WL   , DOWN   , UP   , WR    , NO , \
      NO  , NO   , NO   , NO   , NO                 , NO   , NO     , NO   , NO    , NO , \
      ESC , LALT , TAB  , LSFT , DEL  , LGUI , LCTL , SPC  , OFF(5) , NO   , NO    , ENT
  ),

  KEYMAP( /* 6: gaming mode */
      Q   , W    , E   , R    , T                  , Y   , U   , I    , O    , P    , \
      A   , S    , D   , F    , G                  , H   , J   , K    , L    , SCLN , \
      Z   , X    , C   , V    , B                  , N   , M   , COMM , DOT  , SLSH , \
      ESC , LALT , TAB , LSFT , BSPC , LGUI , LCTL , SPC , LM1 , MINS , QUOT , OFF(6)
  ),
};
