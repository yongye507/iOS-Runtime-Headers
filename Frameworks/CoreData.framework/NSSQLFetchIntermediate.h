/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSSQLGroupByIntermediate, NSSQLWhereIntermediate, NSSQLOffsetIntermediate, NSSQLHavingIntermediate, NSMutableSet, NSSQLSelectIntermediate, NSSQLOrderIntermediate, NSString, NSSQLEntity, NSSQLLimitIntermediate, NSMutableArray;

@interface NSSQLFetchIntermediate : NSSQLIntermediate  {
    NSSQLEntity *_governingEntity;
    NSString *_governingAlias;
    NSString *_correlationToken;
    NSSQLSelectIntermediate *_selectClause;
    NSSQLWhereIntermediate *_whereClause;
    NSSQLGroupByIntermediate *_groupByClause;
    NSSQLHavingIntermediate *_havingClause;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOffsetIntermediate *_offsetClause;
    NSSQLOrderIntermediate *_orderIntermediate;
    NSMutableArray *_joinIntermediates;
    NSMutableDictionary *_joinKeypaths;
    NSMutableSet *_groupByKeypaths;
    BOOL _isDictionaryCountFetch;
}


- (id)initWithEntity:(id)arg1 alias:(id)arg2 inScope:(id)arg3;
- (id)fetchIntermediate;
- (BOOL)isDictionaryCountFetch;
- (void)setDictionaryCountFetch:(BOOL)arg1;
- (void)setSelectIntermediate:(id)arg1;
- (id)groupByIntermediate;
- (void)setGroupByIntermediate:(id)arg1;
- (void)addGroupByKeypath:(id)arg1;
- (BOOL)groupByClauseContainsKeypath:(id)arg1;
- (id)havingIntermediate;
- (void)setHavingIntermediate:(id)arg1;
- (void)setWhereIntermediate:(id)arg1;
- (id)limitIntermediate;
- (void)setOffsetIntermediate:(id)arg1;
- (void)addJoinIntermediate:(id)arg1 atKeypathWithComponents:(id)arg2;
- (id)finalJoinForKeypathWithComponents:(id)arg1;
- (void)promoteToOuterJoinsAlongKeypathWithComponents:(id)arg1;
- (void)promoteToOuterJoinAtKeypathWithComponents:(id)arg1;
- (id)joinIntermediates;
- (void)setOrderIntermediate:(id)arg1;
- (void)setCorrelationToken:(id)arg1;
- (void)setGoverningAlias:(id)arg1;
- (id)governingEntity;
- (void)setGoverningEntity:(id)arg1;
- (void)selectDistinct;
- (BOOL)isFunctionScoped;
- (id)_generateJoinSQLStringInContext:(id)arg1;
- (id)fetchIntermediateForKeypathExpression:(id)arg1;
- (id)governingAliasForKeypathExpression:(id)arg1;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)arg1;
- (id)governingAlias;
- (void)setLimitIntermediate:(id)arg1;
- (id)selectIntermediate;
- (id)initWithScope:(id)arg1;
- (id)governingEntityForKeypathExpression:(id)arg1;
- (id)generateSQLStringInContext:(id)arg1;
- (void)dealloc;

@end