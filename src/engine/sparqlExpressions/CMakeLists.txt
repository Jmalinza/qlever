add_library(sparqlExpressions
        SparqlExpressionValueGetters.cpp
        SetOfIntervals.cpp
        SparqlExpressionPimpl.cpp
        SampleExpression.cpp
        RelationalExpressions.cpp
        AggregateExpression.cpp
        StdevExpression.cpp
        RegexExpression.cpp
        NumericUnaryExpressions.cpp
        NumericBinaryExpressions.cpp
        DateExpressions.cpp
        StringExpressions.cpp
        IsSomethingExpressions.cpp
        ConditionalExpressions.cpp
        SparqlExpressionTypes.cpp
        SparqlExpression.cpp
        ConvertToDtypeConstructor.cpp
        RdfTermExpressions.cpp
        LangExpression.cpp
        CountStarExpression.cpp
        PrefilterExpressionIndex.cpp
        GeoExpression.cpp
        BlankNodeExpression.cpp
        GroupConcatExpression.cpp)

qlever_target_link_libraries(sparqlExpressions util index Boost::url)
