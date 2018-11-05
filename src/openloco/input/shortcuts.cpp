
#include "shortcuts.hpp"
#include "../ui/WindowManager.h"
#include <array>

using namespace openloco::interop;
using namespace openloco::ui;

namespace openloco::input::shortcuts
{
    static void closeTopmostWindow();
    static void CloseAllFloatingWindows();
    static void CancelConstructionMode();
    static void PauseUnpauseGame();
    static void ZoomViewOut();
    static void ZoomViewIn();
    static void RotateView();
    static void RotateConstructionObject();
    static void ToggleUndergroundView();
    static void ToggleHideForegroundTracks();
    static void ToggleHideForegroundScenery();
    static void ToggleHeightMarksonLand();
    static void ToggleHeightMarksonTracks();
    static void ToggleDirArrowsonTracks();
    static void AdjustLand();
    static void AdjustWater();
    static void PlantTrees();
    static void BulldozeArea();
    static void BuildTracks();
    static void BuildRoads();
    static void BuildAirports();
    static void BuildShipPorts();
    static void BuildNewVehicles();
    static void ShowVehiclesList();
    static void ShowStationsList();
    static void ShowTownsList();
    static void ShowIndustriesList();
    static void ShowMap();
    static void ShowCompaniesList();
    static void ShowCompanyInformation();
    static void ShowFinances();
    static void ShowAnnouncementsList();
    static void makeScreenshot();
    static void toggleLastAnnouncement();
    static void SendMessage();

    static std::array<void (*)(), 35> _shortcuts = { {
        closeTopmostWindow,
        CloseAllFloatingWindows,
        CancelConstructionMode,
        PauseUnpauseGame,
        ZoomViewOut,
        ZoomViewIn,
        RotateView,
        RotateConstructionObject,
        ToggleUndergroundView,
        ToggleHideForegroundTracks,
        ToggleHideForegroundScenery,
        ToggleHeightMarksonLand,
        ToggleHeightMarksonTracks,
        ToggleDirArrowsonTracks,
        AdjustLand,
        AdjustWater,
        PlantTrees,
        BulldozeArea,
        BuildTracks,
        BuildRoads,
        BuildAirports,
        BuildShipPorts,
        BuildNewVehicles,
        ShowVehiclesList,
        ShowStationsList,
        ShowTownsList,
        ShowIndustriesList,
        ShowMap,
        ShowCompaniesList,
        ShowCompanyInformation,
        ShowFinances,
        ShowAnnouncementsList,
        makeScreenshot,
        toggleLastAnnouncement,
        SendMessage,
    } };

    void execute(Shortcut s)
    {
        _shortcuts[s]();
    }

    // 0x004BF089
    void closeTopmostWindow()
    {
        WindowManager::closeTopmost();
    }

    // 004BF0B6
    void CloseAllFloatingWindows()
    {
        // WindowManager::sub_4CF456();
    }

    // 0x4BF0BC
    void CancelConstructionMode()
    {
        call(0x004BF0BC);
    }

    // 0x4BF0E6
    void PauseUnpauseGame()
    {
        if (is_editor_mode())
            return;

        registers regs;
        regs.bl = 1;
        do_game_command(20, regs);
    }

    // 0x004BF0FE
    void ZoomViewOut()
    {
        call(0x004BF0FE);
    }

    // 0x004BF115
    void ZoomViewIn()
    {
        call(0x004BF115);
    }

    // 0x004BF12C
    void RotateView()
    {
        call(0x004BF12C);
    }

    // 0x004BF148
    void RotateConstructionObject()
    {
        call(0x004BF148);
    }

    // 0x004BF18A
    void ToggleUndergroundView()
    {
        call(0x004BF18A);
    }

    // 0x004BF194
    void ToggleHideForegroundTracks()
    {
        call(0x004BF194);
    }

    // 0x004BF19E
    void ToggleHideForegroundScenery()
    {
        call(0x004BF19E);
    }

    // 0x004BF1A8
    void ToggleHeightMarksonLand()
    {
        call(0x004BF1A8);
    }

    // 0x004BF1B2
    void ToggleHeightMarksonTracks()
    {
        call(0x004BF1B2);
    }

    // 0x004BF1BC
    void ToggleDirArrowsonTracks()
    {
        call(0x004BF1BC);
    }

    // 0x004BF1C6
    void AdjustLand()
    {
        call(0x004BF1C6);
    }

    // 0x004BF1E1
    void AdjustWater()
    {
        call(0x004BF1E1);
    }

    // 0x004BF1FC
    void PlantTrees()
    {
        call(0x004BF1FC);
    }

    // 0x004BF217
    void BulldozeArea()
    {
        call(0x004BF217);
    }

    // 0x004BF232
    void BuildTracks()
    {
        call(0x004BF232);
    }

    // 0x004BF24F
    void BuildRoads()
    {
        call(0x004BF24F);
    }

    // 0x004BF276
    void BuildAirports()
    {
        call(0x004BF276);
    }

    // 0x004BF295
    void BuildShipPorts()
    {
        call(0x004BF295);
    }

    // 0x004BF2B4
    void BuildNewVehicles()
    {
        call(0x004BF2B4);
    }

    // 0x004BF2D1
    void ShowVehiclesList()
    {
        call(0x004BF2D1);
    }

    // 0x004BF2F0
    void ShowStationsList()
    {
        call(0x004BF2F0);
    }

    // 0x004BF308
    void ShowTownsList()
    {
        call(0x004BF308);
    }

    // 0x004BF323
    void ShowIndustriesList()
    {
        call(0x004BF323);
    }

    // 0x004BF33E
    void ShowMap()
    {
        call(0x004BF33E);
    }

    // 0x004BF359
    void ShowCompaniesList()
    {
        call(0x004BF359);
    }

    // 0x004BF36A
    void ShowCompanyInformation()
    {
        call(0x004BF36A);
    }

    // 0x004BF382
    void ShowFinances()
    {
        call(0x004BF382);
    }

    // 0x004BF39A
    void ShowAnnouncementsList()
    {
        call(0x004BF39A);
    }

    // 0x004BF3AB
    void makeScreenshot()
    {
        call(0x004BF3AB);
    }

    // 0x004BF3B3
    void toggleLastAnnouncement()
    {
        call(0x004BF3B3);
    }

    // 0x004BF3DC
    void SendMessage()
    {
        call(0x004BF3DC);
    }
}