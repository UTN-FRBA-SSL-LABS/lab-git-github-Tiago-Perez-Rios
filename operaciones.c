#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */
// Sumar recibe 2 enteros a y b no modificables (const) y devuelve su suma.
int sumar(const int a,const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */

int multiplicar(const int a, const int b) {
    return a*b; /* Recibe 2 valores enteros y multiplica los dos numeros ingresados por el usuario */
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}
