#pragma once

// Letras y acentos típicos del español (requiere layout Español en Windows)
// NOTA: Estas teclas funcionan con la distribución física ANSI

// Ñ y acentos
#define ES_N_TILDE     SCLN        // tecla de ñ en ANSI (está donde va ;)
#define ES_QUOT        QUOTE       // comilla simple '
#define ES_DQUO        LS(QUOTE)   // comilla doble "
#define ES_GRAVE       GRAVE       // ` acento grave
#define ES_TILDE       LS(GRAVE)   // ~ virgulilla

// Vocales acentuadas: debes presionar la tecla de acento ` y luego la vocal.
// Alternativamente puedes definirlas con combinaciones si las usas mucho.

// Signos de puntuación
#define ES_DOT         DOT         // .
#define ES_COMMA       COMMA       // ,
#define ES_SCLN        SCLN        // ;
#define ES_COLON       LS(SCLN)    // :

// Números
#define ES_N1          N1
#define ES_N2          N2
#define ES_N3          N3
#define ES_N4          N4
#define ES_N5          N5
#define ES_N6          N6
#define ES_N7          N7
#define ES_N8          N8
#define ES_N9          N9
#define ES_N0          N0

// Símbolos (requiere distribución Española en Windows)
#define ES_EXCL        LS(N1)        // !
#define ES_IQU         ALGR(SLSH)    // ¿
#define ES_QUES        LS(SLSH)      // ?
#define ES_EXM         ALGR(N1)      // ¡
#define ES_AT          ALGR(N2)      // @
#define ES_HASH        ALGR(N3)      // #
#define ES_DLLR        ALGR(N4)      // $
#define ES_PRCNT       ALGR(N5)      // %
#define ES_CIRC        ALGR(N6)      // ^
#define ES_AMPS        ALGR(N7)      // &
#define ES_ASTRK       ALGR(N8)      // *
#define ES_LPAR        ALGR(N9)      // (
#define ES_RPAR        ALGR(N0)      // )

// Paréntesis, corchetes, llaves
#define ES_MINUS       MINUS         // -
#define ES_UNDS        LS(MINUS)     // _
#define ES_EQUAL       EQUAL         // =
#define ES_PLUS        LS(EQUAL)     // +

#define ES_BSLH        BSLH          // \
#define ES_SLSH        SLSH          // /
#define ES_PIPE        ALGR(N1)      // |
#define ES_LBKT        LBKT          // [
#define ES_RBKT        RBKT          // ]
#define ES_LCBR        LS(LBKT)      // {
#define ES_RCBR        LS(RBKT)      // }

#define ES_MIDDOT      ALGR(N3)      // ·
