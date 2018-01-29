
        
              def convert_key(key)
        key.is_a?(Symbol) ? key.to_s : key
      end
    end
  end
end

    
            raise t('error.invalid_stage_name', name: invalid, path: stage_config_path.join('#{invalid}.rb'))
      end
    end
  end
end

    
      # Convenience to access the current SSHKit backend outside of an `on` block.
  def backend
    SSHKit::Backend.current
  end
end

    
        # @abstract
    #
    # Identify the SHA of the commit that will be deployed.  This will most likely involve SshKit's capture method.
    #
    # @return void
    #
    def fetch_revision
      raise NotImplementedError, 'Your SCM strategy module should provide a #fetch_revision method'
    end
  end
end

    
          def encrypt(value)
        options[:encryptor].hexdigest value.to_s
      end
    
        it 'leaves normal params untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['foo']]]
      end
      get '/', :foo => 'bar'
      expect(body).to eq('bar')
    end
    
      %w(GET HEAD).each do |method|
    it 'accepts #{method} requests with non-whitelisted Origin' do
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://malicious.com')).to be_ok
    end
  end
    
    
  it 'should allow changing the nosniff-mode off' do
    mock_app do
      use Rack::Protection::XSSHeader, :nosniff => false
      run DummyApp
    end