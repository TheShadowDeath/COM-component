// dllmain.h: объявление класса модуля.

class CCOMcomponentModule : public ATL::CAtlDllModuleT< CCOMcomponentModule >
{
public :
	DECLARE_LIBID(LIBID_COMcomponentLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COMCOMPONENT, "{b52c2862-571d-4660-afdc-68a9f8d6aa16}")
};

extern class CCOMcomponentModule _AtlModule;
