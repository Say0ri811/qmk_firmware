/* faruzan - southpaw numpad, ISO, STM32F072CBT6
 *
 * LAYOUT(...) 的参数顺序 = keyboard.json 里 layout 数组的顺序，
 * 也就是按 (矩阵行, 矩阵列) 升序（正好等于从上到下、从左到右）。
 * 改键直接改下面的 keycode，不要动顺序。
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        // F 行 / 顶栏
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_ESC, KC_PSCR, KC_SCRL, KC_PAUS,
        // 数字行 + 左数字键盘
        KC_NUM, KC_PSLS, KC_PAST, KC_PMNS, KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7,
        KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_HOME, KC_PGUP,
        // Tab 行
        KC_P7, KC_P8, KC_P9, KC_PPLS, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U,
        KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_ENT, KC_DEL, KC_END, KC_PGDN,
        // Caps 行
        KC_P4, KC_P5, KC_P6, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K,
        KC_L, KC_SCLN, KC_QUOT, KC_NUHS,
        // Shift 行
        KC_P1, KC_P2, KC_P3, KC_PENT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M,
        KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP,
        // 底行
        KC_P0, KC_PDOT, KC_LCTL, KC_LALT, KC_SPC, KC_LGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
};
