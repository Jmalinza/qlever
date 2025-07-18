
// Generated from SparqlAutomatic.g4 by ANTLR 4.13.2

#ifndef QLEVER_SRC_PARSER_SPARQLPARSER_GENERATED_SPARQLAUTOMATICLEXER_H
#define QLEVER_SRC_PARSER_SPARQLPARSER_GENERATED_SPARQLAUTOMATICLEXER_H

#include "antlr4-runtime.h"

class SparqlAutomaticLexer : public antlr4::Lexer {
 public:
  enum {
    T__0 = 1,
    T__1 = 2,
    T__2 = 3,
    T__3 = 4,
    T__4 = 5,
    T__5 = 6,
    T__6 = 7,
    T__7 = 8,
    T__8 = 9,
    T__9 = 10,
    T__10 = 11,
    T__11 = 12,
    T__12 = 13,
    T__13 = 14,
    T__14 = 15,
    T__15 = 16,
    T__16 = 17,
    T__17 = 18,
    T__18 = 19,
    T__19 = 20,
    T__20 = 21,
    T__21 = 22,
    T__22 = 23,
    T__23 = 24,
    T__24 = 25,
    T__25 = 26,
    T__26 = 27,
    T__27 = 28,
    T__28 = 29,
    BASE = 30,
    PREFIX = 31,
    SELECT = 32,
    DISTINCT = 33,
    REDUCED = 34,
    AS = 35,
    CONSTRUCT = 36,
    WHERE = 37,
    DESCRIBE = 38,
    ASK = 39,
    FROM = 40,
    NAMED = 41,
    GROUPBY = 42,
    GROUP_CONCAT = 43,
    HAVING = 44,
    ORDERBY = 45,
    INTERNALSORTBY = 46,
    ASC = 47,
    DESC = 48,
    LIMIT = 49,
    OFFSET = 50,
    TEXTLIMIT = 51,
    VALUES = 52,
    LOAD = 53,
    SILENT = 54,
    INTO = 55,
    CLEAR = 56,
    DROP = 57,
    CREATE = 58,
    ADD = 59,
    TO = 60,
    DATA = 61,
    MOVE = 62,
    COPY = 63,
    INSERT = 64,
    DELETE = 65,
    WITH = 66,
    USING = 67,
    DEFAULT = 68,
    GRAPH = 69,
    ALL = 70,
    OPTIONAL = 71,
    SERVICE = 72,
    BIND = 73,
    UNDEF = 74,
    MINUS = 75,
    UNION = 76,
    FILTER = 77,
    NOT = 78,
    IN = 79,
    STR = 80,
    LANG = 81,
    LANGMATCHES = 82,
    DATATYPE = 83,
    BOUND = 84,
    IRI = 85,
    URI = 86,
    BNODE = 87,
    RAND = 88,
    ABS = 89,
    CEIL = 90,
    FLOOR = 91,
    ROUND = 92,
    CONCAT = 93,
    STRLEN = 94,
    UCASE = 95,
    LCASE = 96,
    ENCODE_FOR_URI = 97,
    FOR = 98,
    CONTAINS = 99,
    STRSTARTS = 100,
    STRENDS = 101,
    STRBEFORE = 102,
    STRAFTER = 103,
    YEAR = 104,
    MONTH = 105,
    DAY = 106,
    HOURS = 107,
    MINUTES = 108,
    SECONDS = 109,
    TIMEZONE = 110,
    TZ = 111,
    NOW = 112,
    UUID = 113,
    STRUUID = 114,
    SHA1 = 115,
    SHA256 = 116,
    SHA384 = 117,
    SHA512 = 118,
    MD5 = 119,
    COALESCE = 120,
    IF = 121,
    STRLANG = 122,
    STRDT = 123,
    SAMETERM = 124,
    ISIRI = 125,
    ISURI = 126,
    ISBLANK = 127,
    ISLITERAL = 128,
    ISNUMERIC = 129,
    REGEX = 130,
    SUBSTR = 131,
    REPLACE = 132,
    EXISTS = 133,
    COUNT = 134,
    SUM = 135,
    MIN = 136,
    MAX = 137,
    AVG = 138,
    STDEV = 139,
    SAMPLE = 140,
    SEPARATOR = 141,
    IRI_REF = 142,
    PNAME_NS = 143,
    PNAME_LN = 144,
    BLANK_NODE_LABEL = 145,
    VAR1 = 146,
    VAR2 = 147,
    LANGTAG = 148,
    PREFIX_LANGTAG = 149,
    INTEGER = 150,
    DECIMAL = 151,
    DOUBLE = 152,
    INTEGER_POSITIVE = 153,
    DECIMAL_POSITIVE = 154,
    DOUBLE_POSITIVE = 155,
    INTEGER_NEGATIVE = 156,
    DECIMAL_NEGATIVE = 157,
    DOUBLE_NEGATIVE = 158,
    EXPONENT = 159,
    STRING_LITERAL1 = 160,
    STRING_LITERAL2 = 161,
    STRING_LITERAL_LONG1 = 162,
    STRING_LITERAL_LONG2 = 163,
    ECHAR = 164,
    NIL = 165,
    ANON = 166,
    PN_CHARS_U = 167,
    VARNAME = 168,
    PN_PREFIX = 169,
    PN_LOCAL = 170,
    PLX = 171,
    PERCENT = 172,
    HEX = 173,
    PN_LOCAL_ESC = 174,
    WS = 175,
    COMMENTS = 176
  };

  explicit SparqlAutomaticLexer(antlr4::CharStream* input);

  ~SparqlAutomaticLexer() override;

  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily
  // initialized during the first call to the constructor. You can call this
  // function if you wish to initialize the static state ahead of time.
  static void initialize();

 private:
  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.
};

#endif  // QLEVER_SRC_PARSER_SPARQLPARSER_GENERATED_SPARQLAUTOMATICLEXER_H
