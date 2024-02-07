# PalWorld Internal
> [!Note]
> **THIS IS THE STEAMDECK VERSION**
## 

<p align="center">
<img src="https://github.com/NightFyre/Palworld-Internal/assets/80198020/dc552cca-b177-4748-ba30-fe99f6b87b74">
</p>

<Details>  
  <Summary>FEATURES</Summary>  
  
> - Infinite Ammo  
> - Infinite Stamina  
> - Modify Player Speed  
> - Modify Player Attack Power  
> - Modify Player Defense Power  
> - God Mode  
> - Full Bright  
> - Set Random Nickname  
> - Set Party XP  
> - Spawn Items  
> - Give Items by Index  
> - Unlock Effigies  
> - Float Mode ( semi fly mode but cant adjust height )  
> - Revive Player  
> - Teleport Manager  
> - Entity Manager ( Kill , teleport to, forge )  
> - Waypoint Manager  
> - Quick Settings ( Item Stacks )  
> - Teleport Pals to Crosshair  
> - Death Aura ( enemy pals lose health as they get closer to player )  
> - DEBUG ESP ( Debug All Entities )  

</Details>  

### USAGE
- Compile Solution ( SDK, Launcher, DLL )  
- Launch steamdeck to desktop mode, Navigate to palworld in steam library and "Browse Local Files"  
- Rename "Palworld.exe" to "Palworld-bak.exe" ( you might need to enable an option to view file extentions )  
- Copy the compiled Launcher and dll to the palworld game directory where the newly renamed "Palworld-bak.exe" is located  
- Switch back to gaming mode on the steam deck  
- Launch palworld as you would normally  
- Once loaded into a world press [ L3 + R3 ] to load the module  
- Show and hide the menu with [ L3 + R3 ]  
- Keyboard and mouse input is supported , use [ INSERT ] to show and hide the menu

### UPDATING
- Dump the game with dumper7  
- Move SDK folder and SDK.hpp into SDKLibrary solution folder  
- Attempt to compile, fix all errors by changing class and member names ( redifition errors )  
- Update APalPlayerCharacter::Tick offset by searching for the aob in cheat engine   
- compile Palworld-Netcrack and execute the launcher in the bin folder  

<Details>  
  <Summary>AOBS</Summary>  
  
> GEngine: `48 89 ? ? ? ? ? 48 85 ? 74 ? E8 ? ? ? ? 48 8D ? ? E8 ? ? ? ? 0F 28`  
> GObjects: `48 8B 05 ? ? ? ? 48 8B 0C C8 4C 8D 04 D1 EB 03`  
> FNames: `48 8D 05 ? ? ? ? EB 13 48 8D 0D ? ? ? ? E8 ? ? ? ? C6 05 ? ? ? ? ? 0F 10`  
> GWorld: `48 8B 1D ?? ?? ?? ?? 48 85 DB 74 33 41 B0`  
> GetBoneMatrix: `E8 ? ? ? ? 48 8B CB 0F 10 00 0F 11 83 ? ? ? ? 0F 10 48 10 0F 11 8B ? ? ? ? 0F 10 40 20 0F 11 83`  
> APalPlayerCharacter::Tick: `48 89 5C 24 ? 57 48 83 EC 60 48 8B F9 E8 ? ? ? ? 48 8B | [IDA NOTE: 2ND RESULT]`  

</Details>  

### KNOWN ISSUES
- Some features will cause a crash if toggled before loading into a world  
- returning to the main menu and attempting to join another world will likely crash the game  
- 

## External Library Credits  
[Dear ImGui](https://github.com/ocornut/imgui)  
[MinHook](https://github.com/TsudaKageyu/minhook)  
[Dumper7](https://github.com/Encryqed/Dumper-7)  
[DX11-Internal-Base](https://github.com/NightFyre/DX11-ImGui-Internal-Hook)  
[Palworld Reversal, Structs and Offsets](https://www.unknowncheats.me/forum/palworld/620076-palworld-reversal-structs-offsets.html)  
