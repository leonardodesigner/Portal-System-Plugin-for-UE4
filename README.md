# Portal Plug-in System for Unreal Engine 4

![Unreal Engine_2021 09 17-14 26_3](https://user-images.githubusercontent.com/12305857/133846263-6ef134b2-6040-4d19-b2e9-440d2d8dc820.gif)

![5ncdra](https://user-images.githubusercontent.com/12305857/133839620-ac2e4f04-0baf-4ba5-b9da-fe90dc4c7299.gif)


![5ncdjb](https://user-images.githubusercontent.com/12305857/133839641-c873fafd-35f8-4efb-8ce5-4d97056591cb.gif)


- Fully integrated in any project
- Fully costumizable
- Easy to use
- Gameplay sample
- And more

## Features

- Work with any characters
- work with any Physic body actor
- Plugin structure
- Highly optimized for production
- All apearance can be editable
- Contains sample controlable character 
- Portal gun component for create portals in real time
- Portal gun components can be integrable in any characters or any actors
- Costumizable fixed in level portals

## Installation

- Clone the repository inside your project's Plugins folder, or download the latest release and extract it into your project's Plugins folder.
- Regenerate visual studio project files and build your project.
- Launch the project, and enable plugin content viewer as seen below. This will show contents of the plugin in your content browser:

![Install](https://user-images.githubusercontent.com/12305857/133839730-273af1bc-e231-4c6d-82e5-0ecadedfb09d.png)

## How to use
### Add to character / Player
- Open your character blueprint and click in "AddComponent", find "BP_PortalGunComponent";

![HowTos01](https://user-images.githubusercontent.com/12305857/133840306-427c3e4a-0a83-40ba-8a7b-7aeaf7343659.png)

- Modify the Basic Properties as you like;
- Set Muzzle name in "MuzzleName"variable, located in Basic Properties
- In "BeginPlay" event add the weapon mesh in "WeaponMesh"Variable
- Add the event "Create Portal" on any input (Eg. Fire Input) to player can generate the portals
- Add the event "Destroy Portal" on any input (Eg. Fire Input) to player can destroy the portal what want,as long as it's generated by the portal gun
- Add the event "Destroy All Portal" on any input (Eg. Middle Mouse) to player can destroy all portals generated by portal gun
- ##### Basic Properties 

### Add level portal
- Go to portal plugin content directory: /PortalGun/Content/Blueprint/Portal/PortalActor

![CreatingLevelPortal01](https://user-images.githubusercontent.com/12305857/133839873-1b5a7298-8461-4027-8668-b77a0e895944.png)


![CreatingLevelPortal02](https://user-images.githubusercontent.com/12305857/133840031-6b2c56c2-29f7-4e16-a90c-69120b3898ea.png)

- Next phase is Add the PortalBP on Level
- Create, in any directory, the Scene capture texture for each portal

![CreatingSceneCapture](https://user-images.githubusercontent.com/12305857/133839923-7bcdce3e-99cd-4987-a052-1833128a782c.png)

- Add the created Scene capture on "SetSceneCapture" in portal Basic Configuration
- Add other portal on level and add the first created portal on "PortalDestination" of present portal Basic Configuration

![CreatingLevelPortal03](https://user-images.githubusercontent.com/12305857/133839972-8c7f8d9f-2be4-4400-9fed-e8e83860e038.png)

- Customize the apearance in Basic Configuration as you like;

### Properties Manual
- #### Portal Gun Component
![HowTos02](https://user-images.githubusercontent.com/12305857/133840091-f31786b6-9765-4058-b721-ff317476f4d3.png)
- FireRange          -> Set the weapon fire range 
- WeaponMesh         -> Get the player weapon mesh 
- MuzzleSocket       -> Get the weapon muzzle socket
- DrawDebug          -> Draw debug weapon trace type
- PortalClass        -> Select the portal custom class
- UseWeaponDirection -> Use fire trace based on weapon direction or player control rotation
- ObjectsAffected    -> Selcet the affected objects channel
- ActorsToIgnore     -> Actors to trace ignore, case is ignored, the portal will not spawn
- PortalA_Color      -> Insert the first portal color
- PortalB_Color      -> Insert the second portal color
- #### Portal Actor
![1](https://user-images.githubusercontent.com/12305857/133840362-e81c2823-6c94-4a11-a925-70865ee68dbf.PNG)
- SelectPortalType    -> Select the portal type
- AutomaticFindPortal -> Can auto set as self as destiny of portal destiny?
- PortalDestination   -> Get the portal destiny
- SetSceneCapture     -> Set custom portal scene capture 
- PortalColor         -> Select Fixed portal color 
