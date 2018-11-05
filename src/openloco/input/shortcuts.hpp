
namespace openloco::input::shortcuts
{
    enum Shortcut
    {
        Close_Topmost_Window,
        Close_All_Floating_Windows,
        Cancel_Construction_Mode,
        Pause_Unpause_Game,
        Zoom_View_Out,
        Zoom_View_In,
        Rotate_View,
        Rotate_Construction_Object,
        Toggle_Underground_View,
        Toggle_Hide_Foreground_Tracks,
        Toggle_Hide_Foreground_Scenery,
        Toggle_Height_Marks_on_Land,
        Toggle_Height_Marks_on_Tracks,
        Toggle_Dir_Arrows_on_Tracks,
        Adjust_Land,
        Adjust_Water,
        Plant_Trees,
        Bulldoze_Area,
        Build_Tracks,
        Build_Roads,
        Build_Airports,
        Build_Ship_Ports,
        Build_New_Vehicles,
        Show_Vehicles_List,
        Show_Stations_List,
        Show_Towns_List,
        Show_Industries_List,
        Show_Map,
        Show_Companies_List,
        Show_Company_Information,
        Show_Finances,
        Show_Announcements_List,
        screenshot,
        toggle_Last_Announcement,
        Send_Message
    };

    void execute(Shortcut s);
}