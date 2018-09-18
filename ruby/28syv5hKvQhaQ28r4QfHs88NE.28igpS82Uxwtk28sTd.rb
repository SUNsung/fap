
        
              def delete_tester_from_app(app_id: nil, tester_id: nil)
        assert_required_params(__method__, binding)
        url = 'providers/#{team_id}/apps/#{app_id}/testers/#{tester_id}'
        response = request(:delete, url)
        handle_response(response)
      end
    
              # We disable 'scaling' for this device type / language combination
          # We only set this, if we actually successfully uploaded a new screenshot
          # for this device / language combination
          # if this value is not set, iTC will fallback to another device type for screenshots
          language_details = raw_data_details.find { |d| d['language'] == language }['displayFamilies']['value']
          device_language_details = language_details.find { |display_family| display_family['name'] == device }
          scaled_key = is_messages ? 'messagesScaled' : 'scaled'
          device_language_details[scaled_key]['value'] = false
    
          it 'edit version' do
        expect(app.edit_version.url).to eq('https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/ng/app/#{app.apple_id}/#{app.platform}/versioninfo/')
      end
    end
    
        def itc_stub_build_details
      stub_request(:get, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/buildHistory?platform=ios').
        to_return(status: 200, body: itc_read_fixture_file('build_history.json'), headers: { 'Content-Type' => 'application/json' })
      stub_request(:get, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/trains/2.0.1/buildHistory?platform=ios').
        to_return(status: 200, body: itc_read_fixture_file('build_history_for_train.json'), headers: { 'Content-Type' => 'application/json' })
      stub_request(:get, 'https://appstoreconnect.apple.com/WebObjects/iTunesConnect.woa/ra/apps/898536088/platforms/ios/trains/2.0.1/builds/4/details').
        to_return(status: 200, body: itc_read_fixture_file('build_details.json'), headers: { 'Content-Type' => 'application/json' })
    end
    
            @scan = Scan::Runner.new
      end
    
            if build
          UI.message('Waiting App Store Connect processing for build #{build.train_version} (#{build.build_version})... this might take a while...')
        else
          UI.message('Waiting App Store Connect processing for build... this might take a while...')
        end
    
    require 'colored'
require 'shellwords'
    
    gemspec
    
      # GET /resource/password/new
  def new
    self.resource = resource_class.new
  end
    
          # Method used by sessions controller to sign out a user. You can overwrite
      # it in your ApplicationController to provide a custom hook for a custom
      # scope. Notice that differently from +after_sign_in_path_for+ this method
      # receives a symbol with the scope, and not the resource.
      #
      # By default it is the root_path.
      def after_sign_out_path_for(resource_or_scope)
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        router_name = Devise.mappings[scope].router_name
        context = router_name ? send(router_name) : self
        context.respond_to?(:root_path) ? context.root_path : '/'
      end
    
          def inherited_hash_writer(name)
        class_eval <<-RUBY, __FILE__, __LINE__ + 1
          def set_#{name}(name, value)
            name = name.tr('_', '-')
            @#{name}s[name] = value unless try_set_#{name}(name, value)
          end
    
        # Set an option for specifying `Encoding.default_external`.
    #
    # @param opts [OptionParser]
    def encoding_option(opts)
      encoding_desc = 'Specify the default encoding for input files.'
      opts.on('-E', '--default-encoding ENCODING', encoding_desc) do |encoding|
        Encoding.default_external = encoding
      end
    end
    
          opts.on('-g', '--debug-info',
              'Emit output that can be used by the FireSass Firebug plugin.') do
        @options[:for_engine][:debug_info] = true
      end
    
        specs = LogStash::PluginManager.all_installed_plugins_gem_specs(gemfile)
    
        def execute
      raise PluginManager::FileNotFoundError, 'Can't file local file #{local_file}' unless ::File.exist?(local_file)
      raise PluginManager::InvalidPackError, 'Invalid format, the pack must be in zip format' unless valid_format?(local_file)