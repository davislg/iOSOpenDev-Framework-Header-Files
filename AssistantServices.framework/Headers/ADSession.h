/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <AssistantServices/assistantd-Structs.h>
#import <AssistantServices/ADAceConnectionDelegate.h>
#import <AssistantServices/ADNetworkManagerDelegate.h>
#import <AssistantServices/MCProfileConnectionObserver.h>
#import <AssistantServices/XXUnknownSuperclass.h>

@class NSMutableSet, ADAddressBookManager, NSString, NSMutableArray, ADAuthenticator, ADNetworkManager, ADAccount, ADAceConnection;
@protocol ADSessionDelegate;

__attribute__((visibility("hidden")))
@interface ADSession : XXUnknownSuperclass <ADAceConnectionDelegate, ADNetworkManagerDelegate, MCProfileConnectionObserver> {
	dispatch_queue_s *_queue;	// 4 = 0x4
	ADAccount *_account;	// 8 = 0x8
	NSMutableArray *_pendingCommands;	// 12 = 0xc
	NSMutableSet *_limboIds;	// 16 = 0x10
	ADAceConnection *_serverConnection;	// 20 = 0x14
	int _state;	// 24 = 0x18
	NSString *_sessionInitCommandId;	// 28 = 0x1c
	CFDictionaryRef _commandMap;	// 32 = 0x20
	NSString *_pendingAssistantDataAnchor;	// 36 = 0x24
	double _retryStartTime;	// 40 = 0x28
	ADAuthenticator *_authenticator;	// 48 = 0x30
	ADNetworkManager *_networkManager;	// 52 = 0x34
	dispatch_source_s *_sessionLoadTimerSource;	// 56 = 0x38
	id<ADSessionDelegate> _delegate;	// 60 = 0x3c
	BOOL _shouldSendAssistantData;	// 64 = 0x40
	BOOL _isRegisteredForSADNotifications;	// 65 = 0x41
	ADAddressBookManager *_addressBookManager;	// 68 = 0x44
	NSMutableArray *_cachedRestrictions;	// 72 = 0x48
	unsigned _ioConnect;	// 76 = 0x4c
	IONotificationPortRef _ioNotificationPortRef;	// 80 = 0x50
	unsigned _ioNotifier;	// 84 = 0x54
	BOOL _usingCachedCertificateData;	// 88 = 0x58
	BOOL _usingCachedValidationData;	// 89 = 0x59
	BOOL _hasActiveRequest;	// 90 = 0x5a
	BOOL _checkForWiFiTransitionOnRequestEnd;	// 91 = 0x5b
}
@property(copy, nonatomic, setter=_setPendingAssistantDataAnchor:) NSString *_pendingAssistantDataAnchor;	// G=0x204ed; S=0x204fd; @synthesize
@property(copy, nonatomic, setter=_setSessionInitCommandId:) NSString *_sessionInitCommandId;	// G=0x204b9; S=0x204c9; @synthesize
@property(readonly, assign, nonatomic) dispatch_queue_s *_queue;	// G=0x204a9; @synthesize
@property(readonly, assign, nonatomic) ADAccount *_account;	// G=0x20499; @synthesize
@property(assign, nonatomic) id<ADSessionDelegate> delegate;	// G=0x20479; S=0x20489; @synthesize=_delegate
// declared property setter: - (void)_setPendingAssistantDataAnchor:(id)anchor;	// 0x204fd
// declared property getter: - (id)_pendingAssistantDataAnchor;	// 0x204ed
// declared property setter: - (void)_setSessionInitCommandId:(id)anId;	// 0x204c9
// declared property getter: - (id)_sessionInitCommandId;	// 0x204b9
// declared property getter: - (dispatch_queue_s *)_queue;	// 0x204a9
// declared property getter: - (id)_account;	// 0x20499
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x20489
// declared property getter: - (id)delegate;	// 0x20479
- (void)setHasActiveRequest:(BOOL)request;	// 0x20405
- (void)cancel;	// 0x203d5
- (void)handleCommand:(id)command;	// 0x202e1
- (void)sendCommand:(id)command;	// 0x20239
- (void)refreshValidationData;	// 0x20131
- (void)beginUpdatingAssistantData;	// 0x200b9
- (void)preheat;	// 0x2008d
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;	// 0x1ffb1
- (void)_locationRestrictionChanged:(id)changed;	// 0x1fed5
- (void)_languageCodeChanged:(id)changed;	// 0x1fe15
- (void)_meCardChanged:(id)changed;	// 0x1fd55
- (void)_localeChanged:(id)changed;	// 0x1fc95
- (void)_systemTimeZoneChanged:(id)changed;	// 0x1fbb1
- (void)_recheckForWiFiTransition;	// 0x1fa61
- (void)networkManagerLostNonWWANConnectivity:(id)connectivity;	// 0x1fa01
- (void)networkManagerNonWWANDidBecomeAvailable:(id)networkManagerNonWWAN;	// 0x1f8b1
- (void)aceConnection:(id)connection didEncounterError:(id)error;	// 0x1f759
- (void)aceConnectionDidClose:(id)aceConnection;	// 0x1f625
- (void)aceConnection:(id)connection didReceiveAceObject:(id)object;	// 0x1f4ed
- (void)aceConnectionDidOpen:(id)aceConnection;	// 0x1f40d
- (void)_startConnection;	// 0x1f219
- (void)_eagerAuthDidComplete;	// 0x1f149
- (void)_connectionOpened;	// 0x1f0dd
- (void)_startSession;	// 0x1ef95
- (void)_continueAuthentication;	// 0x1ec9d
- (void)_continueAuthWithCertificateData:(id)certificateData;	// 0x1ea5d
- (void)_continueSessionInitWithValidationData:(id)validationData;	// 0x1e961
- (void)_authenticationFailed;	// 0x1e8e1
- (void)_handleAceObject:(id)object;	// 0x1e68d
- (void)_saPing:(id)ping;	// 0x1e605
- (void)_saCommandFailed:(id)failed;	// 0x1e4a5
- (void)_assistantFailedForReason:(id)reason;	// 0x1e285
- (void)_saGetAssistantData:(id)data;	// 0x1e251
- (void)_saSetConnectionHeader:(id)header;	// 0x1e1bd
- (void)_saAssistantNotFound:(id)found;	// 0x1e0fd
- (void)_saAssistantLoaded:(id)loaded;	// 0x1df0d
- (void)_saAssistantCreated:(id)created;	// 0x1de81
- (void)_saCreateSessionInfoResponse:(id)response;	// 0x1dd61
- (void)_saGetSessionCertificateResponse:(id)response;	// 0x1dcb5
- (void)_saSessionValidationFailed:(id)failed;	// 0x1daf1
- (void)_sendAssistantDataChangedSinceAnchor:(id)anchor refId:(id)anId;	// 0x1d761
- (id)_generatedAnchorFromSetAssistantData:(id)setAssistantData;	// 0x1d501
- (void)_sendCommandFailedWithRefId:(id)refId;	// 0x1d48d
- (void)_sendCreateAssistantWithValidationData:(id)validationData;	// 0x1d3c9
- (void)_sendLoadAssistantWithId:(id)anId speechId:(id)anId2 validationData:(id)data;	// 0x1d2d5
- (void)_sendCreateSessionInfoRequestWithData:(id)data;	// 0x1d1e5
- (void)_sendGetSessionCertificateData;	// 0x1d109
- (void)_scheduleSessionLoadTimeout;	// 0x1cf11
- (void)_cancelSessionLoadTimeout;	// 0x1cea1
- (void)_informDelegateOfError:(id)error;	// 0x1cde1
- (void)_passObjectToDelegate:(id)delegate;	// 0x1cdbd
- (void)_clearLimbo;	// 0x1cd6d
- (void)_sendLimboCommand:(id)command;	// 0x1cd11
- (void)_sendPendingCommands;	// 0x1cc41
- (void)_addPendingCommand:(id)command;	// 0x1cc15
- (BOOL)_refIdIsLimboId:(id)anId;	// 0x1cbf1
- (void)_removeLimboId:(id)anId;	// 0x1cbd1
- (void)_addLimboId:(id)anId;	// 0x1cb6d
- (id)_pendingCommands;	// 0x1cb1d
- (BOOL)_sendServerCommand:(id)command;	// 0x1ca15
- (BOOL)_shouldSendAssistantData;	// 0x1ca05
- (void)_unregisterForAssistantDataNotifications;	// 0x1c961
- (void)_registerForAssistantDataNotifications;	// 0x1c7e5
- (void)_unregisterForSleepNotification;	// 0x1c739
- (void)_registerForSleepNotification;	// 0x1c6ad
- (void)_powerChangedMessageType:(unsigned)type notificationID:(long)anId;	// 0x1c5f5
- (void)_invalidateABManager;	// 0x1c5c9
- (void)_eagerlyLoadAddressBookManager;	// 0x1c5a1
- (id)_addressBookManager;	// 0x1c551
- (void)_clearRestrictionsCache;	// 0x1c525
- (id)_restrictions;	// 0x1c331
- (void)_setCachedValidationData:(id)data withDuration:(double)duration;	// 0x1c21d
- (id)_cachedValidationData;	// 0x1c15d
- (void)_setCachedServerCertificate:(id)certificate;	// 0x1c131
- (id)_cachedServerCertificate;	// 0x1c0ed
- (id)_authenticator;	// 0x1c08d
- (BOOL)_authenticationDisabled;	// 0x1c04d
- (BOOL)_isSessionActive;	// 0x1c035
- (void)_resetServerConnection;	// 0x1bf7d
- (id)_serverConnection;	// 0x1be91
- (void)dealloc;	// 0x1bcc1
- (id)initOnQueue:(dispatch_queue_s *)queue withAccount:(id)account;	// 0x1bb91
@end
