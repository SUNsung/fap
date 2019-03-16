
        
        struct BlamerBundle;
class C_BLOB_IT;
class PAGE_RES;
class PAGE_RES_IT;
class WERD;
struct Pix;
struct Pta;
    
    // The parameters editor enables the user to edit all the parameters used within
// tesseract. It can be invoked on its own, but is supposed to be invoked by
// the program editor.
class ParamsEditor : public SVEventHandler {
 public:
  // Integrate the parameters editor as popupmenu into the existing scrollview
  // window (usually the pg editor). If sv == null, create a new empty
  // empty window and attach the parameter editor to that window (ugly).
  explicit ParamsEditor(tesseract::Tesseract*, ScrollView* sv = nullptr);
    }
    
      // Construct the cartesian product of the best_choices of word(1) and word2.
  WERD_CHOICE_LIST joined_choices;
  WERD_CHOICE_IT jc_it(&joined_choices);
  WERD_CHOICE_IT bc1_it(&word->best_choices);
  WERD_CHOICE_IT bc2_it(&word2->best_choices);
  int num_word1_choices = word->best_choices.length();
  int total_joined_choices = num_word1_choices;
  // Nota Bene: For the main loop here, we operate only on the 2nd and greater
  // word2 choices, and put them in the joined_choices list. The 1st word2
  // choice gets added to the original word1 choices in-place after we have
  // finished with them.
  int bc2_index = 1;
  for (bc2_it.forward(); !bc2_it.at_first(); bc2_it.forward(), ++bc2_index) {
    if (total_joined_choices >= kTooManyAltChoices &&
        bc2_index > kAltsPerPiece)
      break;
    int bc1_index = 0;
    for (bc1_it.move_to_first(); bc1_index < num_word1_choices;
        ++bc1_index, bc1_it.forward()) {
      if (total_joined_choices >= kTooManyAltChoices &&
          bc1_index > kAltsPerPiece)
        break;
      WERD_CHOICE *wc = new WERD_CHOICE(*bc1_it.data());
      *wc += *bc2_it.data();
      jc_it.add_after_then_move(wc);
      ++total_joined_choices;
    }
  }
  // Now that we've filled in as many alternates as we want, paste the best
  // choice for word2 onto the original word alt_choices.
  bc1_it.move_to_first();
  bc2_it.move_to_first();
  for (bc1_it.mark_cycle_pt(); !bc1_it.cycled_list(); bc1_it.forward()) {
    *bc1_it.data() += *bc2_it.data();
  }
  bc1_it.move_to_last();
  bc1_it.add_list_after(&joined_choices);
    
      // Deletes the box with the given index, and shuffles up the rest.
  // Recomputes the bounding box.
  void DeleteBox(int index);
    
    void Speed::setInnerAction(ActionInterval *action)
{
    if (_innerAction != action)
    {
        CC_SAFE_RELEASE(_innerAction);
        _innerAction = action;
        CC_SAFE_RETAIN(_innerAction);
    }
}
    
    #endif // __ACTIONS_CCACTION_H__

    
        if(needsTranslation)
    {
        Mat4 t;
        Mat4::createTranslation(-anchorPoint.x, -anchorPoint.y, 0, &t);
        mv = mv * t;
    }
    
    /** @class CatmullRomTo
 * An action that moves the target with a CatmullRom curve to a destination point.
 * A Catmull Rom is a Cardinal Spline with a tension of 0.5.
 * http://en.wikipedia.org/wiki/Cubic_Hermite_spline#Catmull.E2.80.93Rom_spline
 * @ingroup Actions
 */
class CC_DLL CatmullRomTo : public CardinalSplineTo
{
public:
    }
    
        //
    // Overrides
    //
    virtual RotateTo* clone() const override;
    virtual RotateTo* reverse() const override;
    virtual void startWithTarget(Node *target) override;
    /**
     * @param time In seconds.
     */
    virtual void update(float time) override;
    
CC_CONSTRUCTOR_ACCESS:
    RotateTo();
    virtual ~RotateTo() {}
    
    Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the 'Software'), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
    
    
    {    /**
     * Create an polygoninfo from the data of another Polygoninfo
     * @param other     another PolygonInfo to be copied
     * @return duplicate of the other PolygonInfo
     */
    PolygonInfo(const PolygonInfo& other);
    //  end of creators group
    /// @}
    
    /**
     * Copy the member of the other PolygonInfo
     * @param other     another PolygonInfo to be copied
     */
    PolygonInfo& operator= (const PolygonInfo &other);
    ~PolygonInfo();
    
    /**
     * set the data to be a pointer to a quad
     * the member verts will not be released when this PolygonInfo destructs
     * as the verts memory are managed by other objects
     * @param quad  a pointer to the V3F_C4B_T2F_Quad object
     */
    void setQuad(V3F_C4B_T2F_Quad *quad);