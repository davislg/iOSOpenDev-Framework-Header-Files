/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASPolicy.h>

@class NSMutableDictionary;

@interface ASWBXMLPolicy : ASPolicy {
	NSMutableDictionary *_policyData;	// 52 = 0x34
}
+ (BOOL)notifyOfUnknownTokens;	// 0x6735
+ (BOOL)frontingBasicTypes;	// 0x66e1
+ (BOOL)parsingWithSubItems;	// 0x668d
+ (BOOL)parsingLeafNode;	// 0x6639
+ (BOOL)acceptsTopLevelLeaves;	// 0x65e5
- (id)perDomainDictsForPolicy;	// 0x6edd
- (void)_cleanUpPolicyData:(id)data;	// 0x6cdd
- (id)asParseRules;	// 0x6819
- (void)_setPolicyData:(id)data;	// 0x67d5
- (void)dealloc;	// 0x6789
@end
