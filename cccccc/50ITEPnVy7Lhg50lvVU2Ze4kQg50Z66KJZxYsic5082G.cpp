
        
        			for (int i = 0; i < mesh_merge.faces.size(); i++) {
				if (mesh_merge.faces[i].inside)
					continue;
				for (int j = 0; j < 3; j++) {
					result.faces.write[outside_count].vertices[j] = mesh_merge.points[mesh_merge.faces[i].points[j]];
					result.faces.write[outside_count].uvs[j] = mesh_merge.faces[i].uvs[j];
				}
    }
    
    ResourceImporterOGGVorbis::ResourceImporterOGGVorbis() {
}

    
    ///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
    
    		if (mb->get_button_index() != 1)
			return;
    
    protected:
	void _notification(int p_what);
	static void _bind_methods();
    
    	img.instance();
	img->create(w, h, false, Image::FORMAT_RGF, texdata);
    
    	EditorFileDialog *file;
	EditorNode *editor;
    
    	void set(const Variant &p_index, const Variant &p_value, bool *r_valid = NULL);
	Variant get(const Variant &p_index, bool *r_valid = NULL) const;
	bool in(const Variant &p_index, bool *r_valid = NULL) const;
    
    	glGetProgramiv(v.id, GL_LINK_STATUS, &status);
	if (status == GL_FALSE) {
		GLsizei iloglen;
		glGetProgramiv(v.id, GL_INFO_LOG_LENGTH, &iloglen);
    }
    
    					_draw_generic(GL_TRIANGLE_STRIP, pline->triangles.size(), pline->triangles.ptr(), NULL, pline->triangle_colors.ptr(), pline->triangle_colors.size() == 1);
#ifdef GLES_OVER_GL
					glEnable(GL_LINE_SMOOTH);
					if (pline->multiline) {
						//needs to be different
					} else {
						_draw_generic(GL_LINE_LOOP, pline->lines.size(), pline->lines.ptr(), NULL, pline->line_colors.ptr(), pline->line_colors.size() == 1);
					}
					glDisable(GL_LINE_SMOOTH);
#endif
				} else {
    
    /* NurbsDisplay */
/*      GLU_FILL */
#define GLU_OUTLINE_POLYGON                100240
#define GLU_OUTLINE_PATCH                  100241
    
      // Construct a new PageAttrs object by merging a dictionary
  // (of type Pages or Page) into another PageAttrs object.  If
  // <attrs> is NULL, uses defaults.
  PageAttrs(PageAttrs *attrs, Dict *dict);
    
    
    {  return -1;
}
    
    //========================================================================
//
// Modified under the Poppler project - http://poppler.freedesktop.org
//
// All changes made under the Poppler project to this file are licensed
// under GPL version 2 or later
//
// Copyright (C) 2009 Carlos Garcia Campos <carlosgc@gnome.org>
// Copyright (C) 2010 Albert Astals Cid <aacid@kde.org>
// Copyright (C) 2011 William Bader <williambader@hotmail.com>
//
// To see a description of the changes please see the Changelog file that
// came with your tarball or type make ChangeLog if you are building from git
//
//========================================================================
    
    constexpr uint8_t kMaxResolvedKind = 30;
    
    bool RangeFallbackExtentAllocator::
extent_commit(extent_hooks_t* extent_hooks, void* addr, size_t size,
              size_t offset, size_t length, unsigned arena_ind) {
  auto extAlloc = GetByArenaId<RangeFallbackExtentAllocator>(arena_ind);
  if (extAlloc->inRange(addr)) return false;
  auto fallback_hooks = extAlloc->m_fallback_hooks;
  return fallback_hooks->commit(extent_hooks, addr, size,
                                offset, length, arena_ind);
}
    
    
    {  /*
   * address to teleport the return value after destroying this actrec.
   */
  TypedValue* retSlot() {
    return reinterpret_cast<TypedValue*>(this + 1) - 1;
  }
};
    
        auto data = get_rval_property(object, model->u_element->name.c_str());
    bool propExists = data && data.type() != KindOfUninit;
    if (propExists) {
      if (data.type() == KindOfNull &&
          !model->u_element->nillable && model->min_occurs > 0 && !strict) {
        return 0;
      }
      assertx(data);
      enc = model->u_element->encode;
      if ((model->max_occurs == -1 || model->max_occurs > 1) &&
          isArrayType(data.type()) &&
          data.val().parr->isVectorData()) {
        for (ArrayIter iter(data.val().parr); iter; ++iter) {
          Variant val = iter.second();
          if (val.isNull() && model->u_element->nillable) {
            property = xmlNewNode(nullptr, BAD_CAST('BOGUS'));
            xmlAddChild(node, property);
            set_xsi_nil(property);
          } else {
            property = master_to_xml(enc, val, style, node);
            if (property->children && property->children->content &&
                !model->u_element->fixed.empty() &&
                model->u_element->fixed != (char*)property->children->content) {
              throw SoapException('Encoding: Element '%s' has fixed value '
                                  ''%s' (value '%s' is not allowed)',
                                  model->u_element->name.c_str(),
                                  model->u_element->fixed.c_str(),
                                  property->children->content);
            }
          }
          xmlNodeSetName(property, BAD_CAST(model->u_element->name.c_str()));
          if (style == SOAP_LITERAL &&
              !model->u_element->namens.empty() &&
              model->u_element->form == XSD_FORM_QUALIFIED) {
            xmlNsPtr nsp = encode_add_ns(property,
                                         model->u_element->namens.c_str());
            xmlSetNs(property, nsp);
          }
        }
      } else {
        if (data.type() == KindOfNull && model->u_element->nillable) {
          property = xmlNewNode(nullptr, BAD_CAST('BOGUS'));
          xmlAddChild(node, property);
          set_xsi_nil(property);
        } else if (data.type() == KindOfNull && model->min_occurs == 0) {
          return 1;
        } else {
          property = master_to_xml(enc, data, style, node);
          if (property->children && property->children->content &&
              !model->u_element->fixed.empty() &&
              model->u_element->fixed != (char*)property->children->content) {
            throw SoapException('Encoding: Element '%s' has fixed value '%s' '
                                '(value '%s' is not allowed)',
                                model->u_element->name.c_str(),
                                model->u_element->fixed.c_str(),
                                property->children->content);
          }
        }
        xmlNodeSetName(property, BAD_CAST(model->u_element->name.c_str()));
        if (style == SOAP_LITERAL &&
            !model->u_element->namens.empty() &&
            model->u_element->form == XSD_FORM_QUALIFIED) {
          xmlNsPtr nsp = encode_add_ns(property,
                                       model->u_element->namens.c_str());
          xmlSetNs(property, nsp);
        }
      }
      return 1;
    } else if (strict && model->u_element->nillable && model->min_occurs > 0) {
      property = xmlNewNode(nullptr, BAD_CAST(model->u_element->name.c_str()));
      xmlAddChild(node, property);
      set_xsi_nil(property);
      if (style == SOAP_LITERAL &&
          model->u_element->form == XSD_FORM_QUALIFIED) {
        xmlNsPtr nsp = encode_add_ns(property,
                                     model->u_element->namens.c_str());
        xmlSetNs(property, nsp);
      }
      return 1;
    } else if (model->min_occurs == 0) {
      return 2;
    } else {
      if (strict) {
        throw SoapException('Encoding: object hasn't '%s' property',
                            model->u_element->name.c_str());
      }
      return 0;
    }
    break;
  }
  case XSD_CONTENT_ANY: {
    encodePtr enc;
    
    
    {
    {
    {        return Variant(std::move(set_ret));
      } else {
        DArrayInit init(size);
        for (uint32_t s = 0; s < size; ++s) {
          Variant key = binary_deserialize(type, transport, elemspec);
          set_with_intish_key_cast(init, key, true);
        }
        return init.toVariant();
      }
    }
  };
    
    #include <sstream>
#include <type_traits>
    
    /*
 * Metadata about a potentially-foldable load Vinstr.
 */
struct FoldableLoadInfo {
  /*
   * Source memory location of the load.
   */
  const Vptr* operand;
  /*
   * Index into the instruction stream.
   *
   * Note that this makes FoldableLoadInfo block-context-sensitive.
   */
  size_t idx;
  /*
   * Whether we need to check for interfering writes to the same location.
   */
  bool check_writes;
};
    
    
    {  env.meta.literalsToPool.swap(notEmitted);
}
    
    inline void CSLoader::reconstructNestNode(cocos2d::Node * node)
{
    /* To reconstruct nest node as WidgetCallBackHandlerProtocol. */
    auto callbackHandler = dynamic_cast<WidgetCallBackHandlerProtocol *>(node);
    if (callbackHandler)
    {
        _callbackHandlers.popBack();
        if (_callbackHandlers.empty())
        {
            _rootNode = nullptr;
            CCLOG('Call back handler container has been clear.');
        }
        else
        {
            _rootNode = _callbackHandlers.back();
            CCLOG('after pop back _rootNode name = %s', _rootNode->getName().c_str());
        }
    }
}
    
    cocos2d::Mat4 convertbtTransformToMat4( const btTransform &btTrans )
{
    cocos2d::Mat4 mat;
    const auto& rot = btTrans.getBasis();
    auto row = rot.getRow(0);
    mat.m[0] = row.getX();
    mat.m[4] = row.getY();
    mat.m[8] = row.getZ();
    row = rot.getRow(1);
    mat.m[1] = row.getX();
    mat.m[5] = row.getY();
    mat.m[9] = row.getZ();
    row = rot.getRow(2);
    mat.m[2] = row.getX();
    mat.m[6] = row.getY();
    mat.m[10] = row.getZ();
    
    row = btTrans.getOrigin();
    mat.m[12] = row.getX();
    mat.m[13] = row.getY();
    mat.m[14] = row.getZ();
    return mat;
}
    
    bool UIListViewTest_Horizontal::init()
{
    if (UIScene::init())
    {
        Size widgetSize = _widget->getContentSize();
        
        _displayValueLabel = Text::create('There are 50 items, but we only create 5 templates',
                                          'fonts/Marker Felt.ttf',
                                          20);
        
        _displayValueLabel->setAnchorPoint(Vec2(0.5f, -1.0f));
        _displayValueLabel->setPosition(Vec2(widgetSize.width / 2.0f,
                                              widgetSize.height / 2.0f
                                             + _displayValueLabel->getContentSize().height * 2 + 20));
        
        _uiLayer->addChild(_displayValueLabel);
        
        
        Text* alert = Text::create('ListView horizontal', 'fonts/Marker Felt.ttf', 30);
        alert->setColor(Color3B(159, 168, 176));
        alert->setPosition(Vec2(widgetSize.width / 2.0f,
                                widgetSize.height / 2.0f - alert->getContentSize().height * 3.075f));
        _uiLayer->addChild(alert);
        
        Layout* root = static_cast<Layout*>(_uiLayer->getChildByTag(81));
        
        Layout* background = static_cast<Layout*>(root->getChildByName('background_Panel'));
        Size backgroundSize = background->getContentSize();
        
        
        // create listview  data
        //The data is usually fetch from the server
        for (int i = 0; i < _totalCount; ++i)
        {
            std::string ccstr = StringUtils::format('listview_item_%d', i);
            _array.push_back(ccstr);
        }
        
        
        // Create the list view ex
        _listView = ListView::create();
        // set list view ex direction
        _listView->setDirection(ui::ScrollView::Direction::HORIZONTAL);
        _listView->setTouchEnabled(true);
        _listView->setBounceEnabled(true);
        _listView->setBackGroundImage('cocosui/green_edit.png');
        _listView->setBackGroundImageScale9Enabled(true);
        _listView->setContentSize(Size(240, 130));
        _listView->setPosition(Vec2((widgetSize.width - backgroundSize.width) / 2.0f +
                                    (backgroundSize.width - _listView->getContentSize().width) / 2.0f,
                                    (widgetSize.height - backgroundSize.height) / 2.0f +
                                    (backgroundSize.height - _listView->getContentSize().height) / 2.0f));
        _listView->addEventListener((ui::ListView::ccListViewCallback)CC_CALLBACK_2(UIListViewTest_Horizontal::selectedItemEvent, this));
		_listView->setScrollBarPositionFromCorner(Vec2(7, 7));
        _uiLayer->addChild(_listView);
        
        
        // create model
        Button* default_button = Button::create('cocosui/backtotoppressed.png',
                                                'cocosui/backtotopnormal.png');
        default_button->setName('Title Button');
        
        Layout *default_item = Layout::create();
        default_item->setTouchEnabled(true);
        default_item->setContentSize(default_button->getContentSize());
        default_button->setPosition(Vec2(default_item->getContentSize().width / 2.0f,
                                         default_item->getContentSize().height / 2.0f));
        default_item->addChild(default_button);
        
        // set model
        _listView->setItemModel(default_item);
        
        // set all items layout gravity
        _listView->setGravity(ListView::Gravity::CENTER_VERTICAL);
        
        //initial the data
        for (int i = 0; i < _totalCount; ++i) {
            if (i < _spawnCount) {
                Widget* item = default_item->clone();
                item->setTag(i);
                Button* btn = (Button*)item->getChildByName('Title Button');
                btn->setTitleText(_array.at(i));
                _listView->pushBackCustomItem(item);
            }
        }
      
        // set items margin
        float spacing = 4;
        _listView->setItemsMargin(spacing);
        _itemTemplateWidth = default_item->getContentSize().width;
        this->_reuseItemOffset = (_itemTemplateWidth + spacing) * _spawnCount;
        
        _listView->forceDoLayout();
        float totalWidth = _itemTemplateWidth * _totalCount + (_totalCount - 1) * 4;
        _listView->getInnerContainer()->setContentSize(Size(totalWidth, _listView->getInnerContainerSize().height));
        
        //update listview data
        this->scheduleUpdate();
        
        return true;
    }
    
    return false;
}
    
            // Parameter constructor
        RefPtr<__String> ref2(__String::create('Hello'));
        CC_ASSERT(strcmp('Hello', ref2->getCString()) == 0);
        CC_ASSERT(2 == ref2->getReferenceCount());