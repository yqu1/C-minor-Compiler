#ifndef TOKEN_H
#define TOKEN_H

enum token {
	TOKEN_INTEGER = 1,
	TOKEN_PLUS,
	TOKEN_MINUS,
	TOKEN_INCREMENT,
	TOKEN_DECREMENT,
	TOKEN_DIVISION,
	TOKEN_MODULUS,
	TOKEN_NOT_EQUALS,
	TOKEN_AND,
	TOKEN_OR,
	TOKEN_EXPONENT,
	TOKEN_INTEGER_LITERAL,
	TOKEN_ASTERISK,
	TOKEN_CHAR_LITERAL,
	TOKEN_STRING_LITERAL,
	TOKEN_ARRAY,
	TOKEN_BOOL,
	TOKEN_CHAR,
	TOKEN_ELSE,
	TOKEN_FALSE,
	TOKEN_FOR,
	TOKEN_FUNCTION,
	TOKEN_IF,
	TOKEN_PRINT,
	TOKEN_RETURN,
	TOKEN_TRUE,
	TOKEN_VOID,
	TOKEN_WHILE,
	TOKEN_LEFT_BRACKET,
	TOKEN_RIGHT_BRACKET,
	TOKEN_COMMA,
	TOKEN_COLON,
	TOKEN_LEFT_BRACE,
	TOKEN_RIGHT_BRACE,
	TOKEN_SEMICOLON,
	TOKEN_IDENTIFIER,
	TOKEN_FLOAT,
	TOKEN_COMMENT,
	TOKEN_STRING,
	TOKEN_UNRECOGNIZED,
	TOKEN_PREPROCESSOR,
	TOKEN_LT,
	TOKEN_GT,
	TOKEN_LE,
	TOKEN_GE,
	TOKEN_LEFT_PAREN,
	TOKEN_RIGHT_PAREN,
	TOKEN_EQUALS,
	TOKEN_ASSIGNMENT,
	TOKEN_WHITESPACE
};

typedef enum token token_t;

const char *token_string(token_t);

#endif
