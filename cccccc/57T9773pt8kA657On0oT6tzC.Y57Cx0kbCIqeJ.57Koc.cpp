
        
        
    {
    {} // namespace test
} // namespace c10d

    
    namespace caffe2 {
    }
    
        float r, zenith, azimuth;
    this->sphericalRadius(&r, &zenith, &azimuth);
    if( std::isnan(_radius) )
        _radius = r;
    if( std::isnan(_angleZ) )
        _angleZ = (float)CC_RADIANS_TO_DEGREES(zenith);
    if( std::isnan(_angleX) )
        _angleX = (float)CC_RADIANS_TO_DEGREES(azimuth);
    
    void Ripple3D::update(float time)
{
    int i, j;
    }
    
    
    {    return ret;
}
    
        /** @deprecated Use getNumberOfRunningActionsInTarget() instead.
     */
    CC_DEPRECATED_ATTRIBUTE ssize_t numberOfRunningActionsInTarget(Node *target) const { return getNumberOfRunningActionsInTarget(target); }
    
        /** 
     * @brief Initializes the action with the number columns and the duration.
     * @param duration Specify the duration of the SplitCols action. It's a value in seconds.
     * @param cols Specify the columns count should be split.
     * @return If the creation success, return true; otherwise, return false.
     */
    bool initWithDuration(float duration, unsigned int cols);
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    AnimationCache* AnimationCache::s_sharedAnimationCache = nullptr;
    
        /** Adds a Animation with a name.
     *
     * @param animation An animation.
     * @param name The name of animation.
     */
    void addAnimation(Animation *animation, const std::string& name);
    
    NS_CC_END
    
    void PolygonInfo::setTriangles(const TrianglesCommand::Triangles& other)
{
    this->releaseVertsAndIndices();
    _isVertsOwner = false;
    
    this->triangles.vertCount = other.vertCount;
    this->triangles.indexCount = other.indexCount;
    this->triangles.verts = other.verts;
    this->triangles.indices = other.indices;
}