
        
          # Setting the :extname option will control what extension (if any) is appended to the url for assets
  def test_javascript_include_tag
    assert_dom_equal '<script src='/foo.js'></script>',  javascript_include_tag('/foo')
    assert_dom_equal '<script src='/foo'></script>',     javascript_include_tag('/foo', extname: false)
    assert_dom_equal '<script src='/foo.bar'></script>', javascript_include_tag('/foo', extname: '.bar')
  end
    
          def handler_for(object)
        @handlers.detect { |klass, _| klass === object }.last
      end
  end
end
    
        # :delete_all is called on each client since the dependent options is :destroy
    firm.dependent_clients_of_firm.clear
    
      # trivial method for testing Array#to_xml with :methods
  def topic_id
    id
  end
    
        it 'should have a way of getting the service configurations' do
      configs = key.service_configs_for(Spaceship::Portal::Key::MUSIC_KIT_ID)
      expect(configs).to be_instance_of(Array)
      expect(configs.sample).to be_instance_of(Hash)
      expect(configs.first['identifier']).to eq('music.com.snatchev.test')
    end