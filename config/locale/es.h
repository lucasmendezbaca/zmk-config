#pragma once

// Letras y acentos típicos del español (requiere layout Español en Windows)
// NOTA: Estas teclas funcionan con la distribución física ANSI

// Ñ y acentos
#define ES_N_TILDE     &kp SCLN        // tecla de ñ en ANSI (está donde va ;)
#define ES_QUOT        &kp QUOTE       // comilla simple '
#define ES_DQUO        &kp LS(QUOTE)   // comilla doble "
#define ES_GRAVE       &kp GRAVE       // ` acento grave
#define ES_TILDE       &kp LS(GRAVE)   // ~ virgulilla

// Vocales acentuadas: debes presionar la tecla de acento ` y luego la vocal.
// Alternativamente puedes definirlas con combinaciones si las usas mucho.

// Signos de puntuación
#define ES_DOT         &kp DOT         // .
#define ES_COMMA       &kp COMMA       // ,
#define ES_SCLN        &kp SCLN        // ;
#define ES_COLON       &kp LS(SCLN)    // :

// Números
#define ES_N1          &kp N1
#define ES_N2          &kp N2
#define ES_N3          &kp N3
#define ES_N4          &kp N4
#define ES_N5          &kp N5
#define ES_N6          &kp N6
#define ES_N7          &kp N7
#define ES_N8          &kp N8
#define ES_N9          &kp N9
#define ES_N0          &kp N0

// Símbolos (requiere distribución Española en Windows)
#define ES_EXCL        &kp LS(N1)        // !
#define ES_IQU         &kp ALGR(SLSH)    // ¿
#define ES_QUES        &kp LS(SLSH)      // ?
#define ES_EXM         &kp ALGR(N1)      // ¡
#define ES_AT          &kp ALGR(N2)      // @
#define ES_HASH        &kp ALGR(N3)      // #
#define ES_DLLR        &kp ALGR(N4)      // $
#define ES_PRCNT       &kp ALGR(N5)      // %
#define ES_CIRC        &kp ALGR(N6)      // ^
#define ES_AMPS        &kp ALGR(N7)      // &
#define ES_ASTRK       &kp ALGR(N8)      // *
#define ES_LPAR        &kp ALGR(N9)      // (
#define ES_RPAR        &kp ALGR(N0)      // )

// Paréntesis, corchetes, llaves
#define ES_MINUS       &kp MINUS         // -
#define ES_UNDS        &kp LS(MINUS)     // _
#define ES_EQUAL       &kp EQUAL         // =
#define ES_PLUS        &kp LS(EQUAL)     // +

#define ES_BSLH        &kp BSLH          // \
#define ES_SLSH        &kp SLSH          // /
#define ES_PIPE        &kp ALGR(N1)      // |
#define ES_LBKT        &kp LBKT          // [
#define ES_RBKT        &kp RBKT          // ]
#define ES_LCBR        &kp LS(LBKT)      // {
#define ES_RCBR        &kp LS(RBKT)      // }

#define ES_MIDDOT      &kp ALGR(N3)      // ·
