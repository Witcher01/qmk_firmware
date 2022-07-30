/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Copyright 2022 witcher <witcher@wiredspace.de>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap_german.h"

#define GUI_ESC GUI_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// 0 - Base
	[0] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      MO(2),    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      MO(2),    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
	                                        KC_LCTL, GUI_ESC,  KC_SPC,    KC_LSFT,   MO(1), KC_LALT
	                                    //`--------------------------'  `--------------------------'
	),
	// 1 - Symbols
	[1] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	    _______, KC_BSLS, KC_SLSH, KC_LBRC, KC_RBRC, KC_TILD,                      KC_PIPE,  KC_EQL, KC_PLUS, KC_MINS, KC_UNDS, _______,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      MO(6), KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN,  KC_GRV,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, _______, _______,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      MO(6), KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
	//|--------+--------+--------+--------+--------+--------+--------|  --------+--------+--------+--------+--------+--------+--------|
	                                        _______, _______, _______,    _______, KC_TRNS, _______
	                                    //`--------------------------'  `--------------------------'
	),
	// 2 - MAN
	[2] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	    _______, _______, KC_BRID, KC_VOLU, KC_BRIU, _______,                      _______,    KC_7,    KC_8,    KC_9, KC_ASTR, _______,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_TRNS, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, _______,                      _______,    KC_4,    KC_5,    KC_6, KC_PLUS, _______,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_TRNS, _______, _______, KC_VOLD, _______, _______,                      _______,    KC_1,    KC_2,    KC_3, KC_BSLS, _______,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
	                                        _______, _______, KC_PSCR,       KC_0,   MO(6), _______
	                                    //`--------------------------'  `--------------------------'
	),
	// 3 - Base (German)
	[3] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	     KC_TAB,    DE_Q,    DE_W,    DE_E,    DE_R,    DE_T,                         DE_Y,    DE_U,    DE_I,    DE_O,   DE_P,  KC_BSPC,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      MO(5),    DE_A,    DE_S,    DE_D,    DE_F,    DE_G,                         DE_H,    DE_J,    DE_K,    DE_L, DE_SCLN, DE_QUOT,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      MO(5),    DE_Z,    DE_X,    DE_C,    DE_V,    DE_B,                         DE_N,    DE_M, DE_COMM,  DE_DOT, DE_SLSH,  KC_ENT,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
	                                        KC_LCTL, GUI_ESC,  KC_SPC,    KC_LSFT,   MO(4), KC_LALT
	                                    //`--------------------------'  `--------------------------'
	),
	// 4 - Symbols (German)
	[4] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	      DE_SS, DE_BSLS, DE_SLSH, DE_LBRC, DE_RBRC, DE_TILD,                      DE_PIPE,  DE_EQL, DE_PLUS, DE_MINS, DE_UNDS, DE_UDIA,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      MO(6), DE_LCBR, DE_RCBR, DE_LPRN, DE_RPRN,  DE_GRV,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, DE_ODIA, DE_ADIA,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	      MO(6), DE_EXLM,   DE_AT, DE_HASH,  DE_DLR, DE_PERC,                      DE_CIRC, DE_AMPR, DE_ASTR, DE_LPRN, DE_RPRN, _______,
	//|--------+--------+--------+--------+--------+--------+--------|  --------+--------+--------+--------+--------+--------+--------|
	                                        _______, _______, _______,    _______, KC_TRNS, _______
	                                    //`--------------------------'  `--------------------------'
	),
	// 5 - MAN (German)
	[5] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	    _______, _______, KC_BRID, KC_VOLU, KC_BRIU, _______,                      DE_EURO,    KC_7,    KC_8,    KC_9, DE_ASTR, _______,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_TRNS, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, _______,                      _______,    KC_4,    KC_5,    KC_6, DE_PLUS, _______,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_TRNS, _______, _______, KC_VOLD, _______, _______,                      _______,    KC_1,    KC_2,    KC_3, DE_BSLS, _______,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
	                                        _______, _______, KC_PSCR,       KC_0,   MO(6), _______
	                                    //`--------------------------'  `--------------------------'
	),
	// 6 - Extra
	[6] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	      KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                        KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_TRNS, _______,   DF(7),   DF(3),   DF(0), _______,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______, _______,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_TRNS, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
	                                        _______, _______, _______,    _______, KC_TRNS, _______
	                                    //`--------------------------'  `--------------------------'
	),
	// 7 - Base (Gaming)
	[7] = LAYOUT_split_3x6_3(
	//,-----------------------------------------------------.                    ,-----------------------------------------------------.
	     KC_TAB,    DE_Q,    DE_W,    DE_E,    DE_R,    KC_4,                         DE_Z,    DE_U,    DE_I,    DE_O,   DE_P,  KC_BSPC,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_LSFT,    DE_A,    DE_S,    DE_D,    DE_F,    DE_G,                         DE_H,    DE_J,    DE_K,    DE_L, DE_SCLN, DE_QUOT,
	//|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
	    KC_LCTL,    DE_Y,    DE_X,    DE_C,    DE_V,    DE_B,                         DE_N,    DE_M, DE_COMM,  DE_DOT, DE_SLSH,  KC_ENT,
	//|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
	                                           KC_2, GUI_ESC,  KC_SPC,    KC_LSFT,   DF(3), KC_LALT
	                                    //`--------------------------'  `--------------------------'
	),
};

#ifdef KEY_OVERRIDE_ENABLE
// layers 5, 4 and 3 are layers for a german keyboard layout
#    define GERMAN_LAYERS_BITMAP (1 << 5) | (1 << 4) | (1 << 3)
// override german keys to act like english layout when shift keys are pressed
const key_override_t colon_key_override = {
	.trigger      = DE_SCLN,
	.trigger_mods = MOD_MASK_SHIFT,
	.replacement  = DE_COLN,
	.layers       = GERMAN_LAYERS_BITMAP,
	.options      = ko_options_default,
};
const key_override_t comma_key_override = {
	.trigger           = DE_COMM,
	.trigger_mods      = MOD_MASK_SHIFT,
	.replacement       = DE_LABK,
	.layers            = GERMAN_LAYERS_BITMAP,
	.options           = ko_options_default,
	.suppressed_mods   = MOD_MASK_SHIFT,
	.negative_mod_mask = (uint8_t)(MOD_BIT(KC_LGUI) | MOD_BIT(KC_RGUI)),
};
const key_override_t period_key_override = {
	.trigger           = DE_DOT,
	.trigger_mods      = MOD_MASK_SHIFT,
	.replacement       = DE_RABK,
	.layers            = GERMAN_LAYERS_BITMAP,
	.options           = ko_options_default,
	.negative_mod_mask = (uint8_t)(MOD_BIT(KC_LGUI) | MOD_BIT(KC_RGUI)),
};
const key_override_t apostrophe_key_override = {
	.trigger      = DE_QUOT,
	.trigger_mods = MOD_MASK_SHIFT,
	.replacement  = DE_DQUO,
	.layers       = GERMAN_LAYERS_BITMAP,
	.options      = ko_options_default,
};
const key_override_t slash_key_override = {
	.trigger      = DE_SLSH,
	.trigger_mods = MOD_MASK_SHIFT,
	.replacement  = DE_QUES,
	.layers       = GERMAN_LAYERS_BITMAP,
	.options      = ko_options_default,
};
const key_override_t grave_key_override = {
	.trigger         = DE_GRV,
	.trigger_mods    = MOD_MASK_SHIFT,
	.replacement     = DE_ACUT,
	.layers          = GERMAN_LAYERS_BITMAP,
	.options         = ko_options_default,
	.suppressed_mods = MOD_MASK_SHIFT,
};

// universal overrides
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT,
		KC_BSPC, KC_DEL);

const key_override_t **key_overrides = (const key_override_t *[]) {
	&colon_key_override, &comma_key_override, &period_key_override,
	&apostrophe_key_override, &slash_key_override, &grave_key_override,
	&delete_key_override, NULL
};
#endif  // KEY_OVERRIDE_ENABLE

#ifdef OLED_ENABLE
#    include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	if (!is_keyboard_master()) {
		return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
	}
	return rotation;
}

#    define L_BASE 0
#    define L_SYMBOLS 2
#    define L_MAN 4
#    define L_BASE_GERMAN 8
#    define L_SYMBOLS_GERMAN 16
#    define L_MAN_GERMAN 32
#    define L_EXTRA 64

void oled_render_layer_state(void) {
	oled_write_P(PSTR("L: "), false);

	switch (layer_state) {
		case L_BASE:
			oled_write_ln_P(PSTR("Base"), false);
			break;
		case L_SYMBOLS:
			oled_write_ln_P(PSTR("Symbols"), false);
			break;
		case L_MAN:
			oled_write_ln_P(PSTR("Media/Num"), false);
			break;
		case L_BASE_GERMAN:
			oled_write_ln_P(PSTR("Base (German)"), false);
			break;
		case L_SYMBOLS_GERMAN:
			oled_write_ln_P(PSTR("Symbols (German)"), false);
			break;
		case L_MAN_GERMAN:
			oled_write_ln_P(PSTR("Media/Num (German)"), false);
			break;
		case L_EXTRA:
		case L_EXTRA | L_SYMBOLS:
		case L_EXTRA | L_MAN:
		case L_EXTRA | L_SYMBOLS | L_MAN:
		case L_EXTRA | L_SYMBOLS_GERMAN:
		case L_EXTRA | L_MAN_GERMAN:
		case L_EXTRA | L_SYMBOLS_GERMAN | L_MAN_GERMAN:
			oled_write_ln_P(PSTR("Extra"), false);
			break;
		default:
			oled_write_ln_P(PSTR("Unhandled!"), false);
			break;
	}
}

char keylog_str[24] = {};

const char code_to_name[60] = {' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
	'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
	'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\', '#', ';', '\'', '`', ',',
	'.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
	char name = ' ';
	if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) || (keycode >=
			QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) {
		keycode = keycode & 0xFF;
	}
	if (keycode < 60) {
		name = code_to_name[keycode];
	}

	// update keylog
	snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
			record->event.key.row, record->event.key.col, keycode, name);
}

void oled_render_keylog(void) { oled_write(keylog_str, false); }

void render_bootmagic_status(bool status) {
	/* Show Ctrl-Gui Swap options */
	static const char PROGMEM logo[][2][3] = {
		{{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
		{{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
	};
	if (status) {
		oled_write_ln_P(logo[0][0], false);
		oled_write_ln_P(logo[0][1], false);
	} else {
		oled_write_ln_P(logo[1][0], false);
		oled_write_ln_P(logo[1][1], false);
	}
}

void oled_render_logo(void) {
	static const char PROGMEM crkbd_logo[] = {0x80, 0x81, 0x82, 0x83, 0x84,
		0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90,
		0x91, 0x92, 0x93, 0x94, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7,
		0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3,
		0xb4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca,
		0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0};
	oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
	if (is_keyboard_master()) {
		oled_render_layer_state();
		oled_render_keylog();
	} else {
		oled_render_logo();
	}
	return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	if (record->event.pressed) {
		set_keylog(keycode, record);
	}
	return true;
}
#endif  // OLED_ENABLE
