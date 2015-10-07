#pragma once

class DirectInputA : public IDirectInputA
{
public:
	DirectInputA(IDirectInputA* original);

	~DirectInputA();

	/*** IUnknown methods ***/

	STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID * ppvObj);

	STDMETHOD_(ULONG, AddRef)(THIS);

	STDMETHOD_(ULONG, Release)(THIS);

	/*** IDirectInputA methods ***/

	STDMETHOD(CreateDevice)(THIS_ REFGUID, LPDIRECTINPUTDEVICEA *, LPUNKNOWN);

	STDMETHOD(EnumDevices)(THIS_ DWORD, LPDIENUMDEVICESCALLBACKA, LPVOID, DWORD);

	STDMETHOD(GetDeviceStatus)(THIS_ REFGUID);

	STDMETHOD(RunControlPanel)(THIS_ HWND, DWORD);

	STDMETHOD(Initialize)(THIS_ HINSTANCE, DWORD);

	IDirectInputA* _original;
};
