#ifndef __WDI_CMDS_H_FILE
#define __WDI_CMDS_H_FILE

NDIS_STATUS
WDI_OID_TASK_OPEN(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);
	
NDIS_STATUS
WDI_OID_TASK_CLOSE(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_SCAN(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_P2P_DISCOVER(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_CONNECT(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_DOT11_RESET(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_DISCONNECT(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_ROAM(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_P2P_SEND_REQUEST_ACTION_FRAME(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_P2P_SEND_RESPONSE_ACTION_FRAME(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_SET_RADIO_STATE(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_CREATE_PORT(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_DELETE_PORT(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_START_AP(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_STOP_AP(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_SEND_AP_ASSOCIATION_RESPONSE(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER	pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_CHANGE_OPERATION_MODE(	
	IN  PADAPTER				pAdapter,
	IN  PRT_OID_HANDLER			pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_SEND_REQUEST_ACTION_FRAME(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_TASK_SEND_RESPONSE_ACTION_FRAME(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_P2P_LISTEN_STATE(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_P2P_ADDITIONAL_IE(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_ADD_CIPHER_KEYS(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_DELETE_CIPHER_KEYS(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_DEFAULT_KEY_ID(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_CONNECTION_QUALITY(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_GET_AUTO_POWER_SAVE(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_RECEIVE_PACKET_FILTER(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_GET_ADAPTER_CAPABILITIES(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_NETWORK_LIST_OFFLOAD(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_RECEIVE_COALESCING(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_PRIVACY_EXEMPTION_LIST(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_CURRENT_CHANNEL(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_POWER_STATE(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_ABORT_TASK(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_ADD_WOL_PATTERN(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_REMOVE_WOL_PATTERN(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_MULTICAST_LIST(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_WDI_SET_ADD_PM_PROTOCOL_OFFLOAD(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_WDI_SET_REMOVE_PM_PROTOCOL_OFFLOAD(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_ADAPTER_CONFIGURATION(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_GET_RECEIVE_COALESCING_MATCH_COUNT(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_ADVERTISEMENT_INFORMATION(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_IHV_REQUEST(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_GET_NEXT_ACTION_FRAME_DIALOG_TOKEN(
	IN  PADAPTER				pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_P2P_WPS_ENABLED(
	IN  PADAPTER				pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_GET_BSS_ENTRY_LIST(
	IN  PADAPTER				pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_OID_SET_FAST_BSS_TRANSITION_PARAMETERS(
	IN  PADAPTER				pAdapter,
	IN  PRT_OID_HANDLER			pOidHandle
	);

BOOLEAN
WDI_CMD_CreatePortComplete(
	IN  PADAPTER				pAdapter,
	IN  NDIS_OID_REQUEST		*req,
	IN  NDIS_STATUS				status
	);

BOOLEAN
WDI_CMD_DeletePortComplete(
	IN  PADAPTER				pAdapter,
	IN  NDIS_OID_REQUEST		*req,
	IN  NDIS_STATUS				status
	);

BOOLEAN
WDI_CMD_ResetComplete(
	IN  PADAPTER				pAdapter,
	IN  NDIS_OID_REQUEST		*req,
	IN  NDIS_STATUS				status
	);

BOOLEAN
WDI_CMD_ChangeOpModeComplete(
	IN  PADAPTER				pAdapter,
	IN  NDIS_OID_REQUEST		*req,
	IN  NDIS_STATUS				status
	);

BOOLEAN
WDI_CMD_P2PDiscoverComplete(
	IN  PADAPTER				pAdapter,
	IN  NDIS_STATUS				status
	);

BOOLEAN
WDI_CMD_P2pSendRequestActionFrameComplete(
	IN  ADAPTER					*pAdapter,
	IN  const WDI_SEND_ACTION_CTX *ctx
	);

BOOLEAN
WDI_CMD_P2pSendResponseActionFrameComplete(
	IN  PADAPTER				pAdapter,
	IN  const WDI_SEND_ACTION_CTX *ctx
	);

BOOLEAN
WDI_CMD_SendApAssociationResponseComplete(
	IN  PADAPTER				pAdapter,
	IN  NDIS_OID_REQUEST		*req,
	IN  RT_STATUS				status
	);

VOID
WDI_CMD_PreIndicateRxP2pActionFrameCb(
	IN  VOID 					*pvP2PInfo,
	IN  u4Byte 					EventID,
	IN  MEMORY_BUFFER			*pInformation
	);

VOID
WDI_CMD_PostIndicateRxP2pActionFrameCb(
	IN  VOID 					*pvP2PInfo,
	IN  u4Byte 					EventID,
	IN  MEMORY_BUFFER			*pInformation
	);

NDIS_STATUS
WDI_OID_GET_STATISTICS(
	IN  PADAPTER			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

NDIS_STATUS
WDI_CANCEL_OID_TASK_SCAN(
	IN  PADAPTER			pAdapter
	);

NDIS_STATUS
WDI_CANCEL_OID_TASK_P2P_DISCOVER(
	IN  PADAPTER			pAdapter
	);

NDIS_STATUS
WDI_CANCEL_OID_TASK_CONNECT(
	IN  PADAPTER			pAdapter
	);

NDIS_STATUS
WDI_CANCEL_OID_TASK_P2P_SEND_REQUEST_ACTION_FRAME(
	IN  PADAPTER			pAdapter
	);

NDIS_STATUS
WDI_CANCEL_OID_TASK_P2P_SEND_RESPONSE_ACTION_FRAME(
	IN  PADAPTER			pAdapter
	);

NDIS_STATUS
WDI_CANCEL_OID_TASK_START_AP(
	IN  PADAPTER			pAdapter
	);

NDIS_STATUS
WDI_CANCEL_OID_TASK_SEND_AP_ASSOCIATION_RESPONSE(
	IN  PADAPTER			pAdapter
	);

NDIS_STATUS
WDI_CANCEL_OID_TASK_SEND_REQUEST_ACTION_FRAME(
	IN  PADAPTER			pAdapter
	);

NDIS_STATUS
WDI_CANCEL_OID_TASK_SEND_RESPONSE_ACTION_FRAME(
	IN  PADAPTER			pAdapter
	);

BOOLEAN
WDI_CMD_SendReqActionFrameComplete(
	IN  PADAPTER				pAdapter,
	IN  const WDI_SEND_ACTION_CTX *ctx
	);

BOOLEAN
WDI_CMD_SendRspActionFrameComplete(
	IN  PADAPTER				pAdapter,
	IN  const WDI_SEND_ACTION_CTX *ctx
	);

NDIS_STATUS 
WDI_PRE_M4_OID_TASK_SCAN(
	IN  PADAPTER 			pAdapter,
	IN  PRT_OID_HANDLER		pOidHandle
	);

#endif