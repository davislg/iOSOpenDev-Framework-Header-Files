/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */




@protocol GKVoiceChatClient <NSObject>
- (void)voiceChatService:(id)service sendData:(id)data toParticipantID:(id)participantID;
- (id)participantID;
@optional
- (void)voiceChatService:(id)service sendRealTimeData:(id)data toParticipantID:(id)participantID;
- (void)voiceChatService:(id)service didStartWithParticipantID:(id)participantID;
- (void)voiceChatService:(id)service didNotStartWithParticipantID:(id)participantID error:(id)error;
- (void)voiceChatService:(id)service didStopWithParticipantID:(id)participantID error:(id)error;
- (void)voiceChatService:(id)service didReceiveInvitationFromParticipantID:(id)participantID callID:(int)anId;
@end

