int main(void){
  int an_integer_constant=42;
  long another_integer_constant=0xF00L;
  float a_hexadecimal_floating_constant=0xabc.12p0;
  float a_decimal_floating_constant=1.8e8;
  char *a_string_literal="hi there";
  char *a_string_literal_with_escape_sequence="hello\nworld\xB\xf";
  char *a_utf_8_string_literal=u8"I'm a string literal";
  char a_character_constant='a';
  char another_character_constant=u'b';
  a_character_constant++;
  a_character_constant--;
  a_character_constant+=2;
  //I'm just a comment
  /*And I happen to be a
  multiline
  comment*/
  int foo\u00bar=22/7;
  int an_identifier_with_a_universal_character_name=foo\u00bar;
}
