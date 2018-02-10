
        
            argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,'invalid arguments in function 'lua_cocos2dx_cocosdenshion_SimpleAudioEngine_pauseBackgroundMusic'', nullptr);
            return 0;
        }
        cobj->pauseBackgroundMusic();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, '%s has wrong number of arguments: %d, was expecting %d \n', 'cc.SimpleAudioEngine:pauseBackgroundMusic',argc, 0);
    return 0;
    
    #if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,'invalid 'cobj' in function 'lua_cocos2dx_physics_PhysicsJointRotarySpring_getStiffness'', nullptr);
        return 0;
    }
#endif
    
        virtual void DrawString(int x, int y, const char* string, ...); 
    
    #endif
