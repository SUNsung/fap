
        
        namespace caffe2 {
    }
    
    		m_pafrgbaSource = nullptr;
    
    std::ostream& operator <<(std::ostream &s, const IntPoint &p);
std::ostream& operator <<(std::ostream &s, const Path &p);
std::ostream& operator <<(std::ostream &s, const Paths &p);
    
       - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
    
        // create values of different floating-point types
    json::number_float_t v_ok = 3.141592653589793;
    json::number_float_t v_nan = NAN;
    json::number_float_t v_infinity = INFINITY;
    
        // add values
    auto res1 = object.emplace('three', 3);
    null.emplace('A', 'a');
    null.emplace('B', 'b');
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    /**
 * @addtogroup actions
 * @{
 */
    }
    
        //
    // Overrides
    //
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    virtual ActionInstant* reverse() const override;
    virtual Show* clone() const override;
    
    // FIXME: Passing 'const O *' instead of 'const O&' because HASH_FIND_IT requires the address of a pointer
// and, it is not possible to get the address of a reference
ssize_t ActionManager::getNumberOfRunningActionsInTarget(const Node *target) const
{
    tHashElement *element = nullptr;
    HASH_FIND_PTR(_targets, &target, element);
    if (element)
    {
        return element->actions ? element->actions->num : 0;
    }
    }
    
    NS_CC_END
    
    
    {    for (auto& animFrame : _frames)
    {
        _totalDelayUnits += animFrame->getDelayUnits();
    }
    return true;
}
    
    #endif // __CCATLAS_NODE_H__
    
    
    {    auto end = &verts[count];
    for(auto i = verts; i != end; ++i)
    {
        // for every point, offset with the center point
        float u = (i->vertices.x*_scaleFactor + rect.origin.x) / texWidth;
        float v = (rect.origin.y+rect.size.height - i->vertices.y*_scaleFactor) / texHeight;
        i->texCoords.u = u;
        i->texCoords.v = v;
    }
}