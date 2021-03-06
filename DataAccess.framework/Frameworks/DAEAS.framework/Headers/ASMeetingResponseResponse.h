/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASItem.h>

@class NSMutableArray, NSArray;

@interface ASMeetingResponseResponse : ASItem {
	NSMutableArray *_singularResponses;	// 40 = 0x28
}
@property(readonly, assign) NSArray *singularResponses;	// G=0x8ce5; @synthesize=_singularResponses
+ (BOOL)notifyOfUnknownTokens;	// 0x8a79
+ (BOOL)frontingBasicTypes;	// 0x8a25
+ (BOOL)parsingWithSubItems;	// 0x89d1
+ (BOOL)parsingLeafNode;	// 0x897d
+ (BOOL)acceptsTopLevelLeaves;	// 0x8929
// declared property getter: - (id)singularResponses;	// 0x8ce5
- (void)dealloc;	// 0x8c99
- (id)description;	// 0x8c31
- (id)asParseRules;	// 0x8b51
- (void)_addSingularResponse:(id)response;	// 0x8b31
- (id)init;	// 0x8acd
@end
