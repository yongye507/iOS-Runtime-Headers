/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class ACAccount, ACAccountStore, DeliveryAccount, MFLock, NSMutableDictionary, NSString, NSURL;

@interface CastleIMAPAccount : IMAPAccount {
    unsigned int _readyForPushRegistration : 1;
    NSMutableDictionary *_aliasChanges;
    ACAccount *_appleAccount;
    MFLock *_appleAccountLock;
    DeliveryAccount *_deliveryAccount;
    NSString *_updatedDefaultEmail;
}

@property(readonly) ACAccountStore * accountStore;
@property(readonly) NSURL * aliasLookupURL;
@property(readonly) ACAccount * appleAccount;
@property(retain,readonly) NSString * authToken;
@property(readonly) NSString * deliveryHostname;
@property(readonly) unsigned int deliveryPortNumber;
@property(readonly) bool deliveryUsesSSL;
@property(retain,readonly) NSString * personID;

+ (id)accountTypeIdentifier;
+ (id)accountTypeString;
+ (id)defaultPathNameForAccountWithHostname:(id)arg1 username:(id)arg2;
+ (id)displayedAccountTypeString;
+ (id)emailAddressHostPart;
+ (bool)isPredefinedAccountType;
+ (id)newChildAccountWithParentAccount:(id)arg1 error:(id*)arg2;
+ (bool)primaryDeliveryAccountIsDynamic;
+ (bool)usernameIsEmailAddress;

- (void)_accountsChanged:(id)arg1;
- (id)_aliasAuthorizationHeader;
- (id)_aliasUserAgent;
- (id)_aliasesFromData:(id)arg1;
- (id)_aliasesFromOldData:(id)arg1;
- (id)_defaultEmailAddressFromData:(id)arg1;
- (id)_deliveryAccountCreateIfNeeded:(bool)arg1;
- (id)_emailsFromData:(id)arg1;
- (id)_fromEmailAddressesIncludingDisabled:(bool)arg1;
- (id)_headerStringFromDate:(id)arg1;
- (id)_mailPropertyFromAppleAccountForKey:(id)arg1;
- (id)_prepareAliasData;
- (void)_removePasswordInKeychain;
- (void)_resetAppleAccount;
- (bool)_updateEmailAddressAndAliases;
- (id)accountStore;
- (id)aliasLookupURL;
- (bool)allowsTrustPrompt;
- (id)appleAccount;
- (id)authToken;
- (bool)canAttemptPushRegistration;
- (bool)canReceiveNewMailNotifications;
- (unsigned long long)credentialAccessibility;
- (void)dealloc;
- (id)deliveryHostname;
- (unsigned int)deliveryPortNumber;
- (bool)deliveryUsesSSL;
- (bool)derivesDeliveryAccountInfoFromMailAccount;
- (id)displayName;
- (id)displayUsername;
- (id)emailAddresses;
- (id)emailAddressesAndAliasesList;
- (id)firstEmailAddress;
- (id)fromEmailAddresses;
- (id)fromEmailAddressesIncludingDisabled;
- (void)handleAlertResponse:(id)arg1;
- (void)handleOverQuotaResponse:(id)arg1;
- (id)hostname;
- (id)iconString;
- (id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2;
- (bool)isEnabledForDataclass:(id)arg1;
- (bool)isEquivalentTo:(id)arg1 hostname:(id)arg2 username:(id)arg3;
- (id)passwordFromKeychain;
- (void)persistentAccountDidChange:(id)arg1 previousAccount:(id)arg2;
- (id)personID;
- (unsigned int)portNumber;
- (id)preferredAuthScheme;
- (void)pushUpdateForAliasData;
- (void)setDefaultEmailAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEnabled:(bool)arg1 forEmailAddress:(id)arg2;
- (void)setHostname:(id)arg1;
- (void)setLocalDefaultEmailAddress:(id)arg1;
- (void)setLocallyEnabled:(bool)arg1 forEmailAddress:(id)arg2;
- (void)setPasswordInKeychain:(id)arg1;
- (void)setPortNumber:(unsigned int)arg1;
- (void)setUsername:(id)arg1;
- (void)setUsesSSL:(bool)arg1;
- (bool)shouldDisplayHostnameInErrorMessages;
- (bool)shouldFetchACEDBInfoForError:(id)arg1;
- (bool)shouldRegisterForPush;
- (void)startListeningForNotifications;
- (id)statisticsKind;
- (bool)supportsArchiving;
- (id)uniqueIdForPersistentConnection;
- (bool)updateEmailAliases;
- (id)username;
- (bool)usesSSL;

@end