#ifdef __cplusplus
extern "C" {
#endif
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryUserUGCRequest(void *, AccountID_t, EUserUGCList, EUGCMatchingUGCType, EUserUGCListSortOrder, AppId_t, AppId_t, uint32);
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateQueryAllUGCRequest(void *, EUGCQuery, EUGCMatchingUGCType, AppId_t, AppId_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SendQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetQueryUGCResult(void *, UGCQueryHandle_t, uint32, SteamUGCDetails_t *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_ReleaseQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddRequiredTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_AddExcludedTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnLongDescription(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetReturnTotalOnly(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetAllowCachedResponse(void *, UGCQueryHandle_t, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetCloudFileNameFilter(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetMatchAnyTag(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetSearchText(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetRankedByTrendDays(void *, UGCQueryHandle_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_RequestUGCDetails(void *, PublishedFileId_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_CreateItem(void *, AppId_t, EWorkshopFileType);
extern UGCUpdateHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_StartItemUpdate(void *, AppId_t, PublishedFileId_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTitle(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemDescription(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemVisibility(void *, UGCUpdateHandle_t, ERemoteStoragePublishedFileVisibility);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemTags(void *, UGCUpdateHandle_t, const SteamParamStringArray_t *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemContent(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SetItemPreview(void *, UGCUpdateHandle_t, const char *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubmitItemUpdate(void *, UGCUpdateHandle_t, const char *);
extern EItemUpdateStatus cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemUpdateProgress(void *, UGCUpdateHandle_t, uint64 *, uint64 *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_SubscribeItem(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_UnsubscribeItem(void *, PublishedFileId_t);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetNumSubscribedItems(void *);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetSubscribedItems(void *, PublishedFileId_t *, uint32);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemState(void *, PublishedFileId_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemInstallInfo(void *, PublishedFileId_t, uint64 *, char *, uint32, uint32 *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_GetItemDownloadInfo(void *, PublishedFileId_t, uint64 *, uint64 *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION004_DownloadItem(void *, PublishedFileId_t, bool);
#ifdef __cplusplus
}
#endif
