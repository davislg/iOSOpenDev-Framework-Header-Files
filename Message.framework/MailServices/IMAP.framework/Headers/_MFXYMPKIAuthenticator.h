/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/XXUnknownSuperclass.h>
#import <IMAP/IMAP-Structs.h>

@class YahooAccount;

@interface _MFXYMPKIAuthenticator : XXUnknownSuperclass {
	BOOL sentInitialResponse;	// 20 = 0x14
	YahooAccount *_yahooAccount;	// 24 = 0x18
	lockdown_connection *_lockdown;	// 28 = 0x1c
	BOOL _usedCachedSignature;	// 32 = 0x20
}
- (id)responseForServerData:(id)serverData;	// 0x365f5
- (id)saslName;	// 0x35ea9
- (BOOL)base64EncodeResponseData;	// 0x35eb5
- (void)setAuthenticationState:(int)state;	// 0x36545
- (BOOL)couldRetry;	// 0x35eb9
- (void)dealloc;	// 0x365b1
@end
