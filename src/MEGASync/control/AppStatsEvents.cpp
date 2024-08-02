#include "AppStatsEvents.h"

// MEGA Desktop App ranges:
//   [99500, 99599]
//   [600000, 699999]
QMap<AppStatsEvents::EventType, int> AppStatsEvents::mTypeMap = {
    { AppStatsEvents::EventType::NONE                                      , 0 },
    { AppStatsEvents::EventType::FIRST_START                               , 99500 },
    { AppStatsEvents::EventType::FIRST_SYNC                                , 99501 },
    { AppStatsEvents::EventType::FIRST_SYNCED_FILE                         , 99502 },
    { AppStatsEvents::EventType::FIRST_WEBCLIENT_DL                        , 99503 },
    { AppStatsEvents::EventType::UNINSTALL_STATS                           , 99504 },
    { AppStatsEvents::EventType::ACC_CREATION_START                        , 99505 },
    //{ (Deprecated)                                                       , 99506 },
    //{ (Deprecated)                                                       , 99507 },
    { AppStatsEvents::EventType::PRO_REDIRECT                              , 99508 },
    { AppStatsEvents::EventType::MEM_USAGE                                 , 99509 },
    { AppStatsEvents::EventType::UPDATE                                    , 99510 },
    { AppStatsEvents::EventType::UPDATE_OK                                 , 99511 },
    { AppStatsEvents::EventType::DUP_FINISHED_TRSF                         , 99512 },
    //{ (Deprecated)                                                       , 99513 },
    //{ (Deprecated)                                                       , 99514 },
    //{ (Deprecated)                                                       , 99515 },
    //{ (Deprecated)                                                       , 99516 },
    //{ (Deprecated)                                                       , 99517 },
    { AppStatsEvents::EventType::OVER_STORAGE_DIAL                         , 99518 },
    { AppStatsEvents::EventType::OVER_STORAGE_NOTIF                        , 99519 },
    { AppStatsEvents::EventType::OVER_STORAGE_MSG                          , 99520 },
    { AppStatsEvents::EventType::ALMOST_OVER_STORAGE_MSG                   , 99521 },
    { AppStatsEvents::EventType::ALMOST_OVER_STORAGE_NOTIF                 , 99522 },
    { AppStatsEvents::EventType::MAIN_DIAL_WHILE_OVER_QUOTA                , 99523 },
    { AppStatsEvents::EventType::MAIN_DIAL_WHILE_ALMOST_OVER_QUOTA         , 99524 },
    { AppStatsEvents::EventType::RED_LIGHT_USED_STORAGE_MISMATCH           , 99525 },
    { AppStatsEvents::EventType::TRSF_OVER_QUOTA_DIAL                      , 99526 },
    { AppStatsEvents::EventType::TRSF_OVER_QUOTA_NOTIF                     , 99527 },
    { AppStatsEvents::EventType::TRSF_OVER_QUOTA_MSG                       , 99528 },
    { AppStatsEvents::EventType::TRSF_ALMOST_OVER_QUOTA_MSG                , 99529 },
    { AppStatsEvents::EventType::PAYWALL_NOTIF                             , 99530 },
    { AppStatsEvents::EventType::SYNC_ADD_FAIL_API_EACCESS                 , 99531 },
    { AppStatsEvents::EventType::TRSF_ALMOST_OVERQUOTA_NOTIF               , 99532 },
    { AppStatsEvents::EventType::FIRST_BACKUP                              , 99533 },
    { AppStatsEvents::EventType::FIRST_BACKED_UP_FILE                      , 99534 },
    { AppStatsEvents::EventType::SI_NAMECONFLICT_SOLVED_MANUALLY           , 99535 },
    { AppStatsEvents::EventType::SI_NAMECONFLICT_SOLVED_AUTOMATICALLY      , 99536 },
    { AppStatsEvents::EventType::SI_NAMECONFLICT_SOLVED_SEMI_AUTOMATICALLY , 99537 },
    { AppStatsEvents::EventType::SI_LOCALREMOTE_SOLVED_MANUALLY            , 99538 },
    { AppStatsEvents::EventType::SI_LOCALREMOTE_SOLVED_AUTOMATICALLY       , 99539 },
    { AppStatsEvents::EventType::SI_LOCALREMOTE_SOLVED_SEMI_AUTOMATICALLY  , 99540 },
    { AppStatsEvents::EventType::SI_IGNORE_SOLVED_MANUALLY                 , 99541 },
    { AppStatsEvents::EventType::SI_STALLED_ISSUE_RECEIVED                 , 99542 },
    { AppStatsEvents::EventType::SI_IGNORE_ALL_SYMLINK                     , 99543 },
    { AppStatsEvents::EventType::SI_SMART_MODE_FIRST_SELECTED              , 99544 },
    { AppStatsEvents::EventType::SI_ADVANCED_MODE_FIRST_SELECTED           , 99545 },
    { AppStatsEvents::EventType::SI_CHANGE_TO_SMART_MODE                   , 99546 },
    { AppStatsEvents::EventType::SI_CHANGE_TO_ADVANCED_MODE                , 99547 },
    { AppStatsEvents::EventType::SI_FINGERPRINT_MISSING_SOLVED_MANUALLY    , 99548 },
    { AppStatsEvents::EventType::SI_MOVERENAME_CANNOT_OCCUR_SOLVED_MANUALLY, 99549 },
    //{ (Stalled issues reserved)                                          , 99550 },
    //{ (Stalled issues reserved)                                          , 99551 },
    //{ (Stalled issues reserved)                                          , 99552 },
    //{ (Stalled issues reserved)                                          , 99553 },
    //{ (Stalled issues reserved)                                          , 99554 },
    //{ (Stalled issues reserved)                                          , 99555 },
    //{ (Stalled issues reserved)                                          , 99556 },
    //{ (Stalled issues reserved)                                          , 99557 },
    //{ (Stalled issues reserved)                                          , 99558 },
    //{ (Stalled issues reserved)                                          , 99559 },
    //{ (Stalled issues reserved)                                          , 99560 },
    //{ (Stalled issues reserved)                                          , 99561 },
    //{ (Stalled issues reserved)                                          , 99562 },
    //{ (Stalled issues reserved)                                          , 99563 },
    //{ (Stalled issues reserved)                                          , 99564 },
    //{ (Stalled issues reserved)                                          , 99565 },
    { AppStatsEvents::EventType::DAILY_ACTIVE_USER                         , 99566 },
    { AppStatsEvents::EventType::MONTHLY_ACTIVE_USER                       , 99567 },
    { AppStatsEvents::EventType::LOGIN_CLICKED                             , 99568 },
    { AppStatsEvents::EventType::LOGOUT_CLICKED                            , 99569 },
    { AppStatsEvents::EventType::TRANSFER_TAB_CLICKED                      , 99570 },
    { AppStatsEvents::EventType::NOTIFICATION_TAB_CLICKED                  , 99571 },
    { AppStatsEvents::EventType::NOTIFICATION_SETTINGS_CLICKED             , 99572 },
    { AppStatsEvents::EventType::UPGRADE_ACCOUNT_CLICKED                   , 99573 },
    { AppStatsEvents::EventType::OPEN_TRANSFER_MANAGER_CLICKED             , 99574 },
    { AppStatsEvents::EventType::ADD_SYNC_CLICKED                          , 99575 },
    { AppStatsEvents::EventType::ADD_BACKUP_CLICKED                        , 99576 },
    { AppStatsEvents::EventType::UPLOAD_CLICKED                            , 99577 },
    { AppStatsEvents::EventType::AVATAR_CLICKED                            , 99578 },
    { AppStatsEvents::EventType::MENU_CLICKED                              , 99579 },
    { AppStatsEvents::EventType::MENU_ABOUT_CLICKED                        , 99580 },
    { AppStatsEvents::EventType::MENU_CLOUD_DRIVE_CLICKED                  , 99581 },
    { AppStatsEvents::EventType::MENU_ADD_SYNC_CLICKED                     , 99582 },
    { AppStatsEvents::EventType::MENU_ADD_BACKUP_CLICKED                   , 99583 },
    { AppStatsEvents::EventType::MENU_OPEN_LINKS_CLICKED                   , 99584 },
    { AppStatsEvents::EventType::MENU_UPLOAD_CLICKED                       , 99585 },
    { AppStatsEvents::EventType::MENU_DOWNLOAD_CLICKED                     , 99586 },
    { AppStatsEvents::EventType::MENU_STREAM_CLICKED                       , 99587 },
    { AppStatsEvents::EventType::MENU_SETTINGS_CLICKED                     , 99588 },
    { AppStatsEvents::EventType::MENU_EXIT_CLICKED                         , 99589 },
    { AppStatsEvents::EventType::SETTINGS_GENERAL_TAB_CLICKED              , 99590 },
    { AppStatsEvents::EventType::SETTINGS_ACCOUNT_TAB_CLICKED              , 99591 },
    { AppStatsEvents::EventType::SETTINGS_SYNC_TAB_CLICKED                 , 99592 },
    { AppStatsEvents::EventType::SETTINGS_BACKUP_TAB_CLICKED               , 99593 },
    { AppStatsEvents::EventType::SETTINGS_SECURITY_TAB_CLICKED             , 99594 },
    { AppStatsEvents::EventType::SETTINGS_FOLDERS_TAB_CLICKED              , 99595 },
    { AppStatsEvents::EventType::SETTINGS_NETWORK_TAB_CLICKED              , 99596 },
    { AppStatsEvents::EventType::SETTINGS_NOTIFICATIONS_TAB_CLICKED        , 99597 },
    { AppStatsEvents::EventType::SETTINGS_EXPORT_KEY_CLICKED               , 99598 },
    { AppStatsEvents::EventType::SETTINGS_CHANGE_PASSWORD_CLICKED          , 99599 },
    { AppStatsEvents::EventType::SETTINGS_REPORT_ISSUE_CLICKED             , 600000 },
    { AppStatsEvents::EventType::ONBOARDING_CLOSED_WITHOUT_SETTING_SYNCS   , 600001 },
    { AppStatsEvents::EventType::FIRST_SYNC_FROM_ONBOARDING                , 600002 },
    { AppStatsEvents::EventType::FIRST_BACKUP_FROM_ONBOARDING              , 600003 }
};

// Deprecated are not displayed
QMap<AppStatsEvents::EventType, const char*> AppStatsEvents::mMessageMap = {
    { AppStatsEvents::EventType::FIRST_START, "MEGAsync first start" },
    { AppStatsEvents::EventType::FIRST_SYNC, "MEGAsync first sync" },
    { AppStatsEvents::EventType::FIRST_SYNCED_FILE, "MEGAsync first synced file" },
    { AppStatsEvents::EventType::FIRST_WEBCLIENT_DL, "MEGAsync first webclient download" },
    { AppStatsEvents::EventType::UNINSTALL_STATS, "{\"it\":%1,\"act\":%2,\"lt\":%3}" },
    { AppStatsEvents::EventType::ACC_CREATION_START, "MEGAsync account creation start" },
    { AppStatsEvents::EventType::PRO_REDIRECT, "Redirection to PRO" },
    { AppStatsEvents::EventType::MEM_USAGE, "%1 %2 %3"},
    { AppStatsEvents::EventType::UPDATE, "MEGAsync update" },
    { AppStatsEvents::EventType::UPDATE_OK, "MEGAsync updated OK" },
    { AppStatsEvents::EventType::DUP_FINISHED_TRSF, "Duplicated finished transfer: %1" },
    { AppStatsEvents::EventType::OVER_STORAGE_DIAL, "Overstorage dialog shown" },
    { AppStatsEvents::EventType::OVER_STORAGE_NOTIF, "Overstorage notification shown" },
    { AppStatsEvents::EventType::OVER_STORAGE_MSG, "Overstorage warning shown" },
    { AppStatsEvents::EventType::ALMOST_OVER_STORAGE_MSG, "Almost overstorage warning shown" },
    { AppStatsEvents::EventType::ALMOST_OVER_STORAGE_NOTIF, "Almost overstorage notification shown" },
    { AppStatsEvents::EventType::MAIN_DIAL_WHILE_OVER_QUOTA, "Main dialog shown while overquota" },
    { AppStatsEvents::EventType::MAIN_DIAL_WHILE_ALMOST_OVER_QUOTA, "Main dialog shown while almost overquota" },
    { AppStatsEvents::EventType::RED_LIGHT_USED_STORAGE_MISMATCH, "Red light does not match used storage" },
    { AppStatsEvents::EventType::TRSF_OVER_QUOTA_DIAL, "Transfer over quota dialog shown" },
    { AppStatsEvents::EventType::TRSF_OVER_QUOTA_NOTIF, "Transfer over quota os notification shown" },
    { AppStatsEvents::EventType::TRSF_OVER_QUOTA_MSG, "Transfer over quota ui message shown" },
    { AppStatsEvents::EventType::TRSF_ALMOST_OVER_QUOTA_MSG, "Transfer almost over quota ui message shown" },
    { AppStatsEvents::EventType::PAYWALL_NOTIF, "Paywall notification shown" },
    { AppStatsEvents::EventType::SYNC_ADD_FAIL_API_EACCESS, "Sync addition fails with API_EACCESS" },
    { AppStatsEvents::EventType::TRSF_ALMOST_OVERQUOTA_NOTIF, "Transfer almost over quota os notification shown" },
    { AppStatsEvents::EventType::FIRST_BACKUP, "MEGAsync first backup" },
    { AppStatsEvents::EventType::FIRST_BACKED_UP_FILE, "MEGAsync first backed-up file" },
    { AppStatsEvents::EventType::SI_NAMECONFLICT_SOLVED_MANUALLY, "Name conflict issue solved manually" },
    { AppStatsEvents::EventType::SI_NAMECONFLICT_SOLVED_AUTOMATICALLY, "Name conflict issue solved automatically" },
    { AppStatsEvents::EventType::SI_NAMECONFLICT_SOLVED_SEMI_AUTOMATICALLY, "Name conflict issue solved semi-automatically" },
    { AppStatsEvents::EventType::SI_LOCALREMOTE_SOLVED_MANUALLY, "Local/Remote issue solved manually" },
    { AppStatsEvents::EventType::SI_LOCALREMOTE_SOLVED_AUTOMATICALLY, "Local/Remote issue solved automatically" },
    { AppStatsEvents::EventType::SI_LOCALREMOTE_SOLVED_SEMI_AUTOMATICALLY, "Local/Remote issue solved semi-automatically" },
    { AppStatsEvents::EventType::SI_IGNORE_SOLVED_MANUALLY, "Issue ignored manually" },
    { AppStatsEvents::EventType::SI_STALLED_ISSUE_RECEIVED, "Stalled issue received: Type %1" },
    { AppStatsEvents::EventType::SI_IGNORE_ALL_SYMLINK, "All symlink ignored" },
    { AppStatsEvents::EventType::SI_SMART_MODE_FIRST_SELECTED, "Smart mode selected by default" },
    { AppStatsEvents::EventType::SI_ADVANCED_MODE_FIRST_SELECTED, "Advanced mode selected by default" },
    { AppStatsEvents::EventType::SI_CHANGE_TO_SMART_MODE, "Smart mode selected" },
    { AppStatsEvents::EventType::SI_CHANGE_TO_ADVANCED_MODE, "Advanced mode selected" },
    { AppStatsEvents::EventType::SI_FINGERPRINT_MISSING_SOLVED_MANUALLY, "Cloud fingerprint missing solved manually" },
    { AppStatsEvents::EventType::DAILY_ACTIVE_USER, "Daily Active Users (DAU) - acctype: %1" },
    { AppStatsEvents::EventType::MONTHLY_ACTIVE_USER, "Monthly Active Users (MAU) - acctype: %1" },
    { AppStatsEvents::EventType::LOGIN_CLICKED, "Log in clicked" },
    { AppStatsEvents::EventType::LOGOUT_CLICKED, "Log out clicked" },
    { AppStatsEvents::EventType::TRANSFER_TAB_CLICKED, "Transfer tab clicked" },
    { AppStatsEvents::EventType::NOTIFICATION_TAB_CLICKED, "Notification tab clicked" },
    { AppStatsEvents::EventType::NOTIFICATION_SETTINGS_CLICKED, "Show notification settings clicked" },
    { AppStatsEvents::EventType::UPGRADE_ACCOUNT_CLICKED, "Upgrade account clicked" },
    { AppStatsEvents::EventType::OPEN_TRANSFER_MANAGER_CLICKED, "Open transfer manager clicked" },
    { AppStatsEvents::EventType::ADD_SYNC_CLICKED, "Add sync clicked" },
    { AppStatsEvents::EventType::ADD_BACKUP_CLICKED, "Add backup clicked" },
    { AppStatsEvents::EventType::UPLOAD_CLICKED, "Upload clicked" },
    { AppStatsEvents::EventType::AVATAR_CLICKED, "Settings clicked (avatar)" },
    { AppStatsEvents::EventType::MENU_CLICKED, "Show options clicked" },
    { AppStatsEvents::EventType::MENU_ABOUT_CLICKED, "About clicked (menu)" },
    { AppStatsEvents::EventType::MENU_CLOUD_DRIVE_CLICKED, "Cloud drive clicked (menu)" },
    { AppStatsEvents::EventType::MENU_ADD_SYNC_CLICKED, "Add sync clicked (menu)" },
    { AppStatsEvents::EventType::MENU_ADD_BACKUP_CLICKED, "Add backup clicked (menu)" },
    { AppStatsEvents::EventType::MENU_OPEN_LINKS_CLICKED, "Open links clicked (menu)" },
    { AppStatsEvents::EventType::MENU_UPLOAD_CLICKED, "Upload clicked (menu)" },
    { AppStatsEvents::EventType::MENU_DOWNLOAD_CLICKED, "Download clicked (menu)" },
    { AppStatsEvents::EventType::MENU_STREAM_CLICKED, "Stream clicked (menu)" },
    { AppStatsEvents::EventType::MENU_SETTINGS_CLICKED, "Settings clicked (menu)" },
    { AppStatsEvents::EventType::MENU_EXIT_CLICKED, "Exit clicked (menu)" },
    { AppStatsEvents::EventType::SETTINGS_GENERAL_TAB_CLICKED, "Settings general tab clicked" },
    { AppStatsEvents::EventType::SETTINGS_ACCOUNT_TAB_CLICKED, "Settings account tab clicked" },
    { AppStatsEvents::EventType::SETTINGS_SYNC_TAB_CLICKED, "Settings sync tab clicked" },
    { AppStatsEvents::EventType::SETTINGS_BACKUP_TAB_CLICKED, "Settings backup tab clicked" },
    { AppStatsEvents::EventType::SETTINGS_SECURITY_TAB_CLICKED, "Settings security tab clicked" },
    { AppStatsEvents::EventType::SETTINGS_FOLDERS_TAB_CLICKED, "Settings folders tab clicked" },
    { AppStatsEvents::EventType::SETTINGS_NETWORK_TAB_CLICKED, "Settings network tab clicked" },
    { AppStatsEvents::EventType::SETTINGS_NOTIFICATIONS_TAB_CLICKED, "Settings notifications tab clicked" },
    { AppStatsEvents::EventType::SETTINGS_EXPORT_KEY_CLICKED, "Settings export key clicked" },
    { AppStatsEvents::EventType::SETTINGS_CHANGE_PASSWORD_CLICKED, "Settings change password clicked" },
    { AppStatsEvents::EventType::SETTINGS_REPORT_ISSUE_CLICKED, "Settings report issue clicked" }
};

const char* AppStatsEvents::getEventMessage(EventType event)
{
    if (!mMessageMap.contains(event))
    {
        return "";
    }

    return mMessageMap[event];
}

int AppStatsEvents::getEventType(EventType event)
{
    if (!mTypeMap.contains(event))
    {
        return -1;
    }

    return mTypeMap[event];
}

AppStatsEvents::EventType AppStatsEvents::getEventType(int event)
{
    return mTypeMap.key(event, AppStatsEvents::EventType::NONE);
}
