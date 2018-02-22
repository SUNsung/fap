
        
        QueryData genKernelIntegrity(QueryContext &context) {
  QueryData results;
  Row r;
  std::string content;
  std::string text_segment_hash;
  std::string syscall_addr_modified;
    }
    
     public:
  /**
   * @brief The std::thread entrypoint.
   *
   * This is used by the Dispatcher only.
   */
  virtual void run() final;
    
    
    {/**
 * @brief Read the enrollment secret from disk.
 *
 * We suspect multiple enrollment types may require an apriori, and enterprise
 * shared, secret. Use of this enroll or deployment secret is an optional choice
 * made by the enroll plugin type.
 *
 * @return enroll_secret The trimmed content read from FLAGS_enroll_secret_path.
 */
const std::string getEnrollSecret();
}

    
    
    {
    { private:
  FRIEND_TEST(PermissionsTests, test_explicit_drop);
  FRIEND_TEST(PermissionsTests, test_path_drop);
  FRIEND_TEST(PermissionsTests, test_nobody_drop);
};
} // namespace osquery

    
      /// Get the 'active' plugin, return success with the active plugin name.
  const std::string& getActive() const {
    return active_;
  }
    
      /**
   * @brief A constructor which can be used to concisely express the status of
   * an operation.
   *
   * @param c a status code. The idiom is that a zero status code indicates a
   * successful operation and a non-zero status code indicates a failed
   * operation.
   * @param m a message indicating some extra detail regarding the operation.
   * If all operations were successful, this message should be 'OK'.
   * Otherwise, it doesn't matter what the string is, as long as both the
   * setter and caller agree.
   */
  Status(int c, std::string m) : code_(c), message_(std::move(m)) {}
    
      // Running status of the carver
  Status status_;
    
    
    {/// Clear decorations for a source when it updates.
void clearDecorations(const std::string& source);
}

    
    TEST_F(ViewsConfigParserPluginTests, test_update_view) {
  Config c;
  std::vector<std::string> old_views_vec;
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  old_views_vec.clear();
  auto s = c.update(getTestConfigMap('view_test2.conf'));
  EXPECT_TRUE(s.ok());
  scanDatabaseKeys(kQueries, old_views_vec, 'config_views.');
  EXPECT_EQ(old_views_vec.size(), 1U);
  std::string query;
  getDatabaseValue(kQueries, 'config_views.kernel_hashes_new', query);
  EXPECT_EQ(query,
            'select hash.path as binary, version, hash.sha256 as SHA256, '
            'hash.sha1 as SHA1, hash.md5 as MD5 from (select path || '
            ''/Contents/MacOS/' as directory, name, version from '
            'kernel_extensions) join hash using (directory)');
    }
    
    
    {    // Prevent the refresh thread from starting.
    FLAGS_config_refresh = 0;
  }
    
    extern JSClass  *jsb_cocos2d_Physics3DPointToPointConstraint_class;
extern JSObject *jsb_cocos2d_Physics3DPointToPointConstraint_prototype;
    
    
    
    
    
    
    {    tolua_beginmodule(tolua_S,'PhysicsContactPreSolve');
        tolua_function(tolua_S,'getFriction',lua_cocos2dx_physics_PhysicsContactPreSolve_getFriction);
        tolua_function(tolua_S,'getRestitution',lua_cocos2dx_physics_PhysicsContactPreSolve_getRestitution);
        tolua_function(tolua_S,'setFriction',lua_cocos2dx_physics_PhysicsContactPreSolve_setFriction);
        tolua_function(tolua_S,'ignore',lua_cocos2dx_physics_PhysicsContactPreSolve_ignore);
        tolua_function(tolua_S,'getSurfaceVelocity',lua_cocos2dx_physics_PhysicsContactPreSolve_getSurfaceVelocity);
        tolua_function(tolua_S,'setSurfaceVelocity',lua_cocos2dx_physics_PhysicsContactPreSolve_setSurfaceVelocity);
        tolua_function(tolua_S,'setRestitution',lua_cocos2dx_physics_PhysicsContactPreSolve_setRestitution);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(cocos2d::PhysicsContactPreSolve).name();
    g_luaType[typeName] = 'cc.PhysicsContactPreSolve';
    g_typeCast['PhysicsContactPreSolve'] = 'cc.PhysicsContactPreSolve';
    return 1;
}
    
    
    {    p2 = p1 + k_axisScale * xf.q.GetYAxis();
    DrawSegment(p1,p2,b2Color(0,1,0));
}
    
    
    {	b2Vec2 viewCenter;
	float32 hz;
	int32 velocityIterations;
	int32 positionIterations;
	int32 drawShapes;
	int32 drawJoints;
	int32 drawAABBs;
	int32 drawContactPoints;
	int32 drawContactNormals;
	int32 drawContactImpulse;
	int32 drawFrictionImpulse;
	int32 drawCOMs;
	int32 drawStats;
	int32 drawProfile;
	int32 enableWarmStarting;
	int32 enableContinuous;
	int32 enableSubStepping;
	int32 enableSleep;
	int32 pause;
	int32 singleStep;
};