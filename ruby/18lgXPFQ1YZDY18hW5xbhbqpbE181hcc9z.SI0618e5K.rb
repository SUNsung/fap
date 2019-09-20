
        
            if successfully_sent?(resource)
      respond_with({}, location: after_resending_confirmation_instructions_path_for(resource_name))
    else
      respond_with(resource)
    end
  end
    
      # POST /resource/sign_in
  def create
    self.resource = warden.authenticate!(auth_options)
    set_flash_message!(:notice, :signed_in)
    sign_in(resource_name, resource)
    yield resource if block_given?
    respond_with resource, location: after_sign_in_path_for(resource)
  end
    
      def unknown_action!(msg)
    logger.debug '[Devise] #{msg}' if logger
    raise AbstractController::ActionNotFound, msg
  end
    
            users.any?
      end
    
        # The hook which is called inside devise.
    # So your ORM can include devise compatibility stuff.
    def devise_modules_hook!
      yield
    end
  end
end
    
        def unescapePredicate(cc)
      if (isAlphaNumeric(cc));
        return true
      end
      # !
      if (cc == 33);
        return true
      end
      # '()*
      if (39 <= cc && cc <= 42);
        return true
      end
      # -.
      if (45 <= cc && cc <= 46);
        return true
      end
      # _
      if (cc == 95);
        return true
      end
      # ~
      if (cc == 126);
        return true
      end
    
          def string_to_code(string)
        # sha bytes
        b = [Digest::SHA1.hexdigest(string)[0, 20]].pack('H*').bytes.to_a
        # Thanks donpark's IdenticonUtil.java for this.
        # Match the following Java code
        # ((b[0] & 0xFF) << 24) | ((b[1] & 0xFF) << 16) |
        #	 ((b[2] & 0xFF) << 8) | (b[3] & 0xFF)
    
          def has_sidebar
        if @sidebar
          @sidebar.formatted_data.strip.empty? ? false : true
        else
          @sidebar = (@page.sidebar || false)
          !!@sidebar
        end
      end
    
      test 'remove page extentions' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'page', view.remove_page_extentions('page.wiki')
    assert_equal 'page-wiki', view.remove_page_extentions('page-wiki.md')
    assert_equal 'file.any_extention', view.remove_page_extentions('file.any_extention')
  end