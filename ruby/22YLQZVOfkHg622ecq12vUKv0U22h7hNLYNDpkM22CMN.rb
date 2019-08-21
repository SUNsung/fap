
        
              alias generic_find_matching_tag find_matching_tag
    
              resource 'setuptools' do
          ^^^^^^^^^^^^^^^^^^^^^ Formulae using virtualenvs do not need a `setuptools` resource.
            url 'https://foo.com/foo.tar.gz'
            sha256 'db0904a28253cfe53e7dedc765c71596f3c53bb8a866ae50123320ec1a7b73fd'
          end
    
        return false if args[:before] && OS::Mac.version >= args[:before]
    
        it 'doesn't adds the dependency without OS version requirements' do
      spec.uses_from_macos('foo')
      spec.uses_from_macos('bar' => :head)
    
          print caveats
      fetch
      uninstall_existing_cask if reinstall?
    
        expect do
      described_class.run('local-transmission', 'local-caffeine')
    end.to output('#{transmission_location}\n#{caffeine_location}\n').to_stdout
  end
    
        gz.getc.should == '1'
    gz.getc.should == '2'
    gz.getc.should == '3'
    gz.getc.should == '4'
    gz.getc.should == '5'
  end
    
    end

    
          alias react deny
    
        it 'Reads referrer from Host header when Referer header is missing' do
      env = {'HTTP_HOST' => 'foo.com'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
        it 'denies requests with duplicate session cookies' do
      get '/', {}, 'HTTP_COOKIE' => 'rack.session=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).not_to be_ok
    end
    
      def framework_major_version
    framework_version.split('.').first.to_i
  end
end
World(RailsCommandHelpers)

    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end