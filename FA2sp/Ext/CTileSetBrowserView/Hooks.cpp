#include <CTileSetBrowserView.h>
#include <Helpers/Macro.h>
#include <GlobalVars.h>

DEFINE_HOOK(4F1670, CTileSetBrowserView_ReloadComboboxes, 6)
{
    INIClass* pFAData = &GlobalVars::INIFiles::FAData.get();
    INIClass* pRules = &GlobalVars::INIFiles::Rules.get();

    GET_STACK(int, overlayIdx, 0x24);
    // GET(CString, name, ECX);

    if (pFAData->ReadBool("Debug", "WallConnectionFilter")) {
        char buf[8];
        _itoa_s(overlayIdx, buf, 10);
        auto const& pOvlName = pRules->Read("OverlayTypes", buf);

        if (!pRules->ReadBool(pOvlName, "Wall.HasConnection", true))
            return 0x4F1695;
    }

    return 0;
}