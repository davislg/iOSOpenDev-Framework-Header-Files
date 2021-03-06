/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/XXUnknownSuperclass.h>

@class NSString;

@interface IMSystemProxySettingsFetcher : XXUnknownSuperclass {
	id _delegate;	// 4 = 0x4
	NSString *_host;	// 8 = 0x8
	unsigned short _port;	// 12 = 0xc
	int _proxyProtocol;	// 16 = 0x10
	NSString *_proxyHost;	// 20 = 0x14
	unsigned short _proxyPort;	// 24 = 0x18
	NSString *_proxyAccount;	// 28 = 0x1c
	NSString *_proxyPassword;	// 32 = 0x20
}
@property(copy, nonatomic) NSString *_proxyPassword;	// G=0x73c1; S=0x73d1; @synthesize
@property(copy, nonatomic) NSString *_proxyAccount;	// G=0x738d; S=0x739d; @synthesize
@property(assign, nonatomic) unsigned short _proxyPort;	// G=0x736d; S=0x737d; @synthesize
@property(copy, nonatomic) NSString *_proxyHost;	// G=0x7339; S=0x7349; @synthesize
@property(assign, nonatomic) int _proxyProtocol;	// G=0x7319; S=0x7329; @synthesize
@property(assign, nonatomic) unsigned short _port;	// G=0x72f9; S=0x7309; @synthesize
@property(copy, nonatomic) NSString *_host;	// G=0x72c5; S=0x72d5; @synthesize
@property(assign) id delegate;	// G=0x72a5; S=0x72b5; @synthesize=_delegate
// declared property setter: - (void)set_proxyPassword:(id)password;	// 0x73d1
// declared property getter: - (id)_proxyPassword;	// 0x73c1
// declared property setter: - (void)set_proxyAccount:(id)account;	// 0x739d
// declared property getter: - (id)_proxyAccount;	// 0x738d
// declared property setter: - (void)set_proxyPort:(unsigned short)port;	// 0x737d
// declared property getter: - (unsigned short)_proxyPort;	// 0x736d
// declared property setter: - (void)set_proxyHost:(id)host;	// 0x7349
// declared property getter: - (id)_proxyHost;	// 0x7339
// declared property setter: - (void)set_proxyProtocol:(int)protocol;	// 0x7329
// declared property getter: - (int)_proxyProtocol;	// 0x7319
// declared property setter: - (void)set_port:(unsigned short)port;	// 0x7309
// declared property getter: - (unsigned short)_port;	// 0x72f9
// declared property setter: - (void)set_host:(id)host;	// 0x72d5
// declared property getter: - (id)_host;	// 0x72c5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x72b5
// declared property getter: - (id)delegate;	// 0x72a5
- (void)dealloc;	// 0x721d
- (void)retrieveProxyAccountSettings;	// 0x71d5
- (void)retrieveProxySettings;	// 0x71d1
- (id)initWithProxyProtocol:(int)proxyProtocol proxyHost:(id)host proxyPort:(unsigned short)port delegate:(id)delegate;	// 0x7141
- (id)initWithHost:(id)host port:(unsigned short)port delegate:(id)delegate;	// 0x70bd
- (void)_takeProxySettingsFromDictionary:(CFDictionaryRef)dictionary;	// 0x70b9
- (void)_getProxyAccountAndPasswordFromKeychain;	// 0x7045
- (void)_callAccountSettingsDelegateMethod;	// 0x6ff5
- (void)_callProxySettingsDelegateMethod;	// 0x6f91
@end
