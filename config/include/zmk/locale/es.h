// es.h - Layout español para ZMK

#pragma once

#include <dt-bindings/zmk/keys.h>

// Letras acentuadas (teclas muertas + vocal)
#define ES_ACUT     LC(LS(KC_E))  // Tecla muerta de acento agudo (puede usarse sola)
#define ES_A_ACUT   ALGR(KC_A)    // á
#define ES_E_ACUT   ALGR(KC_E)    // é
#define ES_I_ACUT   ALGR(KC_I)    // í
#define ES_O_ACUT   ALGR(KC_O)    // ó
#define ES_U_ACUT   ALGR(KC_U)    // ú

// Símbolos comunes
#define ES_EXCL     LS(KC_1)      // !
#define ES_QUES     LS(KC_SLASH)  // ?
#define ES_IQU      ALGR(KC_SLASH) // ¿
#define ES_EXM      ALGR(KC_1)     // ¡
#define ES_PIPE     ALGR(KC_1)     // |
#define ES_AT       ALGR(KC_2)     // @
#define ES_HASH     ALGR(KC_3)     // #
#define ES_DLLR     ALGR(KC_4)     // $
#define ES_PRCNT    ALGR(KC_5)     // %
#define ES_CIRC     ALGR(KC_6)     // ^
#define ES_AMPS     ALGR(KC_7)     // &
#define ES_ASTRK    ALGR(KC_8)     // *
#define ES_LPAR     ALGR(KC_9)     // (
#define ES_RPAR     ALGR(KC_0)     // )

// Paréntesis, llaves, corchetes
#define ES_LBKT     ALGR(KC_LBRACKET)
#define ES_RBKT     ALGR(KC_RBRACKET)
#define ES_LCBR     ALGR(KC_LBRACKET) // {
#define ES_RCBR     ALGR(KC_RBRACKET) // }
#define ES_MINUS    KC_MINUS
#define ES_UNDS     LS(KC_MINUS)
#define ES_EQUAL    KC_EQUAL
#define ES_PLUS     LS(KC_EQUAL)
#define ES_SCLN     KC_SCLN
#define ES_COLON    LS(KC_SCLN)
#define ES_GRAVE    KC_GRAVE
#define ES_TILDE    LS(KC_GRAVE)
#define ES_BSLH     KC_BSLASH

// Otros
#define ES_QUOT     KC_QUOTE
#define ES_DQUO     LS(KC_QUOTE)
#define ES_N_TILDE  KC_SCLN       // la tecla de la ñ física en un teclado ANSI suele estar donde ';'
#define ES_MIDDOT   ALGR(KC_3)    // ·
