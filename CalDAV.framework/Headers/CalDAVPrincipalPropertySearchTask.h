/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CalDAV/XXUnknownSuperclass.h>

@class CalDAVPrincipalSearchPropertySet, NSSet;

@interface CalDAVPrincipalPropertySearchTask : XXUnknownSuperclass {
	NSSet *_searchTypes;	// 140 = 0x8c
	NSSet *_searchStrings;	// 144 = 0x90
	CalDAVPrincipalSearchPropertySet *_serverSupportSet;	// 148 = 0x94
	void *_searchContext;	// 152 = 0x98
}
@property(retain) NSSet *searchTypes;	// G=0x1859d; S=0x18579; @synthesize=_searchTypes
@property(retain) NSSet *searchStrings;	// G=0x185d9; S=0x185b5; @synthesize=_searchStrings
@property(retain) CalDAVPrincipalSearchPropertySet *serverSupportSet;	// G=0x18615; S=0x185f1; @synthesize=_serverSupportSet
@property(assign, nonatomic) void *searchContext;	// G=0x17ea5; S=0x17eb5; @synthesize=_searchContext
+ (id)_propertiesToFindForServerSupportSet:(id)serverSupportSet;	// 0x18225
- (void)dealloc;	// 0x18505
- (id)initWithSearchStrings:(id)searchStrings searchTypes:(id)types serverSupportSet:(id)set atURL:(id)url;	// 0x1862d
- (id)extraAttributes;	// 0x17ec5
- (id)searchItems;	// 0x17f95
// declared property getter: - (void *)searchContext;	// 0x17ea5
// declared property setter: - (void)setSearchContext:(void *)context;	// 0x17eb5
// declared property getter: - (id)serverSupportSet;	// 0x18615
// declared property setter: - (void)setServerSupportSet:(id)set;	// 0x185f1
// declared property getter: - (id)searchStrings;	// 0x185d9
// declared property setter: - (void)setSearchStrings:(id)strings;	// 0x185b5
// declared property getter: - (id)searchTypes;	// 0x1859d
// declared property setter: - (void)setSearchTypes:(id)types;	// 0x18579
@end
