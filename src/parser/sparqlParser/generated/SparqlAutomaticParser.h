
// Generated from SparqlAutomatic.g4 by ANTLR 4.13.2

#ifndef QLEVER_SRC_PARSER_SPARQLPARSER_GENERATED_SPARQLAUTOMATICPARSER_H
#define QLEVER_SRC_PARSER_SPARQLPARSER_GENERATED_SPARQLAUTOMATICPARSER_H

#include "antlr4-runtime.h"

class SparqlAutomaticParser : public antlr4::Parser {
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

  enum {
    RuleQuery = 0,
    RulePrologue = 1,
    RuleBaseDecl = 2,
    RulePrefixDecl = 3,
    RuleSelectQuery = 4,
    RuleSubSelect = 5,
    RuleSelectClause = 6,
    RuleVarOrAlias = 7,
    RuleAlias = 8,
    RuleAliasWithoutBrackets = 9,
    RuleConstructQuery = 10,
    RuleDescribeQuery = 11,
    RuleAskQuery = 12,
    RuleDatasetClause = 13,
    RuleDefaultGraphClause = 14,
    RuleNamedGraphClause = 15,
    RuleSourceSelector = 16,
    RuleWhereClause = 17,
    RuleSolutionModifier = 18,
    RuleGroupClause = 19,
    RuleGroupCondition = 20,
    RuleHavingClause = 21,
    RuleHavingCondition = 22,
    RuleOrderClause = 23,
    RuleOrderCondition = 24,
    RuleLimitOffsetClauses = 25,
    RuleLimitClause = 26,
    RuleOffsetClause = 27,
    RuleTextLimitClause = 28,
    RuleValuesClause = 29,
    RuleUpdate = 30,
    RuleUpdate1 = 31,
    RuleLoad = 32,
    RuleClear = 33,
    RuleDrop = 34,
    RuleCreate = 35,
    RuleAdd = 36,
    RuleMove = 37,
    RuleCopy = 38,
    RuleInsertData = 39,
    RuleDeleteData = 40,
    RuleDeleteWhere = 41,
    RuleModify = 42,
    RuleDeleteClause = 43,
    RuleInsertClause = 44,
    RuleUsingClause = 45,
    RuleGraphOrDefault = 46,
    RuleGraphRef = 47,
    RuleGraphRefAll = 48,
    RuleQuadPattern = 49,
    RuleQuadData = 50,
    RuleQuads = 51,
    RuleQuadsNotTriples = 52,
    RuleTriplesTemplate = 53,
    RuleGroupGraphPattern = 54,
    RuleGroupGraphPatternSub = 55,
    RuleGraphPatternNotTriplesAndMaybeTriples = 56,
    RuleTriplesBlock = 57,
    RuleGraphPatternNotTriples = 58,
    RuleOptionalGraphPattern = 59,
    RuleGraphGraphPattern = 60,
    RuleServiceGraphPattern = 61,
    RuleBind = 62,
    RuleInlineData = 63,
    RuleDataBlock = 64,
    RuleInlineDataOneVar = 65,
    RuleInlineDataFull = 66,
    RuleDataBlockSingle = 67,
    RuleDataBlockValue = 68,
    RuleMinusGraphPattern = 69,
    RuleGroupOrUnionGraphPattern = 70,
    RuleFilterR = 71,
    RuleConstraint = 72,
    RuleFunctionCall = 73,
    RuleArgList = 74,
    RuleExpressionList = 75,
    RuleConstructTemplate = 76,
    RuleConstructTriples = 77,
    RuleTriplesSameSubject = 78,
    RulePropertyList = 79,
    RulePropertyListNotEmpty = 80,
    RuleVerb = 81,
    RuleObjectList = 82,
    RuleObjectR = 83,
    RuleTriplesSameSubjectPath = 84,
    RulePropertyListPath = 85,
    RulePropertyListPathNotEmpty = 86,
    RuleVerbPath = 87,
    RuleVerbSimple = 88,
    RuleTupleWithoutPath = 89,
    RuleTupleWithPath = 90,
    RuleVerbPathOrSimple = 91,
    RuleObjectListPath = 92,
    RuleObjectPath = 93,
    RulePath = 94,
    RulePathAlternative = 95,
    RulePathSequence = 96,
    RulePathElt = 97,
    RulePathEltOrInverse = 98,
    RulePathMod = 99,
    RulePathPrimary = 100,
    RulePathNegatedPropertySet = 101,
    RulePathOneInPropertySet = 102,
    RuleInteger = 103,
    RuleTriplesNode = 104,
    RuleBlankNodePropertyList = 105,
    RuleTriplesNodePath = 106,
    RuleBlankNodePropertyListPath = 107,
    RuleCollection = 108,
    RuleCollectionPath = 109,
    RuleGraphNode = 110,
    RuleGraphNodePath = 111,
    RuleVarOrTerm = 112,
    RuleVarOrIri = 113,
    RuleVar = 114,
    RuleGraphTerm = 115,
    RuleExpression = 116,
    RuleConditionalOrExpression = 117,
    RuleConditionalAndExpression = 118,
    RuleValueLogical = 119,
    RuleRelationalExpression = 120,
    RuleNumericExpression = 121,
    RuleAdditiveExpression = 122,
    RuleMultiplicativeExpressionWithSign = 123,
    RulePlusSubexpression = 124,
    RuleMinusSubexpression = 125,
    RuleMultiplicativeExpressionWithLeadingSignButNoSpace = 126,
    RuleMultiplicativeExpression = 127,
    RuleMultiplyOrDivideExpression = 128,
    RuleMultiplyExpression = 129,
    RuleDivideExpression = 130,
    RuleUnaryExpression = 131,
    RulePrimaryExpression = 132,
    RuleBrackettedExpression = 133,
    RuleBuiltInCall = 134,
    RuleRegexExpression = 135,
    RuleLangExpression = 136,
    RuleSubstringExpression = 137,
    RuleStrReplaceExpression = 138,
    RuleExistsFunc = 139,
    RuleNotExistsFunc = 140,
    RuleAggregate = 141,
    RuleIriOrFunction = 142,
    RuleRdfLiteral = 143,
    RuleNumericLiteral = 144,
    RuleNumericLiteralUnsigned = 145,
    RuleNumericLiteralPositive = 146,
    RuleNumericLiteralNegative = 147,
    RuleBooleanLiteral = 148,
    RuleString = 149,
    RuleIri = 150,
    RulePrefixedName = 151,
    RuleBlankNode = 152,
    RuleIriref = 153,
    RulePnameLn = 154,
    RulePnameNs = 155
  };

  explicit SparqlAutomaticParser(antlr4::TokenStream* input);

  SparqlAutomaticParser(antlr4::TokenStream* input,
                        const antlr4::atn::ParserATNSimulatorOptions& options);

  ~SparqlAutomaticParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  class QueryContext;
  class PrologueContext;
  class BaseDeclContext;
  class PrefixDeclContext;
  class SelectQueryContext;
  class SubSelectContext;
  class SelectClauseContext;
  class VarOrAliasContext;
  class AliasContext;
  class AliasWithoutBracketsContext;
  class ConstructQueryContext;
  class DescribeQueryContext;
  class AskQueryContext;
  class DatasetClauseContext;
  class DefaultGraphClauseContext;
  class NamedGraphClauseContext;
  class SourceSelectorContext;
  class WhereClauseContext;
  class SolutionModifierContext;
  class GroupClauseContext;
  class GroupConditionContext;
  class HavingClauseContext;
  class HavingConditionContext;
  class OrderClauseContext;
  class OrderConditionContext;
  class LimitOffsetClausesContext;
  class LimitClauseContext;
  class OffsetClauseContext;
  class TextLimitClauseContext;
  class ValuesClauseContext;
  class UpdateContext;
  class Update1Context;
  class LoadContext;
  class ClearContext;
  class DropContext;
  class CreateContext;
  class AddContext;
  class MoveContext;
  class CopyContext;
  class InsertDataContext;
  class DeleteDataContext;
  class DeleteWhereContext;
  class ModifyContext;
  class DeleteClauseContext;
  class InsertClauseContext;
  class UsingClauseContext;
  class GraphOrDefaultContext;
  class GraphRefContext;
  class GraphRefAllContext;
  class QuadPatternContext;
  class QuadDataContext;
  class QuadsContext;
  class QuadsNotTriplesContext;
  class TriplesTemplateContext;
  class GroupGraphPatternContext;
  class GroupGraphPatternSubContext;
  class GraphPatternNotTriplesAndMaybeTriplesContext;
  class TriplesBlockContext;
  class GraphPatternNotTriplesContext;
  class OptionalGraphPatternContext;
  class GraphGraphPatternContext;
  class ServiceGraphPatternContext;
  class BindContext;
  class InlineDataContext;
  class DataBlockContext;
  class InlineDataOneVarContext;
  class InlineDataFullContext;
  class DataBlockSingleContext;
  class DataBlockValueContext;
  class MinusGraphPatternContext;
  class GroupOrUnionGraphPatternContext;
  class FilterRContext;
  class ConstraintContext;
  class FunctionCallContext;
  class ArgListContext;
  class ExpressionListContext;
  class ConstructTemplateContext;
  class ConstructTriplesContext;
  class TriplesSameSubjectContext;
  class PropertyListContext;
  class PropertyListNotEmptyContext;
  class VerbContext;
  class ObjectListContext;
  class ObjectRContext;
  class TriplesSameSubjectPathContext;
  class PropertyListPathContext;
  class PropertyListPathNotEmptyContext;
  class VerbPathContext;
  class VerbSimpleContext;
  class TupleWithoutPathContext;
  class TupleWithPathContext;
  class VerbPathOrSimpleContext;
  class ObjectListPathContext;
  class ObjectPathContext;
  class PathContext;
  class PathAlternativeContext;
  class PathSequenceContext;
  class PathEltContext;
  class PathEltOrInverseContext;
  class PathModContext;
  class PathPrimaryContext;
  class PathNegatedPropertySetContext;
  class PathOneInPropertySetContext;
  class IntegerContext;
  class TriplesNodeContext;
  class BlankNodePropertyListContext;
  class TriplesNodePathContext;
  class BlankNodePropertyListPathContext;
  class CollectionContext;
  class CollectionPathContext;
  class GraphNodeContext;
  class GraphNodePathContext;
  class VarOrTermContext;
  class VarOrIriContext;
  class VarContext;
  class GraphTermContext;
  class ExpressionContext;
  class ConditionalOrExpressionContext;
  class ConditionalAndExpressionContext;
  class ValueLogicalContext;
  class RelationalExpressionContext;
  class NumericExpressionContext;
  class AdditiveExpressionContext;
  class MultiplicativeExpressionWithSignContext;
  class PlusSubexpressionContext;
  class MinusSubexpressionContext;
  class MultiplicativeExpressionWithLeadingSignButNoSpaceContext;
  class MultiplicativeExpressionContext;
  class MultiplyOrDivideExpressionContext;
  class MultiplyExpressionContext;
  class DivideExpressionContext;
  class UnaryExpressionContext;
  class PrimaryExpressionContext;
  class BrackettedExpressionContext;
  class BuiltInCallContext;
  class RegexExpressionContext;
  class LangExpressionContext;
  class SubstringExpressionContext;
  class StrReplaceExpressionContext;
  class ExistsFuncContext;
  class NotExistsFuncContext;
  class AggregateContext;
  class IriOrFunctionContext;
  class RdfLiteralContext;
  class NumericLiteralContext;
  class NumericLiteralUnsignedContext;
  class NumericLiteralPositiveContext;
  class NumericLiteralNegativeContext;
  class BooleanLiteralContext;
  class StringContext;
  class IriContext;
  class PrefixedNameContext;
  class BlankNodeContext;
  class IrirefContext;
  class PnameLnContext;
  class PnameNsContext;

  class QueryContext : public antlr4::ParserRuleContext {
   public:
    QueryContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrologueContext* prologue();
    ValuesClauseContext* valuesClause();
    antlr4::tree::TerminalNode* EOF();
    SelectQueryContext* selectQuery();
    ConstructQueryContext* constructQuery();
    DescribeQueryContext* describeQuery();
    AskQueryContext* askQuery();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  QueryContext* query();

  class PrologueContext : public antlr4::ParserRuleContext {
   public:
    PrologueContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BaseDeclContext*> baseDecl();
    BaseDeclContext* baseDecl(size_t i);
    std::vector<PrefixDeclContext*> prefixDecl();
    PrefixDeclContext* prefixDecl(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PrologueContext* prologue();

  class BaseDeclContext : public antlr4::ParserRuleContext {
   public:
    BaseDeclContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* BASE();
    IrirefContext* iriref();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  BaseDeclContext* baseDecl();

  class PrefixDeclContext : public antlr4::ParserRuleContext {
   public:
    PrefixDeclContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* PREFIX();
    antlr4::tree::TerminalNode* PNAME_NS();
    IrirefContext* iriref();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PrefixDeclContext* prefixDecl();

  class SelectQueryContext : public antlr4::ParserRuleContext {
   public:
    SelectQueryContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectClauseContext* selectClause();
    WhereClauseContext* whereClause();
    SolutionModifierContext* solutionModifier();
    std::vector<DatasetClauseContext*> datasetClause();
    DatasetClauseContext* datasetClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  SelectQueryContext* selectQuery();

  class SubSelectContext : public antlr4::ParserRuleContext {
   public:
    SubSelectContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelectClauseContext* selectClause();
    WhereClauseContext* whereClause();
    SolutionModifierContext* solutionModifier();
    ValuesClauseContext* valuesClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  SubSelectContext* subSelect();

  class SelectClauseContext : public antlr4::ParserRuleContext {
   public:
    antlr4::Token* asterisk = nullptr;
    SelectClauseContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* SELECT();
    antlr4::tree::TerminalNode* DISTINCT();
    antlr4::tree::TerminalNode* REDUCED();
    std::vector<VarOrAliasContext*> varOrAlias();
    VarOrAliasContext* varOrAlias(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  SelectClauseContext* selectClause();

  class VarOrAliasContext : public antlr4::ParserRuleContext {
   public:
    VarOrAliasContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext* var();
    AliasContext* alias();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  VarOrAliasContext* varOrAlias();

  class AliasContext : public antlr4::ParserRuleContext {
   public:
    AliasContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AliasWithoutBracketsContext* aliasWithoutBrackets();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  AliasContext* alias();

  class AliasWithoutBracketsContext : public antlr4::ParserRuleContext {
   public:
    AliasWithoutBracketsContext(antlr4::ParserRuleContext* parent,
                                size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext* expression();
    antlr4::tree::TerminalNode* AS();
    VarContext* var();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  AliasWithoutBracketsContext* aliasWithoutBrackets();

  class ConstructQueryContext : public antlr4::ParserRuleContext {
   public:
    ConstructQueryContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* CONSTRUCT();
    ConstructTemplateContext* constructTemplate();
    WhereClauseContext* whereClause();
    SolutionModifierContext* solutionModifier();
    antlr4::tree::TerminalNode* WHERE();
    std::vector<DatasetClauseContext*> datasetClause();
    DatasetClauseContext* datasetClause(size_t i);
    TriplesTemplateContext* triplesTemplate();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ConstructQueryContext* constructQuery();

  class DescribeQueryContext : public antlr4::ParserRuleContext {
   public:
    DescribeQueryContext(antlr4::ParserRuleContext* parent,
                         size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* DESCRIBE();
    SolutionModifierContext* solutionModifier();
    std::vector<DatasetClauseContext*> datasetClause();
    DatasetClauseContext* datasetClause(size_t i);
    WhereClauseContext* whereClause();
    std::vector<VarOrIriContext*> varOrIri();
    VarOrIriContext* varOrIri(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DescribeQueryContext* describeQuery();

  class AskQueryContext : public antlr4::ParserRuleContext {
   public:
    AskQueryContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* ASK();
    WhereClauseContext* whereClause();
    SolutionModifierContext* solutionModifier();
    std::vector<DatasetClauseContext*> datasetClause();
    DatasetClauseContext* datasetClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  AskQueryContext* askQuery();

  class DatasetClauseContext : public antlr4::ParserRuleContext {
   public:
    DatasetClauseContext(antlr4::ParserRuleContext* parent,
                         size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* FROM();
    DefaultGraphClauseContext* defaultGraphClause();
    NamedGraphClauseContext* namedGraphClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DatasetClauseContext* datasetClause();

  class DefaultGraphClauseContext : public antlr4::ParserRuleContext {
   public:
    DefaultGraphClauseContext(antlr4::ParserRuleContext* parent,
                              size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SourceSelectorContext* sourceSelector();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DefaultGraphClauseContext* defaultGraphClause();

  class NamedGraphClauseContext : public antlr4::ParserRuleContext {
   public:
    NamedGraphClauseContext(antlr4::ParserRuleContext* parent,
                            size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* NAMED();
    SourceSelectorContext* sourceSelector();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  NamedGraphClauseContext* namedGraphClause();

  class SourceSelectorContext : public antlr4::ParserRuleContext {
   public:
    SourceSelectorContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IriContext* iri();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  SourceSelectorContext* sourceSelector();

  class WhereClauseContext : public antlr4::ParserRuleContext {
   public:
    WhereClauseContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GroupGraphPatternContext* groupGraphPattern();
    antlr4::tree::TerminalNode* WHERE();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  WhereClauseContext* whereClause();

  class SolutionModifierContext : public antlr4::ParserRuleContext {
   public:
    SolutionModifierContext(antlr4::ParserRuleContext* parent,
                            size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GroupClauseContext* groupClause();
    HavingClauseContext* havingClause();
    OrderClauseContext* orderClause();
    LimitOffsetClausesContext* limitOffsetClauses();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  SolutionModifierContext* solutionModifier();

  class GroupClauseContext : public antlr4::ParserRuleContext {
   public:
    GroupClauseContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* GROUPBY();
    std::vector<GroupConditionContext*> groupCondition();
    GroupConditionContext* groupCondition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GroupClauseContext* groupClause();

  class GroupConditionContext : public antlr4::ParserRuleContext {
   public:
    GroupConditionContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BuiltInCallContext* builtInCall();
    FunctionCallContext* functionCall();
    ExpressionContext* expression();
    antlr4::tree::TerminalNode* AS();
    VarContext* var();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GroupConditionContext* groupCondition();

  class HavingClauseContext : public antlr4::ParserRuleContext {
   public:
    HavingClauseContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* HAVING();
    std::vector<HavingConditionContext*> havingCondition();
    HavingConditionContext* havingCondition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  HavingClauseContext* havingClause();

  class HavingConditionContext : public antlr4::ParserRuleContext {
   public:
    HavingConditionContext(antlr4::ParserRuleContext* parent,
                           size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstraintContext* constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  HavingConditionContext* havingCondition();

  class OrderClauseContext : public antlr4::ParserRuleContext {
   public:
    antlr4::Token* orderBy = nullptr;
    antlr4::Token* internalSortBy = nullptr;
    OrderClauseContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* ORDERBY();
    antlr4::tree::TerminalNode* INTERNALSORTBY();
    std::vector<OrderConditionContext*> orderCondition();
    OrderConditionContext* orderCondition(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  OrderClauseContext* orderClause();

  class OrderConditionContext : public antlr4::ParserRuleContext {
   public:
    OrderConditionContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BrackettedExpressionContext* brackettedExpression();
    antlr4::tree::TerminalNode* ASC();
    antlr4::tree::TerminalNode* DESC();
    ConstraintContext* constraint();
    VarContext* var();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  OrderConditionContext* orderCondition();

  class LimitOffsetClausesContext : public antlr4::ParserRuleContext {
   public:
    LimitOffsetClausesContext(antlr4::ParserRuleContext* parent,
                              size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LimitClauseContext* limitClause();
    OffsetClauseContext* offsetClause();
    TextLimitClauseContext* textLimitClause();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  LimitOffsetClausesContext* limitOffsetClauses();

  class LimitClauseContext : public antlr4::ParserRuleContext {
   public:
    LimitClauseContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* LIMIT();
    IntegerContext* integer();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  LimitClauseContext* limitClause();

  class OffsetClauseContext : public antlr4::ParserRuleContext {
   public:
    OffsetClauseContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* OFFSET();
    IntegerContext* integer();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  OffsetClauseContext* offsetClause();

  class TextLimitClauseContext : public antlr4::ParserRuleContext {
   public:
    TextLimitClauseContext(antlr4::ParserRuleContext* parent,
                           size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* TEXTLIMIT();
    IntegerContext* integer();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  TextLimitClauseContext* textLimitClause();

  class ValuesClauseContext : public antlr4::ParserRuleContext {
   public:
    ValuesClauseContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* VALUES();
    DataBlockContext* dataBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ValuesClauseContext* valuesClause();

  class UpdateContext : public antlr4::ParserRuleContext {
   public:
    UpdateContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PrologueContext*> prologue();
    PrologueContext* prologue(size_t i);
    antlr4::tree::TerminalNode* EOF();
    std::vector<Update1Context*> update1();
    Update1Context* update1(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  UpdateContext* update();

  class Update1Context : public antlr4::ParserRuleContext {
   public:
    Update1Context(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LoadContext* load();
    ClearContext* clear();
    DropContext* drop();
    AddContext* add();
    MoveContext* move();
    CopyContext* copy();
    CreateContext* create();
    InsertDataContext* insertData();
    DeleteDataContext* deleteData();
    DeleteWhereContext* deleteWhere();
    ModifyContext* modify();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  Update1Context* update1();

  class LoadContext : public antlr4::ParserRuleContext {
   public:
    LoadContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* LOAD();
    IriContext* iri();
    antlr4::tree::TerminalNode* SILENT();
    antlr4::tree::TerminalNode* INTO();
    GraphRefContext* graphRef();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  LoadContext* load();

  class ClearContext : public antlr4::ParserRuleContext {
   public:
    ClearContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* CLEAR();
    GraphRefAllContext* graphRefAll();
    antlr4::tree::TerminalNode* SILENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ClearContext* clear();

  class DropContext : public antlr4::ParserRuleContext {
   public:
    DropContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* DROP();
    GraphRefAllContext* graphRefAll();
    antlr4::tree::TerminalNode* SILENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DropContext* drop();

  class CreateContext : public antlr4::ParserRuleContext {
   public:
    CreateContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* CREATE();
    GraphRefContext* graphRef();
    antlr4::tree::TerminalNode* SILENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  CreateContext* create();

  class AddContext : public antlr4::ParserRuleContext {
   public:
    AddContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* ADD();
    std::vector<GraphOrDefaultContext*> graphOrDefault();
    GraphOrDefaultContext* graphOrDefault(size_t i);
    antlr4::tree::TerminalNode* TO();
    antlr4::tree::TerminalNode* SILENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  AddContext* add();

  class MoveContext : public antlr4::ParserRuleContext {
   public:
    MoveContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* MOVE();
    std::vector<GraphOrDefaultContext*> graphOrDefault();
    GraphOrDefaultContext* graphOrDefault(size_t i);
    antlr4::tree::TerminalNode* TO();
    antlr4::tree::TerminalNode* SILENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  MoveContext* move();

  class CopyContext : public antlr4::ParserRuleContext {
   public:
    CopyContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* COPY();
    std::vector<GraphOrDefaultContext*> graphOrDefault();
    GraphOrDefaultContext* graphOrDefault(size_t i);
    antlr4::tree::TerminalNode* TO();
    antlr4::tree::TerminalNode* SILENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  CopyContext* copy();

  class InsertDataContext : public antlr4::ParserRuleContext {
   public:
    InsertDataContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* INSERT();
    antlr4::tree::TerminalNode* DATA();
    QuadDataContext* quadData();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  InsertDataContext* insertData();

  class DeleteDataContext : public antlr4::ParserRuleContext {
   public:
    DeleteDataContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* DELETE();
    antlr4::tree::TerminalNode* DATA();
    QuadDataContext* quadData();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DeleteDataContext* deleteData();

  class DeleteWhereContext : public antlr4::ParserRuleContext {
   public:
    DeleteWhereContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* DELETE();
    antlr4::tree::TerminalNode* WHERE();
    QuadPatternContext* quadPattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DeleteWhereContext* deleteWhere();

  class ModifyContext : public antlr4::ParserRuleContext {
   public:
    ModifyContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* WHERE();
    GroupGraphPatternContext* groupGraphPattern();
    DeleteClauseContext* deleteClause();
    InsertClauseContext* insertClause();
    antlr4::tree::TerminalNode* WITH();
    IriContext* iri();
    std::vector<UsingClauseContext*> usingClause();
    UsingClauseContext* usingClause(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ModifyContext* modify();

  class DeleteClauseContext : public antlr4::ParserRuleContext {
   public:
    DeleteClauseContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* DELETE();
    QuadPatternContext* quadPattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DeleteClauseContext* deleteClause();

  class InsertClauseContext : public antlr4::ParserRuleContext {
   public:
    InsertClauseContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* INSERT();
    QuadPatternContext* quadPattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  InsertClauseContext* insertClause();

  class UsingClauseContext : public antlr4::ParserRuleContext {
   public:
    UsingClauseContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* USING();
    IriContext* iri();
    antlr4::tree::TerminalNode* NAMED();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  UsingClauseContext* usingClause();

  class GraphOrDefaultContext : public antlr4::ParserRuleContext {
   public:
    GraphOrDefaultContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* DEFAULT();
    IriContext* iri();
    antlr4::tree::TerminalNode* GRAPH();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GraphOrDefaultContext* graphOrDefault();

  class GraphRefContext : public antlr4::ParserRuleContext {
   public:
    GraphRefContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* GRAPH();
    IriContext* iri();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GraphRefContext* graphRef();

  class GraphRefAllContext : public antlr4::ParserRuleContext {
   public:
    GraphRefAllContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GraphRefContext* graphRef();
    antlr4::tree::TerminalNode* DEFAULT();
    antlr4::tree::TerminalNode* NAMED();
    antlr4::tree::TerminalNode* ALL();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GraphRefAllContext* graphRefAll();

  class QuadPatternContext : public antlr4::ParserRuleContext {
   public:
    QuadPatternContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuadsContext* quads();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  QuadPatternContext* quadPattern();

  class QuadDataContext : public antlr4::ParserRuleContext {
   public:
    QuadDataContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    QuadsContext* quads();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  QuadDataContext* quadData();

  class QuadsContext : public antlr4::ParserRuleContext {
   public:
    QuadsContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TriplesTemplateContext*> triplesTemplate();
    TriplesTemplateContext* triplesTemplate(size_t i);
    std::vector<QuadsNotTriplesContext*> quadsNotTriples();
    QuadsNotTriplesContext* quadsNotTriples(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  QuadsContext* quads();

  class QuadsNotTriplesContext : public antlr4::ParserRuleContext {
   public:
    QuadsNotTriplesContext(antlr4::ParserRuleContext* parent,
                           size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* GRAPH();
    VarOrIriContext* varOrIri();
    TriplesTemplateContext* triplesTemplate();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  QuadsNotTriplesContext* quadsNotTriples();

  class TriplesTemplateContext : public antlr4::ParserRuleContext {
   public:
    TriplesTemplateContext(antlr4::ParserRuleContext* parent,
                           size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TriplesSameSubjectContext*> triplesSameSubject();
    TriplesSameSubjectContext* triplesSameSubject(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  TriplesTemplateContext* triplesTemplate();

  class GroupGraphPatternContext : public antlr4::ParserRuleContext {
   public:
    GroupGraphPatternContext(antlr4::ParserRuleContext* parent,
                             size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubSelectContext* subSelect();
    GroupGraphPatternSubContext* groupGraphPatternSub();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GroupGraphPatternContext* groupGraphPattern();

  class GroupGraphPatternSubContext : public antlr4::ParserRuleContext {
   public:
    GroupGraphPatternSubContext(antlr4::ParserRuleContext* parent,
                                size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TriplesBlockContext* triplesBlock();
    std::vector<GraphPatternNotTriplesAndMaybeTriplesContext*>
    graphPatternNotTriplesAndMaybeTriples();
    GraphPatternNotTriplesAndMaybeTriplesContext*
    graphPatternNotTriplesAndMaybeTriples(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GroupGraphPatternSubContext* groupGraphPatternSub();

  class GraphPatternNotTriplesAndMaybeTriplesContext
      : public antlr4::ParserRuleContext {
   public:
    GraphPatternNotTriplesAndMaybeTriplesContext(
        antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GraphPatternNotTriplesContext* graphPatternNotTriples();
    TriplesBlockContext* triplesBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GraphPatternNotTriplesAndMaybeTriplesContext*
  graphPatternNotTriplesAndMaybeTriples();

  class TriplesBlockContext : public antlr4::ParserRuleContext {
   public:
    TriplesBlockContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TriplesSameSubjectPathContext* triplesSameSubjectPath();
    TriplesBlockContext* triplesBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  TriplesBlockContext* triplesBlock();

  class GraphPatternNotTriplesContext : public antlr4::ParserRuleContext {
   public:
    GraphPatternNotTriplesContext(antlr4::ParserRuleContext* parent,
                                  size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GroupOrUnionGraphPatternContext* groupOrUnionGraphPattern();
    OptionalGraphPatternContext* optionalGraphPattern();
    MinusGraphPatternContext* minusGraphPattern();
    GraphGraphPatternContext* graphGraphPattern();
    ServiceGraphPatternContext* serviceGraphPattern();
    FilterRContext* filterR();
    BindContext* bind();
    InlineDataContext* inlineData();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GraphPatternNotTriplesContext* graphPatternNotTriples();

  class OptionalGraphPatternContext : public antlr4::ParserRuleContext {
   public:
    OptionalGraphPatternContext(antlr4::ParserRuleContext* parent,
                                size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* OPTIONAL();
    GroupGraphPatternContext* groupGraphPattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  OptionalGraphPatternContext* optionalGraphPattern();

  class GraphGraphPatternContext : public antlr4::ParserRuleContext {
   public:
    GraphGraphPatternContext(antlr4::ParserRuleContext* parent,
                             size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* GRAPH();
    VarOrIriContext* varOrIri();
    GroupGraphPatternContext* groupGraphPattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GraphGraphPatternContext* graphGraphPattern();

  class ServiceGraphPatternContext : public antlr4::ParserRuleContext {
   public:
    ServiceGraphPatternContext(antlr4::ParserRuleContext* parent,
                               size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* SERVICE();
    VarOrIriContext* varOrIri();
    GroupGraphPatternContext* groupGraphPattern();
    antlr4::tree::TerminalNode* SILENT();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ServiceGraphPatternContext* serviceGraphPattern();

  class BindContext : public antlr4::ParserRuleContext {
   public:
    BindContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* BIND();
    ExpressionContext* expression();
    antlr4::tree::TerminalNode* AS();
    VarContext* var();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  BindContext* bind();

  class InlineDataContext : public antlr4::ParserRuleContext {
   public:
    InlineDataContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* VALUES();
    DataBlockContext* dataBlock();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  InlineDataContext* inlineData();

  class DataBlockContext : public antlr4::ParserRuleContext {
   public:
    DataBlockContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InlineDataOneVarContext* inlineDataOneVar();
    InlineDataFullContext* inlineDataFull();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DataBlockContext* dataBlock();

  class InlineDataOneVarContext : public antlr4::ParserRuleContext {
   public:
    InlineDataOneVarContext(antlr4::ParserRuleContext* parent,
                            size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext* var();
    std::vector<DataBlockValueContext*> dataBlockValue();
    DataBlockValueContext* dataBlockValue(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  InlineDataOneVarContext* inlineDataOneVar();

  class InlineDataFullContext : public antlr4::ParserRuleContext {
   public:
    InlineDataFullContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* NIL();
    std::vector<DataBlockSingleContext*> dataBlockSingle();
    DataBlockSingleContext* dataBlockSingle(size_t i);
    std::vector<VarContext*> var();
    VarContext* var(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  InlineDataFullContext* inlineDataFull();

  class DataBlockSingleContext : public antlr4::ParserRuleContext {
   public:
    DataBlockSingleContext(antlr4::ParserRuleContext* parent,
                           size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* NIL();
    std::vector<DataBlockValueContext*> dataBlockValue();
    DataBlockValueContext* dataBlockValue(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DataBlockSingleContext* dataBlockSingle();

  class DataBlockValueContext : public antlr4::ParserRuleContext {
   public:
    DataBlockValueContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IriContext* iri();
    RdfLiteralContext* rdfLiteral();
    NumericLiteralContext* numericLiteral();
    BooleanLiteralContext* booleanLiteral();
    antlr4::tree::TerminalNode* UNDEF();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DataBlockValueContext* dataBlockValue();

  class MinusGraphPatternContext : public antlr4::ParserRuleContext {
   public:
    MinusGraphPatternContext(antlr4::ParserRuleContext* parent,
                             size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* MINUS();
    GroupGraphPatternContext* groupGraphPattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  MinusGraphPatternContext* minusGraphPattern();

  class GroupOrUnionGraphPatternContext : public antlr4::ParserRuleContext {
   public:
    GroupOrUnionGraphPatternContext(antlr4::ParserRuleContext* parent,
                                    size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GroupGraphPatternContext*> groupGraphPattern();
    GroupGraphPatternContext* groupGraphPattern(size_t i);
    std::vector<antlr4::tree::TerminalNode*> UNION();
    antlr4::tree::TerminalNode* UNION(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GroupOrUnionGraphPatternContext* groupOrUnionGraphPattern();

  class FilterRContext : public antlr4::ParserRuleContext {
   public:
    FilterRContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* FILTER();
    ConstraintContext* constraint();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  FilterRContext* filterR();

  class ConstraintContext : public antlr4::ParserRuleContext {
   public:
    ConstraintContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BrackettedExpressionContext* brackettedExpression();
    BuiltInCallContext* builtInCall();
    FunctionCallContext* functionCall();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ConstraintContext* constraint();

  class FunctionCallContext : public antlr4::ParserRuleContext {
   public:
    FunctionCallContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IriContext* iri();
    ArgListContext* argList();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  FunctionCallContext* functionCall();

  class ArgListContext : public antlr4::ParserRuleContext {
   public:
    ArgListContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* NIL();
    std::vector<ExpressionContext*> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode* DISTINCT();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ArgListContext* argList();

  class ExpressionListContext : public antlr4::ParserRuleContext {
   public:
    ExpressionListContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* NIL();
    std::vector<ExpressionContext*> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ExpressionListContext* expressionList();

  class ConstructTemplateContext : public antlr4::ParserRuleContext {
   public:
    ConstructTemplateContext(antlr4::ParserRuleContext* parent,
                             size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstructTriplesContext* constructTriples();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ConstructTemplateContext* constructTemplate();

  class ConstructTriplesContext : public antlr4::ParserRuleContext {
   public:
    ConstructTriplesContext(antlr4::ParserRuleContext* parent,
                            size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TriplesSameSubjectContext* triplesSameSubject();
    ConstructTriplesContext* constructTriples();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ConstructTriplesContext* constructTriples();

  class TriplesSameSubjectContext : public antlr4::ParserRuleContext {
   public:
    TriplesSameSubjectContext(antlr4::ParserRuleContext* parent,
                              size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarOrTermContext* varOrTerm();
    PropertyListNotEmptyContext* propertyListNotEmpty();
    TriplesNodeContext* triplesNode();
    PropertyListContext* propertyList();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  TriplesSameSubjectContext* triplesSameSubject();

  class PropertyListContext : public antlr4::ParserRuleContext {
   public:
    PropertyListContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyListNotEmptyContext* propertyListNotEmpty();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PropertyListContext* propertyList();

  class PropertyListNotEmptyContext : public antlr4::ParserRuleContext {
   public:
    PropertyListNotEmptyContext(antlr4::ParserRuleContext* parent,
                                size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VerbContext*> verb();
    VerbContext* verb(size_t i);
    std::vector<ObjectListContext*> objectList();
    ObjectListContext* objectList(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PropertyListNotEmptyContext* propertyListNotEmpty();

  class VerbContext : public antlr4::ParserRuleContext {
   public:
    VerbContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarOrIriContext* varOrIri();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  VerbContext* verb();

  class ObjectListContext : public antlr4::ParserRuleContext {
   public:
    ObjectListContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ObjectRContext*> objectR();
    ObjectRContext* objectR(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ObjectListContext* objectList();

  class ObjectRContext : public antlr4::ParserRuleContext {
   public:
    ObjectRContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GraphNodeContext* graphNode();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ObjectRContext* objectR();

  class TriplesSameSubjectPathContext : public antlr4::ParserRuleContext {
   public:
    TriplesSameSubjectPathContext(antlr4::ParserRuleContext* parent,
                                  size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarOrTermContext* varOrTerm();
    PropertyListPathNotEmptyContext* propertyListPathNotEmpty();
    TriplesNodePathContext* triplesNodePath();
    PropertyListPathContext* propertyListPath();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  TriplesSameSubjectPathContext* triplesSameSubjectPath();

  class PropertyListPathContext : public antlr4::ParserRuleContext {
   public:
    PropertyListPathContext(antlr4::ParserRuleContext* parent,
                            size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyListPathNotEmptyContext* propertyListPathNotEmpty();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PropertyListPathContext* propertyListPath();

  class PropertyListPathNotEmptyContext : public antlr4::ParserRuleContext {
   public:
    PropertyListPathNotEmptyContext(antlr4::ParserRuleContext* parent,
                                    size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TupleWithPathContext* tupleWithPath();
    std::vector<TupleWithoutPathContext*> tupleWithoutPath();
    TupleWithoutPathContext* tupleWithoutPath(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PropertyListPathNotEmptyContext* propertyListPathNotEmpty();

  class VerbPathContext : public antlr4::ParserRuleContext {
   public:
    VerbPathContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PathContext* path();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  VerbPathContext* verbPath();

  class VerbSimpleContext : public antlr4::ParserRuleContext {
   public:
    VerbSimpleContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext* var();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  VerbSimpleContext* verbSimple();

  class TupleWithoutPathContext : public antlr4::ParserRuleContext {
   public:
    TupleWithoutPathContext(antlr4::ParserRuleContext* parent,
                            size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VerbPathOrSimpleContext* verbPathOrSimple();
    ObjectListContext* objectList();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  TupleWithoutPathContext* tupleWithoutPath();

  class TupleWithPathContext : public antlr4::ParserRuleContext {
   public:
    TupleWithPathContext(antlr4::ParserRuleContext* parent,
                         size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VerbPathOrSimpleContext* verbPathOrSimple();
    ObjectListPathContext* objectListPath();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  TupleWithPathContext* tupleWithPath();

  class VerbPathOrSimpleContext : public antlr4::ParserRuleContext {
   public:
    VerbPathOrSimpleContext(antlr4::ParserRuleContext* parent,
                            size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VerbPathContext* verbPath();
    VerbSimpleContext* verbSimple();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  VerbPathOrSimpleContext* verbPathOrSimple();

  class ObjectListPathContext : public antlr4::ParserRuleContext {
   public:
    ObjectListPathContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ObjectPathContext*> objectPath();
    ObjectPathContext* objectPath(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ObjectListPathContext* objectListPath();

  class ObjectPathContext : public antlr4::ParserRuleContext {
   public:
    ObjectPathContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GraphNodePathContext* graphNodePath();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ObjectPathContext* objectPath();

  class PathContext : public antlr4::ParserRuleContext {
   public:
    PathContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PathAlternativeContext* pathAlternative();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PathContext* path();

  class PathAlternativeContext : public antlr4::ParserRuleContext {
   public:
    PathAlternativeContext(antlr4::ParserRuleContext* parent,
                           size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PathSequenceContext*> pathSequence();
    PathSequenceContext* pathSequence(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PathAlternativeContext* pathAlternative();

  class PathSequenceContext : public antlr4::ParserRuleContext {
   public:
    PathSequenceContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PathEltOrInverseContext*> pathEltOrInverse();
    PathEltOrInverseContext* pathEltOrInverse(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PathSequenceContext* pathSequence();

  class PathEltContext : public antlr4::ParserRuleContext {
   public:
    PathEltContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PathPrimaryContext* pathPrimary();
    PathModContext* pathMod();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PathEltContext* pathElt();

  class PathEltOrInverseContext : public antlr4::ParserRuleContext {
   public:
    antlr4::Token* negationOperator = nullptr;
    PathEltOrInverseContext(antlr4::ParserRuleContext* parent,
                            size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PathEltContext* pathElt();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PathEltOrInverseContext* pathEltOrInverse();

  class PathModContext : public antlr4::ParserRuleContext {
   public:
    PathModContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PathModContext* pathMod();

  class PathPrimaryContext : public antlr4::ParserRuleContext {
   public:
    PathPrimaryContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IriContext* iri();
    PathNegatedPropertySetContext* pathNegatedPropertySet();
    PathContext* path();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PathPrimaryContext* pathPrimary();

  class PathNegatedPropertySetContext : public antlr4::ParserRuleContext {
   public:
    PathNegatedPropertySetContext(antlr4::ParserRuleContext* parent,
                                  size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<PathOneInPropertySetContext*> pathOneInPropertySet();
    PathOneInPropertySetContext* pathOneInPropertySet(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PathNegatedPropertySetContext* pathNegatedPropertySet();

  class PathOneInPropertySetContext : public antlr4::ParserRuleContext {
   public:
    PathOneInPropertySetContext(antlr4::ParserRuleContext* parent,
                                size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IriContext* iri();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PathOneInPropertySetContext* pathOneInPropertySet();

  class IntegerContext : public antlr4::ParserRuleContext {
   public:
    IntegerContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* INTEGER();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  IntegerContext* integer();

  class TriplesNodeContext : public antlr4::ParserRuleContext {
   public:
    TriplesNodeContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CollectionContext* collection();
    BlankNodePropertyListContext* blankNodePropertyList();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  TriplesNodeContext* triplesNode();

  class BlankNodePropertyListContext : public antlr4::ParserRuleContext {
   public:
    BlankNodePropertyListContext(antlr4::ParserRuleContext* parent,
                                 size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyListNotEmptyContext* propertyListNotEmpty();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  BlankNodePropertyListContext* blankNodePropertyList();

  class TriplesNodePathContext : public antlr4::ParserRuleContext {
   public:
    TriplesNodePathContext(antlr4::ParserRuleContext* parent,
                           size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CollectionPathContext* collectionPath();
    BlankNodePropertyListPathContext* blankNodePropertyListPath();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  TriplesNodePathContext* triplesNodePath();

  class BlankNodePropertyListPathContext : public antlr4::ParserRuleContext {
   public:
    BlankNodePropertyListPathContext(antlr4::ParserRuleContext* parent,
                                     size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PropertyListPathNotEmptyContext* propertyListPathNotEmpty();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  BlankNodePropertyListPathContext* blankNodePropertyListPath();

  class CollectionContext : public antlr4::ParserRuleContext {
   public:
    CollectionContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GraphNodeContext*> graphNode();
    GraphNodeContext* graphNode(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  CollectionContext* collection();

  class CollectionPathContext : public antlr4::ParserRuleContext {
   public:
    CollectionPathContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<GraphNodePathContext*> graphNodePath();
    GraphNodePathContext* graphNodePath(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  CollectionPathContext* collectionPath();

  class GraphNodeContext : public antlr4::ParserRuleContext {
   public:
    GraphNodeContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarOrTermContext* varOrTerm();
    TriplesNodeContext* triplesNode();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GraphNodeContext* graphNode();

  class GraphNodePathContext : public antlr4::ParserRuleContext {
   public:
    GraphNodePathContext(antlr4::ParserRuleContext* parent,
                         size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarOrTermContext* varOrTerm();
    TriplesNodePathContext* triplesNodePath();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GraphNodePathContext* graphNodePath();

  class VarOrTermContext : public antlr4::ParserRuleContext {
   public:
    VarOrTermContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext* var();
    GraphTermContext* graphTerm();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  VarOrTermContext* varOrTerm();

  class VarOrIriContext : public antlr4::ParserRuleContext {
   public:
    VarOrIriContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VarContext* var();
    IriContext* iri();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  VarOrIriContext* varOrIri();

  class VarContext : public antlr4::ParserRuleContext {
   public:
    VarContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* VAR1();
    antlr4::tree::TerminalNode* VAR2();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  VarContext* var();

  class GraphTermContext : public antlr4::ParserRuleContext {
   public:
    GraphTermContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IriContext* iri();
    RdfLiteralContext* rdfLiteral();
    NumericLiteralContext* numericLiteral();
    BooleanLiteralContext* booleanLiteral();
    BlankNodeContext* blankNode();
    antlr4::tree::TerminalNode* NIL();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  GraphTermContext* graphTerm();

  class ExpressionContext : public antlr4::ParserRuleContext {
   public:
    ExpressionContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalOrExpressionContext* conditionalOrExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ExpressionContext* expression();

  class ConditionalOrExpressionContext : public antlr4::ParserRuleContext {
   public:
    ConditionalOrExpressionContext(antlr4::ParserRuleContext* parent,
                                   size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ConditionalAndExpressionContext*> conditionalAndExpression();
    ConditionalAndExpressionContext* conditionalAndExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ConditionalOrExpressionContext* conditionalOrExpression();

  class ConditionalAndExpressionContext : public antlr4::ParserRuleContext {
   public:
    ConditionalAndExpressionContext(antlr4::ParserRuleContext* parent,
                                    size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueLogicalContext*> valueLogical();
    ValueLogicalContext* valueLogical(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ConditionalAndExpressionContext* conditionalAndExpression();

  class ValueLogicalContext : public antlr4::ParserRuleContext {
   public:
    ValueLogicalContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalExpressionContext* relationalExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ValueLogicalContext* valueLogical();

  class RelationalExpressionContext : public antlr4::ParserRuleContext {
   public:
    antlr4::Token* notToken = nullptr;
    RelationalExpressionContext(antlr4::ParserRuleContext* parent,
                                size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<NumericExpressionContext*> numericExpression();
    NumericExpressionContext* numericExpression(size_t i);
    antlr4::tree::TerminalNode* IN();
    ExpressionListContext* expressionList();
    antlr4::tree::TerminalNode* NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  RelationalExpressionContext* relationalExpression();

  class NumericExpressionContext : public antlr4::ParserRuleContext {
   public:
    NumericExpressionContext(antlr4::ParserRuleContext* parent,
                             size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveExpressionContext* additiveExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  NumericExpressionContext* numericExpression();

  class AdditiveExpressionContext : public antlr4::ParserRuleContext {
   public:
    AdditiveExpressionContext(antlr4::ParserRuleContext* parent,
                              size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext* multiplicativeExpression();
    std::vector<MultiplicativeExpressionWithSignContext*>
    multiplicativeExpressionWithSign();
    MultiplicativeExpressionWithSignContext* multiplicativeExpressionWithSign(
        size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  AdditiveExpressionContext* additiveExpression();

  class MultiplicativeExpressionWithSignContext
      : public antlr4::ParserRuleContext {
   public:
    MultiplicativeExpressionWithSignContext(antlr4::ParserRuleContext* parent,
                                            size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PlusSubexpressionContext* plusSubexpression();
    MinusSubexpressionContext* minusSubexpression();
    MultiplicativeExpressionWithLeadingSignButNoSpaceContext*
    multiplicativeExpressionWithLeadingSignButNoSpace();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  MultiplicativeExpressionWithSignContext* multiplicativeExpressionWithSign();

  class PlusSubexpressionContext : public antlr4::ParserRuleContext {
   public:
    PlusSubexpressionContext(antlr4::ParserRuleContext* parent,
                             size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext* multiplicativeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PlusSubexpressionContext* plusSubexpression();

  class MinusSubexpressionContext : public antlr4::ParserRuleContext {
   public:
    MinusSubexpressionContext(antlr4::ParserRuleContext* parent,
                              size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext* multiplicativeExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  MinusSubexpressionContext* minusSubexpression();

  class MultiplicativeExpressionWithLeadingSignButNoSpaceContext
      : public antlr4::ParserRuleContext {
   public:
    MultiplicativeExpressionWithLeadingSignButNoSpaceContext(
        antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericLiteralPositiveContext* numericLiteralPositive();
    NumericLiteralNegativeContext* numericLiteralNegative();
    std::vector<MultiplyOrDivideExpressionContext*>
    multiplyOrDivideExpression();
    MultiplyOrDivideExpressionContext* multiplyOrDivideExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  MultiplicativeExpressionWithLeadingSignButNoSpaceContext*
  multiplicativeExpressionWithLeadingSignButNoSpace();

  class MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
   public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext* parent,
                                    size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext* unaryExpression();
    std::vector<MultiplyOrDivideExpressionContext*>
    multiplyOrDivideExpression();
    MultiplyOrDivideExpressionContext* multiplyOrDivideExpression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  MultiplicativeExpressionContext* multiplicativeExpression();

  class MultiplyOrDivideExpressionContext : public antlr4::ParserRuleContext {
   public:
    MultiplyOrDivideExpressionContext(antlr4::ParserRuleContext* parent,
                                      size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplyExpressionContext* multiplyExpression();
    DivideExpressionContext* divideExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  MultiplyOrDivideExpressionContext* multiplyOrDivideExpression();

  class MultiplyExpressionContext : public antlr4::ParserRuleContext {
   public:
    MultiplyExpressionContext(antlr4::ParserRuleContext* parent,
                              size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext* unaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  MultiplyExpressionContext* multiplyExpression();

  class DivideExpressionContext : public antlr4::ParserRuleContext {
   public:
    DivideExpressionContext(antlr4::ParserRuleContext* parent,
                            size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext* unaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  DivideExpressionContext* divideExpression();

  class UnaryExpressionContext : public antlr4::ParserRuleContext {
   public:
    UnaryExpressionContext(antlr4::ParserRuleContext* parent,
                           size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryExpressionContext* primaryExpression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  UnaryExpressionContext* unaryExpression();

  class PrimaryExpressionContext : public antlr4::ParserRuleContext {
   public:
    PrimaryExpressionContext(antlr4::ParserRuleContext* parent,
                             size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BrackettedExpressionContext* brackettedExpression();
    BuiltInCallContext* builtInCall();
    IriOrFunctionContext* iriOrFunction();
    RdfLiteralContext* rdfLiteral();
    NumericLiteralContext* numericLiteral();
    BooleanLiteralContext* booleanLiteral();
    VarContext* var();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PrimaryExpressionContext* primaryExpression();

  class BrackettedExpressionContext : public antlr4::ParserRuleContext {
   public:
    BrackettedExpressionContext(antlr4::ParserRuleContext* parent,
                                size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext* expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  BrackettedExpressionContext* brackettedExpression();

  class BuiltInCallContext : public antlr4::ParserRuleContext {
   public:
    BuiltInCallContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AggregateContext* aggregate();
    antlr4::tree::TerminalNode* STR();
    std::vector<ExpressionContext*> expression();
    ExpressionContext* expression(size_t i);
    LangExpressionContext* langExpression();
    antlr4::tree::TerminalNode* LANGMATCHES();
    antlr4::tree::TerminalNode* DATATYPE();
    antlr4::tree::TerminalNode* BOUND();
    VarContext* var();
    antlr4::tree::TerminalNode* IRI();
    antlr4::tree::TerminalNode* URI();
    antlr4::tree::TerminalNode* BNODE();
    antlr4::tree::TerminalNode* NIL();
    antlr4::tree::TerminalNode* RAND();
    antlr4::tree::TerminalNode* ABS();
    antlr4::tree::TerminalNode* CEIL();
    antlr4::tree::TerminalNode* FLOOR();
    antlr4::tree::TerminalNode* ROUND();
    antlr4::tree::TerminalNode* CONCAT();
    ExpressionListContext* expressionList();
    SubstringExpressionContext* substringExpression();
    antlr4::tree::TerminalNode* STRLEN();
    StrReplaceExpressionContext* strReplaceExpression();
    antlr4::tree::TerminalNode* UCASE();
    antlr4::tree::TerminalNode* LCASE();
    antlr4::tree::TerminalNode* ENCODE_FOR_URI();
    antlr4::tree::TerminalNode* CONTAINS();
    antlr4::tree::TerminalNode* STRSTARTS();
    antlr4::tree::TerminalNode* STRENDS();
    antlr4::tree::TerminalNode* STRBEFORE();
    antlr4::tree::TerminalNode* STRAFTER();
    antlr4::tree::TerminalNode* YEAR();
    antlr4::tree::TerminalNode* MONTH();
    antlr4::tree::TerminalNode* DAY();
    antlr4::tree::TerminalNode* HOURS();
    antlr4::tree::TerminalNode* MINUTES();
    antlr4::tree::TerminalNode* SECONDS();
    antlr4::tree::TerminalNode* TIMEZONE();
    antlr4::tree::TerminalNode* TZ();
    antlr4::tree::TerminalNode* NOW();
    antlr4::tree::TerminalNode* UUID();
    antlr4::tree::TerminalNode* STRUUID();
    antlr4::tree::TerminalNode* MD5();
    antlr4::tree::TerminalNode* SHA1();
    antlr4::tree::TerminalNode* SHA256();
    antlr4::tree::TerminalNode* SHA384();
    antlr4::tree::TerminalNode* SHA512();
    antlr4::tree::TerminalNode* COALESCE();
    antlr4::tree::TerminalNode* IF();
    antlr4::tree::TerminalNode* STRLANG();
    antlr4::tree::TerminalNode* STRDT();
    antlr4::tree::TerminalNode* SAMETERM();
    antlr4::tree::TerminalNode* ISIRI();
    antlr4::tree::TerminalNode* ISURI();
    antlr4::tree::TerminalNode* ISBLANK();
    antlr4::tree::TerminalNode* ISLITERAL();
    antlr4::tree::TerminalNode* ISNUMERIC();
    RegexExpressionContext* regexExpression();
    ExistsFuncContext* existsFunc();
    NotExistsFuncContext* notExistsFunc();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  BuiltInCallContext* builtInCall();

  class RegexExpressionContext : public antlr4::ParserRuleContext {
   public:
    RegexExpressionContext(antlr4::ParserRuleContext* parent,
                           size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* REGEX();
    std::vector<ExpressionContext*> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  RegexExpressionContext* regexExpression();

  class LangExpressionContext : public antlr4::ParserRuleContext {
   public:
    LangExpressionContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* LANG();
    ExpressionContext* expression();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  LangExpressionContext* langExpression();

  class SubstringExpressionContext : public antlr4::ParserRuleContext {
   public:
    SubstringExpressionContext(antlr4::ParserRuleContext* parent,
                               size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* SUBSTR();
    std::vector<ExpressionContext*> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  SubstringExpressionContext* substringExpression();

  class StrReplaceExpressionContext : public antlr4::ParserRuleContext {
   public:
    StrReplaceExpressionContext(antlr4::ParserRuleContext* parent,
                                size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* REPLACE();
    std::vector<ExpressionContext*> expression();
    ExpressionContext* expression(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  StrReplaceExpressionContext* strReplaceExpression();

  class ExistsFuncContext : public antlr4::ParserRuleContext {
   public:
    ExistsFuncContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* EXISTS();
    GroupGraphPatternContext* groupGraphPattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  ExistsFuncContext* existsFunc();

  class NotExistsFuncContext : public antlr4::ParserRuleContext {
   public:
    NotExistsFuncContext(antlr4::ParserRuleContext* parent,
                         size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* NOT();
    antlr4::tree::TerminalNode* EXISTS();
    GroupGraphPatternContext* groupGraphPattern();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  NotExistsFuncContext* notExistsFunc();

  class AggregateContext : public antlr4::ParserRuleContext {
   public:
    AggregateContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* COUNT();
    ExpressionContext* expression();
    antlr4::tree::TerminalNode* DISTINCT();
    antlr4::tree::TerminalNode* SUM();
    antlr4::tree::TerminalNode* MIN();
    antlr4::tree::TerminalNode* MAX();
    antlr4::tree::TerminalNode* AVG();
    antlr4::tree::TerminalNode* STDEV();
    antlr4::tree::TerminalNode* SAMPLE();
    antlr4::tree::TerminalNode* GROUP_CONCAT();
    antlr4::tree::TerminalNode* SEPARATOR();
    StringContext* string();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  AggregateContext* aggregate();

  class IriOrFunctionContext : public antlr4::ParserRuleContext {
   public:
    IriOrFunctionContext(antlr4::ParserRuleContext* parent,
                         size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IriContext* iri();
    ArgListContext* argList();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  IriOrFunctionContext* iriOrFunction();

  class RdfLiteralContext : public antlr4::ParserRuleContext {
   public:
    RdfLiteralContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StringContext* string();
    antlr4::tree::TerminalNode* LANGTAG();
    IriContext* iri();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  RdfLiteralContext* rdfLiteral();

  class NumericLiteralContext : public antlr4::ParserRuleContext {
   public:
    NumericLiteralContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericLiteralUnsignedContext* numericLiteralUnsigned();
    NumericLiteralPositiveContext* numericLiteralPositive();
    NumericLiteralNegativeContext* numericLiteralNegative();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  NumericLiteralContext* numericLiteral();

  class NumericLiteralUnsignedContext : public antlr4::ParserRuleContext {
   public:
    NumericLiteralUnsignedContext(antlr4::ParserRuleContext* parent,
                                  size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* INTEGER();
    antlr4::tree::TerminalNode* DECIMAL();
    antlr4::tree::TerminalNode* DOUBLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  NumericLiteralUnsignedContext* numericLiteralUnsigned();

  class NumericLiteralPositiveContext : public antlr4::ParserRuleContext {
   public:
    NumericLiteralPositiveContext(antlr4::ParserRuleContext* parent,
                                  size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* INTEGER_POSITIVE();
    antlr4::tree::TerminalNode* DECIMAL_POSITIVE();
    antlr4::tree::TerminalNode* DOUBLE_POSITIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  NumericLiteralPositiveContext* numericLiteralPositive();

  class NumericLiteralNegativeContext : public antlr4::ParserRuleContext {
   public:
    NumericLiteralNegativeContext(antlr4::ParserRuleContext* parent,
                                  size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* INTEGER_NEGATIVE();
    antlr4::tree::TerminalNode* DECIMAL_NEGATIVE();
    antlr4::tree::TerminalNode* DOUBLE_NEGATIVE();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  NumericLiteralNegativeContext* numericLiteralNegative();

  class BooleanLiteralContext : public antlr4::ParserRuleContext {
   public:
    BooleanLiteralContext(antlr4::ParserRuleContext* parent,
                          size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  BooleanLiteralContext* booleanLiteral();

  class StringContext : public antlr4::ParserRuleContext {
   public:
    StringContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* STRING_LITERAL1();
    antlr4::tree::TerminalNode* STRING_LITERAL2();
    antlr4::tree::TerminalNode* STRING_LITERAL_LONG1();
    antlr4::tree::TerminalNode* STRING_LITERAL_LONG2();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  StringContext* string();

  class IriContext : public antlr4::ParserRuleContext {
   public:
    IriContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IrirefContext* iriref();
    PrefixedNameContext* prefixedName();
    antlr4::tree::TerminalNode* PREFIX_LANGTAG();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  IriContext* iri();

  class PrefixedNameContext : public antlr4::ParserRuleContext {
   public:
    PrefixedNameContext(antlr4::ParserRuleContext* parent,
                        size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PnameLnContext* pnameLn();
    PnameNsContext* pnameNs();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PrefixedNameContext* prefixedName();

  class BlankNodeContext : public antlr4::ParserRuleContext {
   public:
    BlankNodeContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* BLANK_NODE_LABEL();
    antlr4::tree::TerminalNode* ANON();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  BlankNodeContext* blankNode();

  class IrirefContext : public antlr4::ParserRuleContext {
   public:
    IrirefContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* IRI_REF();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  IrirefContext* iriref();

  class PnameLnContext : public antlr4::ParserRuleContext {
   public:
    PnameLnContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* PNAME_LN();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PnameLnContext* pnameLn();

  class PnameNsContext : public antlr4::ParserRuleContext {
   public:
    PnameNsContext(antlr4::ParserRuleContext* parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode* PNAME_NS();

    virtual void enterRule(antlr4::tree::ParseTreeListener* listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener* listener) override;
  };

  PnameNsContext* pnameNs();

  // By default the static state used to implement the parser is lazily
  // initialized during the first call to the constructor. You can call this
  // function if you wish to initialize the static state ahead of time.
  static void initialize();

 private:
};

#endif  // QLEVER_SRC_PARSER_SPARQLPARSER_GENERATED_SPARQLAUTOMATICPARSER_H
