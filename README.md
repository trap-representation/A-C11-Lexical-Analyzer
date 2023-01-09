This is a lexical analyzer (written entirely in [Automata42](https://github.com/trap-representation/Automata42)) made for scanning preprocessed C(11) source files.

This lexical analyzer scans the source file for `token`s (C11 §6.4), and if it finds any, it writes them to `stdout`; however, it cannot (as of now) distinguish between:
- `identifier`s (C11 §6.4.2.1) and `keyword`s (C11 §6.4.1), and
- `identifier`s and `enumeration-constant`s (C11 §6.4.4).

Any instance of a `keyword` or `enumeration-constant` is recognized as an `identifier`.

Check out the test files (`./tests/test*.c`) and the corresponding output from the scanner (`./tests/test-tokens*.c`) when it's fed those files to get an idea of how the scanner works.
