#include QMK_KEYBOARD_H

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_A):
        case RGUI_T(KC_QUOT):
            return 250;       // pinkies — slow
        case LALT_T(KC_S):
        case RALT_T(KC_L):
            return 230;       // ring
        case LCTL_T(KC_D):
        case RCTL_T(KC_K):
            return 200;       // middle
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):
            return 185;       // index — fast
        default:
            return TAPPING_TERM;
    }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LGUI_T(KC_A):
        case RGUI_T(KC_QUOT):
            return 0;         // pinkies — no quick tap (always allow hold)
        default:
            return QUICK_TAP_TERM;
    }
}
