//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace digital { namespace pervasive { namespace sample { namespace relaynode {

ref class relaynodeSignals;

public interface class IrelaynodeSignals
{
    event Windows::Foundation::TypedEventHandler<relaynodeSignals^, relaynodeButtonPressedReceivedEventArgs^>^ ButtonPressedReceived;
    event Windows::Foundation::TypedEventHandler<relaynodeSignals^, relaynodeRelayStateChangedReceivedEventArgs^>^ RelayStateChangedReceived;
};

public ref class relaynodeSignals sealed : [Windows::Foundation::Metadata::Default] IrelaynodeSignals
{
public:
    // Calling this method will send the ButtonPressed signal to every member of the session.
    void ButtonPressed();

    // This event fires whenever the ButtonPressed signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<relaynodeSignals^, relaynodeButtonPressedReceivedEventArgs^>^ ButtonPressedReceived;

    // Calling this method will send the RelayStateChanged signal to every member of the session.
    void RelayStateChanged(_In_ int32 interfaceMemberRelayId, _In_ byte interfaceMemberState);

    // This event fires whenever the RelayStateChanged signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<relaynodeSignals^, relaynodeRelayStateChangedReceivedEventArgs^>^ RelayStateChangedReceived;

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallButtonPressedReceived(_In_ relaynodeSignals^ sender, _In_ relaynodeButtonPressedReceivedEventArgs^ args);
    void CallRelayStateChangedReceived(_In_ relaynodeSignals^ sender, _In_ relaynodeRelayStateChangedReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    alljoyn_interfacedescription_member m_memberButtonPressed;
    alljoyn_interfacedescription_member m_memberRelayStateChanged;
};

} } } } 
