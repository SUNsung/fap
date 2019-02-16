
        
                  add_default_name_and_id_for_value(tag_value, name_and_id)
          options.delete('index')
          options.delete('namespace')
          options['for'] = name_and_id['id'] unless options.key?('for')
    
            # This contains all the command plugins by name, and returns
        # the command class and options. The command class is wrapped
        # in a Proc so that it can be lazy loaded.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        attr_reader :commands
    
        # Get a value by the given key.
    #
    # This will evaluate the block given to `register` and return the
    # resulting value.
    def get(key)
      return nil if !@items.key?(key)
      return @results_cache[key] if @results_cache.key?(key)
      @results_cache[key] = @items[key].call
    end
    alias :[] :get
    
      it 'ignores single-line hashes' do
    expect_no_offenses('{a: 1, b: 2}')
  end
    
        def get_gist_from_web(gist, file)
      gist_url = get_gist_url_for(gist, file)
      data     = get_web_content(gist_url)
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
        flash_messages.each do |key, value|
      flash[key] = value
    end
    respond_to do |wants|
      wants.html { redirect_to url }
      wants.json { render :json => {:redirect_to => url} }
    end
  end
    
        it 'has string keys' do
      expect(hash.keys).to be_include('uid')
    end
    
        it 'includes the origin (escaped) if one is provided' do
      env['omniauth.origin'] = '/origin-example'
      _, head, = *subject.call(env)
      expect(head['Location']).to be_include('&origin=%2Forigin-example')
    end
  end
end

    
        context 'custom paths' do
      it 'uses a custom request_path if one is provided' do
        @options = {:request_path => '/awesome'}
        expect { strategy.call(make_env('/awesome')) }.to raise_error('Request Phase')
      end