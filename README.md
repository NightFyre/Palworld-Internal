# PalWorld-NetCrack  
This is the PalWorld network cracking framework  
modifying player data in the Player tab  
Network cracking in the Exploit tab  

## NOTE: THIS IS THE XBOX GAME PASS VERSION  

### FEATURES
- Infinite Ammo  
- Infinite Stamina  
- Modify Player Speed  
- Modify Player Attack Power  
- Modify Player Defense Power  
- God Mode  
- Full Bright  
- Set Random Nickname  
- Set Party XP  
- Spawn Items  
- Give Items by Index  
- Unlock Effigies  
- Float Mode ( semi fly mode but cant adjust height )  
- Revive Player  
- Teleport Manager  
- Entity Manager ( Kill , teleport to, forge )  
- Waypoint Manager  
- Quick Settings ( Item Stacks )  
- Teleport Pals to Crosshair  
- Death Aura ( enemy pals lose health as they get closer to player )  
- DEBUG ESP ( Debug All Entities )  

## UPDATING
- Dump the game with dumper7  
- Move SDK folder and SDK.hpp into SDKLibrary solution folder  
- Attempt to compile, fix all errors by changing class and member names ( redifition errors )  
- Update APalPlayerCharacter::Tick offset by searching for the aob in cheat engine   
- compile Palworld-Netcrack and execute the launcher in the bin folder  

# AOBS
> GObjects: `48 8B 05 ? ? ? ? 48 8B 0C C8 4C 8D 04 D1 EB 03`  
> FNames: `48 8D 05 ? ? ? ? EB 13 48 8D 0D ? ? ? ? E8 ? ? ? ? C6 05 ? ? ? ? ? 0F 10`  
> GWorld: `48 8B 1D ?? ?? ?? ?? 48 85 DB 74 33 41 B0`  
> APalPlayerCharacter::Tick: `48 89 5C 24 ? 57 48 83 EC 60 48 8B F9 E8 ? ? ? ? 48 8B | [IDA NOTE: 2ND RESULT]`  

### External Library Credits
[Dear ImGui](https://github.com/ocornut/imgui)  
[MinHook](https://github.com/TsudaKageyu/minhook)  
[Dumper7](https://github.com/Encryqed/Dumper-7)  
[DX11-Internal-Base](https://github.com/NightFyre/DX11-ImGui-Internal-Hook)  
