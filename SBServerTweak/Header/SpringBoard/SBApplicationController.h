//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/Foundation.h>

//#import "SBApplicationRestrictionDataSource.h"
//#import "SBLSApplicationLifecycleObserver.h"

@class BKSApplicationStateMonitor, NSCountedSet, NSDictionary, NSLock, NSMutableDictionary, NSMutableSet, NSOperationQueue, SBApplication, SBApplicationRestrictionController, SBLSApplicationWorkspaceObserver;

@interface SBApplicationController : NSObject //<SBApplicationRestrictionDataSource, SBLSApplicationLifecycleObserver>
{
    NSMutableDictionary *_applications;
    NSMutableDictionary *_applicationsByBundleIdentifer;
    NSMutableSet *_applicationsPlayingMutedAudioSinceLastLock;
    SBApplication *_applicationCurrentlyRecordingAudio;
    int _locationStatusBarIconType;
    NSDictionary *_backgroundDisplayDict;
    NSOperationQueue *_backgroundOperationQueue;
    NSLock *_applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    _Bool _visibilityOverridesAreDirty;
    BKSApplicationStateMonitor *_appStateMonitor;
    _Bool _booting;
    NSMutableSet *_appsToAutoLaunchAfterBoot;
    SBApplicationRestrictionController *_restrictionController;
    SBLSApplicationWorkspaceObserver *_lsWorkspaceObserver;
    NSCountedSet *_pendingRequestedUninstallsBundleID;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
- (void)applicationsUninstalled:(id)arg1;
- (void)applicationsInstalled:(id)arg1;
- (id)restrictionController;
- (void)_removePendingRequestedUninstalledBundleID:(id)arg1;
- (_Bool)updateAppIconVisibilityOverridesShowing:(id *)arg1 hiding:(id *)arg2;
- (void)_setVisibilityOverridesAreDirty:(_Bool)arg1;
- (int)appVisibilityOverrideForBundleIdentifier:(id)arg1;
- (void)_reloadBackgroundIDsDict;
- (void)loadApplicationsWithBundle:(id)arg1 bundlePath:(id)arg2 isSystemApplication:(_Bool)arg3 defaultTags:(id)arg4 signerIdentity:(id)arg5 provisioningProfileValidated:(_Bool)arg6 seatbeltEnvironmentVariables:(id)arg7 entitlements:(id)arg8;
- (Class)applicationClassForInfoDictionary:(id)arg1;
- (void)loadWebclipAndIcon:(id)arg1;
- (void)loadApplicationsAndIcons:(id)arg1 reveal:(_Bool)arg2 popIn:(_Bool)arg3;
- (void)_loadApplicationsAndIcons:(id)arg1 removed:(id)arg2 applicationProxies:(id)arg3 reveal:(_Bool)arg4 popIn:(_Bool)arg5 reloadAllIcons:(_Bool)arg6;
- (void)_updateIconControllerAndModelForLoadedApplications:(id)arg1 reveal:(_Bool)arg2 popIn:(_Bool)arg3 reloadAllIcons:(_Bool)arg4;
- (void)waitForOperationsToComplete;
- (void)uninstallApplication:(id)arg1;
- (void)removeApplicationsFromModelWithBundleIdentifier:(id)arg1;
- (_Bool)loadApplication:(id)arg1;
- (id)loadApplications;
- (id)_loadApplications:(id)arg1 removed:(id)arg2 applicationProxies:(id)arg3;
- (void)_calculateApplicationDiff:(id *)arg1 removed:(id *)arg2 applicationProxies:(id)arg3;
- (id)_modifiedApplications:(id)arg1 applicationProxies:(id)arg2;
- (_Bool)_applicationHasBeenModified:(id)arg1 applicationProxy:(id)arg2;
- (void)_loadApplication:(id)arg1 proxy:(id)arg2;
- (void)_sendInstalledAppsDidChangeNotification:(id)arg1 removed:(id)arg2 modified:(id)arg3;
- (void)_preLoadApplications;
- (id)_getLSApplicationProxies;
- (id)newsstandApps;
- (id)webApplications;
- (id)clockApplication;
- (id)faceTimeApp;
- (id)mobilePhone;
- (id)setupApplication;
- (id)dataActivation;
- (id)applicationCurrentlyRecordingAudio;
- (id)iPod;
- (id)applicationWithPid:(int)arg1;
- (id)applicationWithDisplayIdentifier:(id)arg1;
- (id)applicationsWithPid:(int)arg1;
- (id)applicationsWithBundleIdentifier:(id)arg1;
- (id)allApplications;
- (id)allDisplayIdentifiers;
- (void)autoLaunchAppsIfNecessaryAfterBoot;
- (void)_deviceFirstUnlocked;
- (int)locationStatusBarIconType;
- (void)buildLocationState;
- (void)_updateLocationState;
- (void)_memoryWarningReceived;
- (void)_lockStateChanged:(id)arg1;
- (void)_unusuallyMutedAudioPlaying:(id)arg1;
- (void)_recordingStateChanged:(id)arg1;
- (void)_mediaServerConnectionDied:(id)arg1;
- (void)_registerForAVSystemControllerNotifications;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)dealloc;
- (id)init;

@end
