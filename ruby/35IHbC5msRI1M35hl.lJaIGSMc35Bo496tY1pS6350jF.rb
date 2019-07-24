
        
          def test_default_locale_template_is_used_when_locale_is_missing
    I18n.locale = :dk
    get :hello_world
    assert_equal 'Hello World', @response.body
  end
    
    LogStash::Bundler.setup!
    
            PluginManager.ui.debug('Looking if package named: #{plugin_name} exists at #{uri}')