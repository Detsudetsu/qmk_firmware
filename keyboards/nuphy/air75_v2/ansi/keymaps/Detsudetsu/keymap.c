// Copyright 2023 Persama (@Persama)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#include "keymap_japanese.h"

#define MT_SFMH MT(MOD_LSFT, JP_MHEN)
#define MT_SFKN MT(MOD_RSFT, JP_KANA)
#define LT_SPC LT(5, KC_SPC)

const key_override_t at_key_override  =  ko_make_basic(MOD_MASK_SHIFT, KC_2, JP_AT);        // SHIFT + 2 => "@"`
const key_override_t circ_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_6, JP_CIRC);      // SHIFT + 6 => "^"~
const key_override_t amrp_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_7, JP_AMPR);      // SHIFT + 7 => "&"&
const key_override_t astr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_8, JP_ASTR);      // SHIFT + 8 => "*"*
const key_override_t lprn_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_9, JP_LPRN);      // SHIFT + 9 => "("(
const key_override_t rprn_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_0, JP_RPRN);      // SHIFT + 0 => ")")
const key_override_t unds_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, JP_UNDS);   // SHIFT + "-" => "_"none
const key_override_t eql_key_override =  ko_make_with_layers_and_negmods(0, KC_EQL, JP_EQL, ~0, (uint8_t) MOD_MASK_SHIFT);      // "="-  
const key_override_t plus_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_EQL, JP_PLUS);    // SHIFT + "=" => "+"+
const key_override_t lbrc_key_override = ko_make_with_layers_and_negmods(0, KC_LBRC, JP_LBRC, ~0, (uint8_t) MOD_MASK_SHIFT);    // "["[ 
const key_override_t lcbr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_LBRC, JP_LCBR);   // SHIFT + "[" => "{"{
const key_override_t rbbr_key_override = ko_make_with_layers_and_negmods(0, KC_RBRC, JP_RBRC, ~0, (uint8_t) MOD_MASK_SHIFT);    // "]"] 
const key_override_t rcbr_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_RBRC, JP_RCBR);   // SHIFT + "]" => "}"}
const key_override_t bsls_key_override = ko_make_with_layers_and_negmods(0, KC_BSLS, JP_BSLS, ~0, (uint8_t) MOD_MASK_SHIFT);    // "\"none 
const key_override_t pipe_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSLS, JP_PIPE);   // SHIFT + "\" => "|"none
const key_override_t coln_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_SCLN, JP_COLN);   // SHIFT + ";" => ":"*
const key_override_t quot_key_override = ko_make_with_layers_and_negmods(0, KC_QUOT, JP_QUOT, ~0, (uint8_t) MOD_MASK_SHIFT);    // "'"7
const key_override_t dquo_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, JP_DQUO);   // SHIFT + "'" => '"'"
const key_override_t grv_key_override =  ko_make_with_layers_and_negmods(0, KC_GRAVE, JP_GRV, ~0, (uint8_t) MOD_MASK_SHIFT);    // "`"@
const key_override_t tild_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_GRAVE, JP_TILD);  // SHIFT + "`" => "~"

const key_override_t **key_overrides = (const key_override_t *[]){
	&at_key_override, &circ_key_override, &amrp_key_override, &astr_key_override,
    &lprn_key_override, &rprn_key_override, &unds_key_override, &eql_key_override, &plus_key_override,
    &lcbr_key_override, &dquo_key_override, &lbrc_key_override, &rbbr_key_override, &rcbr_key_override,
    &bsls_key_override, &pipe_key_override, &coln_key_override, &quot_key_override, &grv_key_override,
    &tild_key_override, NULL };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// layer Mac
[0] = LAYOUT_ansi_84(
	KC_ESC, 	KC_F1,  	KC_F2,  	KC_F3, 		KC_F4,  	KC_F5,  	KC_F6,  	KC_F7,  	KC_F8,  	KC_F9, 		KC_F10, 	KC_F11, 	KC_F12, 	KC_PSCR,	KC_INS,		KC_DEL,
	KC_GRV, 	KC_1,   	KC_2,   	KC_3,  		KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,  		KC_0,   	KC_MINS,	KC_EQL, 				KC_BSPC,	KC_PGUP,
	KC_TAB, 	KC_Q,   	KC_W,   	KC_E,  		KC_R,   	KC_T,   	KC_Y,   	KC_U,   	KC_I,   	KC_O,  		KC_P,   	KC_LBRC,	KC_RBRC, 				KC_BSLS,	KC_PGDN,
	KC_LCTL,	KC_A,   	KC_S,   	KC_D,  		KC_F,   	KC_G,   	KC_H,   	KC_J,   	KC_K,   	KC_L,  		KC_SCLN,	KC_QUOT, 	 						KC_ENT,		KC_HOME,
	MT_SFMH,				KC_Z,   	KC_X,   	KC_C,  		KC_V,   	KC_B,   	KC_N,   	KC_M,   	KC_COMM,	KC_DOT,		KC_SLSH,				MT_SFKN,	KC_UP,		KC_END,
	KC_LCTL,	KC_LGUI,	KC_LALT,										LT_SPC, 							KC_RALT,	MO(1),   	KC_RCTL,				KC_LEFT,	KC_DOWN,    KC_RGHT),
// layer Mac Fn
[1] = LAYOUT_ansi_84(
	_______, 	KC_BRID,  	KC_BRIU,  	_______,  	_______,   	_______,   	_______,   	KC_MPRV,   	KC_MPLY,   	KC_MNXT,  	KC_MUTE, 	KC_VOLD, 	KC_VOLU,	_______,	_______,	_______,
	_______, 	LNK_BLE1,  	LNK_BLE2,  	LNK_BLE3,  	LNK_RF,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	DEV_RESET,	SLEEP_MODE, 			BAT_SHOW,	_______,
	_______,	_______,   	_______,   	_______,  	_______,   	_______,   	_______,	_______,   	_______,   	_______,  	_______,	_______, 	 						_______,	_______,
	_______,				_______,   	_______,   	_______,  	_______,   	_______,   	_______,	MO(4), 		RGB_SPD,	RGB_SPI,	_______,				_______,	RGB_VAI,	_______,
	_______,	_______,	_______,										_______, 							_______,	MO(1),   	_______,				RGB_MOD,	RGB_VAD,    RGB_HUI),
// layer win
[2] = LAYOUT_ansi_84(
	KC_ESC, 	KC_F1,  	KC_F2,  	KC_F3, 		KC_F4,  	KC_F5,  	KC_F6,  	KC_F7,  	KC_F8,  	KC_F9, 		KC_F10, 	KC_F11, 	KC_F12, 	KC_PSCR,	KC_INS,		KC_DEL,
	KC_GRV, 	KC_1,   	KC_2,   	KC_3,  		KC_4,   	KC_5,   	KC_6,   	KC_7,   	KC_8,   	KC_9,  		KC_0,   	KC_MINS,	KC_EQL, 				KC_BSPC,	KC_PGUP,
	KC_TAB, 	KC_Q,   	KC_W,   	KC_E,  		KC_R,   	KC_T,   	KC_Y,   	KC_U,   	KC_I,   	KC_O,  		KC_P,   	KC_LBRC,	KC_RBRC, 				KC_BSLS,	KC_PGDN,
	KC_LCTL,	KC_A,   	KC_S,   	KC_D,  		KC_F,   	KC_G,   	KC_H,   	KC_J,   	KC_K,   	KC_L,  		KC_SCLN,	KC_QUOT, 	 						KC_ENT,		KC_HOME,
	MT_SFMH,				KC_Z,   	KC_X,   	KC_C,  		KC_V,   	KC_B,   	KC_N,   	KC_M,   	KC_COMM,	KC_DOT,		KC_SLSH,				MT_SFKN,	KC_UP,		KC_END,
	KC_LCTL,	KC_LGUI,	KC_LALT,										LT_SPC, 							KC_RALT,	MO(3),   	KC_RCTL,				KC_LEFT,	KC_DOWN,    KC_RGHT),
// layer win Fn
[3] = LAYOUT_ansi_84(
	_______, 	KC_BRID,   	KC_BRIU,    _______,  	_______,   	_______,   	_______,   	KC_MPRV,   	KC_MPLY,   	KC_MNXT,  	KC_MUTE, 	KC_VOLD, 	KC_VOLU,	_______,	_______,	_______,
	_______, 	LNK_BLE1,  	LNK_BLE2,  	LNK_BLE3,  	LNK_RF,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	DEV_RESET,	SLEEP_MODE, 			BAT_SHOW,	_______,
	_______,	_______,   	_______,   	_______,  	_______,   	_______,   	_______,	_______,   	_______,   	_______,  	_______,	_______, 	 						_______,	_______,
	_______,				_______,   	_______,   	_______,  	_______,   	_______,   	_______,	MO(4), 		RGB_SPD,	RGB_SPI,	_______,				_______,	RGB_VAI,	_______,
	_______,	_______,	_______,										_______, 							_______,	MO(3),   	_______,				RGB_MOD,	RGB_VAD,    RGB_HUI),
// layer 4
[4] = LAYOUT_ansi_84(
	_______, 	_______,  	_______,  	_______, 	_______,  	_______,  	_______,  	_______,  	_______,  	_______, 	_______, 	_______, 	_______, 	_______,	_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______,	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,	_______, 	 						_______,	_______,
	_______,				_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	SIDE_SPD,	SIDE_SPI,	_______,				_______,	SIDE_VAI,	_______,
	_______,	_______,	_______,										_______, 							_______,	MO(4),   	_______,				SIDE_MOD,	SIDE_VAD,   SIDE_HUI),
// layer 5
[5] = LAYOUT_ansi_84(
	_______, 	_______,  	_______,  	_______, 	_______,  	_______,  	_______,  	_______,  	_______,  	_______, 	_______, 	_______, 	_______, 	_______,	_______,	_______,
	_______, 	_______,   	_______,   	_______,  	_______,   	_______,   	_______,   	_______,   	_______,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______, 	KC_ESC,   	KC_WBAK,   	KC_WFWD,  	_______,   	_______,   	_______,   	_______,   	KC_UP,   	_______,  	_______,   	_______,	_______, 				_______,	_______,
	_______,	KC_HOME,   	_______,   	_______,  	KC_END,   	_______,   	_______,   	KC_LEFT,   	KC_DOWN,   	KC_RGHT,  	KC_ENT,		_______, 	 						_______,	_______,
	_______,				_______,   	_______,   	_______,  	_______,   	_______,   	KC_BSPC,   	KC_BSPC,   	KC_BSPC,	KC_BSPC,	KC_BSPC,				_______,	_______,	_______,
	_______,	_______,	_______,										_______, 							_______,	_______,   	_______,				_______,	_______,	_______)
};
