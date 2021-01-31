/* PR target/91400 */
/* { dg-do compile { target { ! ia32 } } } */
/* { dg-options "-O2" } */
/* { dg-final { scan-assembler-times "andl" 1 } } */
/* { dg-final { scan-assembler-times "68" 2 } } */
/* { dg-final { scan-assembler-not "je" } } */

_Bool f()
{
    return __builtin_cpu_supports("popcnt") && __builtin_cpu_supports("ssse3");
}
