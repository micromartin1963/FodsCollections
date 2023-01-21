#define _ARMA_

class CfgMods
{
	class FodsCardsCollections
	{

		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "";
		credits = "";
		author = "Fod";
		version = "0.1";
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"FodsCardsCollections/scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"FodsCardsCollections/scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"FodsCardsCollections/scripts/5_Mission"};
			};
		};
	};
};


class CfgPatches
{
	class FodsCardsCollections
	{
		units[] = {"card_UK","Cigarette_album"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};


class CfgSlots
{
	class Slot_card_UK
	{
		name = "card_UK";
		displayName = "Cigarette card UK Flag";
		ghostIcon = "default";
	};

	class Slot_card_USA
	{
		name = "card_USA";
		displayName = "Cigarette card USA Flag";
		ghostIcon = "default";
	};
		class Slot_card_FRANCE
	{
		name = "card_FRANCE";
		displayName = "Cigarette card French Flag";
		ghostIcon = "default";
	};
		class Slot_card_SPAIN
	{
		name = "card_SPAIN";
		displayName = "Cigarette card Spanish Flag";
		ghostIcon = "default";
	};
		class Slot_card_SWEDEN
	{
		name = "card_SWEDEN";
		displayName = "Cigarette card Swedish Flag";
		ghostIcon = "default";
	};
		class Slot_card_GERMAN
	{
		name = "card_GERMAN";
		displayName = "Cigarette card German Flag";
		ghostIcon = "default";
	};


};


class CfgVehicles
{
	class Inventory_Base;
	class Item;

	class Cigarette_Cards: Inventory_Base
	{
		scope = 1;
		model = "FodsCardsCollections\data\ukflag.p3d";
		hiddenSelections[] = {"cig_card"};
		itemSize[] = {1,2};
		weight = 150;
		rotationFlags = 16;

	};

	class card_UK : Cigarette_Cards
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FodsCardsCollections\data\uk.paa"};
		displayName = "Cigarette Card : UK Flag";
		descriptionShort = "Cigarette Card : collect all 6";
		inventorySlot[] = {"card_UK"};
	};

	class card_USA : Cigarette_Cards
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FodsCardsCollections\data\usa.paa"};
		displayName = "Cigarette Card : USA Flag";
		descriptionShort = "Cigarette Card : collect all 6";
		inventorySlot[] = {"card_USA"};
	};

		class card_FRANCE : Cigarette_Cards
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FodsCardsCollections\data\france.paa"};
		displayName = "Cigarette Card : Frence Flag";
		descriptionShort = "Cigarette Card : collect all 6";
		inventorySlot[] = {"card_FRANCE"};
	};

	class card_SPAIN : Cigarette_Cards
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FodsCardsCollections\data\spain.paa"};
		displayName = "Cigarette Card : Spanish Flag";
		descriptionShort = "Cigarette Card : collect all 6";
		inventorySlot[] = {"card_SPAIN"};
	};

		class card_SWEDEN : Cigarette_Cards
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FodsCardsCollections\data\sweden.paa"};
		displayName = "Cigarette Card : Swedish Flag";
		descriptionShort = "Cigarette Card : collect all 6";
		inventorySlot[] = {"card_SWEDEN"};
	};

		class card_GERMAN : Cigarette_Cards
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FodsCardsCollections\data\german.paa"};
		displayName = "Cigarette Card : German Flag";
		descriptionShort = "Cigarette Card : collect all 6";
		inventorySlot[] = {"card_GERMAN"};
	};

// -------- end of cards -----------------
	class MyBook_Base : Inventory_Base
	{
		scope = 1;
		model = "FodsCardsCollections\data\flagbook2.p3d";
		hiddenSelections[] = {"book"};		
		rotationFlags = 1;
		weight = 150;
		itemSize[] = {4,4};
		inventorySlot[] = {"Book_001"};
	};

		class Cigarette_album : MyBook_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FodsCardsCollections\data\book.paa"};
		title = "Cigarette Card Collection";
		displayName = "Album For Your Collection Of Flags";
		descriptionShort = "If you smoke alot you'll get the set";
		allowOwnedCargoManipulation = 1;
		attachments[] = {"card_UK","card_USA","card_FRANCE","card_SPAIN","card_SWEDEN","card_GERMAN"};
	};

		class Cigarette_album2 : MyBook_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"\FodsCardsCollections\data\book4.paa"};
		title = "Cigarette Card Collection";
		displayName = "Album For Your Collection Of Someting else";
		descriptionShort = "If you smoke alot you'll get the set";
		allowOwnedCargoManipulation = 1;
		attachments[] = {"card_UK","card_USA","card_FRANCE","card_SPAIN","card_SWEDEN","card_GERMAN"};
	};

};
