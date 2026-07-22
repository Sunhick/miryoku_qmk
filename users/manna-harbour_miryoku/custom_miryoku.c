#include QMK_KEYBOARD_H

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Pinkies — slowest fingers, most forgiveness
        case LGUI_T(KC_A):
        case RGUI_T(KC_QUOT):
            return 250;

        // Ring fingers
        case LALT_T(KC_S):
        case RALT_T(KC_L):
            return 230;

        // Middle fingers
        case LCTL_T(KC_D):
        case RCTL_T(KC_K):
            return 200;

        // Index fingers — fastest, tightest timing
        case LSFT_T(KC_F):
        case RSFT_T(KC_J):
            return 175;

        default:
            return TAPPING_TERM;
    }
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Pinkies — no quick tap, always allow hold
        case LGUI_T(KC_A):
        case RGUI_T(KC_QUOT):
            return 0;

        // Everything else — full tapping term window for repeat
        default:
            return TAPPING_TERM;
    }
}
