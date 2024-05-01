class CfgRemoteExec
{
        class Commands
        {
                mode = 2;
        };
        class Functions
        {
                mode = 2;
                //client functions
                class CTI_PVF_Client_OnStructureConstructed {allowedTargets = 0;};
                class CTI_PVF_Client_OnTownCaptured {allowedTargets = 0;};
                class CTI_PVF_Client_OnPurchaseOrderReceived {allowedTargets = 0;};
                class CTI_PVF_Client_OnPurchaseDelegationReceived {allowedTargets = 0;};
                class CTI_PVF_Client_OnMissionEnding {allowedTargets = 0;};
                class CTI_PVF_Client_OnMessageReceived {allowedTargets = 0;};
                class CTI_PVF_Client_OnStructureKilled {allowedTargets = 0;};
                class CTI_PVF_Client_ReceiveStructureBase {allowedTargets = 0;};
                class CTI_PVF_Client_ReceiveDefense {allowedTargets = 0;};
                class CTI_PVF_Client_PurchaseDelegationStart {allowedTargets = 0;};
                class CTI_PVF_Client_OnPurchaseOrderCancelled {allowedTargets = 0;};
                class CTI_PVF_Client_AwardBounty {allowedTargets = 0;};
                class CTI_PVF_Client_OnSpottedTargetReceived {allowedTargets = 0;};
                class CTI_PVF_Client_OnTeamkill {allowedTargets = 0;};
                class CTI_PVF_Client_OnUbernessReached {allowedTargets = 0;};
                class CTI_PVF_Client_RemoveRuins {allowedTargets = 0;};
                class CTI_PVF_Client_AddHQActions {allowedTargets = 0;};
                class CTI_PVF_Client_OnRequestAnswered {allowedTargets = 0;};
                class CTI_PVF_Client_OnRequestReceived {allowedTargets = 0;};
                class CTI_PVF_Client_OnSpecialConstructed {allowedTargets = 0;};

                //server functions
                class CTI_PVF_Server_Forwarder {allowedTargets = 0;};
                class CTI_PVF_Request_HQLocality {allowedTargets = 0;};
                class CTI_PVF_Request_AddScore {allowedTargets = 0;};
                class CTI_PVF_Request_Building {allowedTargets = 0;};
                class CTI_PVF_Request_Defense {allowedTargets = 0;};
                class CTI_PVF_Request_Purchase {allowedTargets = 0;};
                class CTI_PVF_Request_PurchaseCancel {allowedTargets = 0;};
                class CTI_PVF_Answer_Purchase {allowedTargets = 0;};
                class CTI_PVF_Request_Worker {allowedTargets = 0;};
                class CTI_PVF_Request_HandleAction {allowedTargets = 0;};
                class CTI_PVF_Request_AIOrderAction {allowedTargets = 0;};
                class CTI_PVF_Request_Join {allowedTargets = 0;};
                class CTI_PVF_Request_NoobLogger {allowedTargets = 0;};
                class CTI_PVF_Request_NoobLoggerEnd {allowedTargets = 0;};
                class CTI_PVF_Request_Upgrade {allowedTargets = 0;};
                class CTI_PVF_Request_EventDestroyedHQ {allowedTargets = 0;};
                class CTI_PVF_Request_HQRepair {allowedTargets = 0;};
                class CTI_PVF_Request_HCRegister {allowedTargets = 0;};
                class CTI_PVF_Request_TownAddVehicles {allowedTargets = 0;};
        };
};