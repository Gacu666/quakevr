#pragma once

enum class VRMenuOpt
{
    VR_AIMMODE,
    VR_DEADZONE,
    VR_CROSSHAIR,
    VR_CROSSHAIR_DEPTH,
    VR_CROSSHAIR_SIZE,
    VR_CROSSHAIR_ALPHA,
    VR_WORLD_SCALE,
    VR_MOVEMENT_MODE,
    VR_ENABLE_JOYSTICK_TURN,
    VR_SNAP_TURN,
    VR_TURN_SPEED,
    VR_MSAA,
    VR_GUNANGLE,
    VR_FLOOR_OFFSET,
    VR_GUNMODELPITCH,
    VR_GUNMODELSCALE,
    VR_GUNMODELY,
    VR_CROSSHAIRY,
    VR_HUD_SCALE,
    VR_MENU_SCALE,
    VR_GUNYAW,
    VR_GUN_Z_OFFSET,
    VR_SBAR_MODE,
    VR_VIEWKICK,
    VR_MENU_DISTANCE,
    VR_PARTICLES,
    VR_PARTICLE_MULT,

    VR_MAX
};

void M_Menu_VR_f(void);
void M_VR_Draw(void);
void M_VR_Key(int key);
