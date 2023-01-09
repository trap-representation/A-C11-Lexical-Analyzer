This is a lexical analyzer (written entirely in [Automata42](https://github.com/trap-representation/Automata42)) made for scanning preprocessed C(11) source files.

This lexical analyzer however (as of now), cannot distinguish between:
- `identifier`s (6.4.2.1) and `keyword`s (6.4.1), and
- `identifier`s and `enumeration-constant`s (6.4.4).
