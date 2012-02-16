/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSArray, MPMediaQuery;

@interface SUScriptMediaQuery : SUScriptObject {
	NSArray *_collections;	// 36 = 0x24
	NSArray *_filterPredicates;	// 40 = 0x28
	NSArray *_items;	// 44 = 0x2c
	BOOL _watchingLibrary;	// 48 = 0x30
}
@property(readonly, assign) NSString *groupingTypeTitle;	// G=0x7a319; 
@property(readonly, assign) NSString *groupingTypePodcastTitle;	// G=0x7a30d; 
@property(readonly, assign) NSString *groupingTypePlaylist;	// G=0x7a301; 
@property(readonly, assign) NSString *groupingTypeGenre;	// G=0x7a2f5; 
@property(readonly, assign) NSString *groupingTypeComposer;	// G=0x7a2e9; 
@property(readonly, assign) NSString *groupingTypeArtist;	// G=0x7a2dd; 
@property(readonly, assign) NSString *groupingTypeAlbumArtist;	// G=0x7a2d1; 
@property(readonly, assign) NSString *groupingTypeAlbum;	// G=0x7a2c5; 
@property(readonly, assign) NSString *comparisonTypeEquals;	// G=0x7a2b5; 
@property(readonly, assign) NSString *comparisonTypeContains;	// G=0x7a2a5; 
@property(readonly, assign) NSArray *items;	// G=0x7a0d1; 
@property(copy) NSString *groupingType;	// G=0x7a07d; S=0x7a21d; 
@property(copy) id filterPredicates;	// G=0x7a029; S=0x7a125; 
@property(readonly, assign) NSArray *collections;	// G=0x79fd5; 
@property(readonly, assign, nonatomic) MPMediaQuery *nativeQuery;	// G=0x79d25; 
+ (void)initialize;	// 0x7b0dd
+ (id)webScriptNameForSelector:(SEL)selector;	// 0x7b025
+ (id)webScriptNameForKey:(const char *)key;	// 0x7af81
- (id)scriptAttributeKeys;	// 0x7b07d
- (id)attributeKeys;	// 0x7b06d
- (void)_resetCaches;	// 0x7af15
- (void)_beginWatchingLibraryIfNecessary;	// 0x7ae9d
- (void)_libraryChangedNotification:(id)notification;	// 0x7ae8d
- (void)_setGroupingType:(id)type;	// 0x7ad01
- (void)_setFilterPredicates:(id)predicates;	// 0x7abc9
- (void)_removeFilterPredicate:(id)predicate;	// 0x7ab61
- (id)_copyItems;	// 0x7a995
- (id)_copyGroupingType;	// 0x7a7a5
- (id)_copyFilterPredicates;	// 0x7a5e9
- (id)_copyCollections;	// 0x7a3ed
- (BOOL)_canFilterByProperty:(id)property;	// 0x7a38d
- (void)_addFilterPredicate:(id)predicate;	// 0x7a325
// declared property getter: - (id)groupingTypeTitle;	// 0x7a319
// declared property getter: - (id)groupingTypePodcastTitle;	// 0x7a30d
// declared property getter: - (id)groupingTypePlaylist;	// 0x7a301
// declared property getter: - (id)groupingTypeGenre;	// 0x7a2f5
// declared property getter: - (id)groupingTypeComposer;	// 0x7a2e9
// declared property getter: - (id)groupingTypeArtist;	// 0x7a2dd
// declared property getter: - (id)groupingTypeAlbumArtist;	// 0x7a2d1
// declared property getter: - (id)groupingTypeAlbum;	// 0x7a2c5
// declared property getter: - (id)comparisonTypeEquals;	// 0x7a2b5
// declared property getter: - (id)comparisonTypeContains;	// 0x7a2a5
// declared property setter: - (void)setGroupingType:(id)type;	// 0x7a21d
// declared property setter: - (void)setFilterPredicates:(id)predicates;	// 0x7a125
// declared property getter: - (id)items;	// 0x7a0d1
// declared property getter: - (id)groupingType;	// 0x7a07d
// declared property getter: - (id)filterPredicates;	// 0x7a029
// declared property getter: - (id)collections;	// 0x79fd5
- (id)_className;	// 0x79fc9
- (void)removeFilterPredicate:(id)predicate;	// 0x79f41
- (id)makeFilterPredicateWithProperty:(id)property value:(id)value comparisonType:(id)type;	// 0x79eed
- (id)canFilterByProperty:(id)property;	// 0x79dd5
- (void)addFilterPredicate:(id)predicate;	// 0x79d4d
// declared property getter: - (id)nativeQuery;	// 0x79d25
- (void)dealloc;	// 0x79c69
@end