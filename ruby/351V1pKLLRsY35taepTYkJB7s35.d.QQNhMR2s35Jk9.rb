
        
              def self.example_code
        [
          'create_keychain(
            name: 'KeychainName',
            default_keychain: true,
            unlock: true,
            timeout: 3600,
            lock_when_sleeps: true
          )'
        ]
      end
    
        class GradleHelper
      # Path to the gradle script
      attr_accessor :gradle_path
    
        def has_all_detectable_values?
      api_key && build_secret && crashlytics_path && emails && schemes
    end
  end
end

    
        def includes_run_script?(string)
      ['Fabric/run', 'Crashlytics/run', 'Fabric.framework/run', 'Crashlytics.framework/run'].any? do |script_path_fragment|
        string.include?(script_path_fragment)
      end
    end
  end
end

    
          it 'gets the correct version number for 'SampleProject_tests'' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_version_number(xcodeproj: '.xcproject', target: 'SampleProject_tests')
        end').runner.execute(:test)
        expect(result).to eq('1.0')
      end
    
      module ClassMethods
    def load_types_in(module_name, my_name = module_name.singularize)
      const_set(:MODULE_NAME, module_name)
      const_set(:BASE_CLASS_NAME, my_name)
      const_set(:TYPES, Dir[Rails.root.join('app', 'models', module_name.underscore, '*.rb')].map { |path| module_name + '::' + File.basename(path, '.rb').camelize })
    end
    
          if args.all? { |arg| arg.is_a?(Symbol) }
        options.assert_valid_keys([:type, :roles, :values, :ace, :cache_response])
      end
    
      def tumblr_consumer_key
    ENV['TUMBLR_OAUTH_KEY']
  end
    
          respond_with do |format|
        format.html { redirect_to admin_pods_path }
        format.json { render json: PodPresenter.new(pod).as_json }
      end
    end
  end
end

    
          # Inspired by https://github.com/nov/openid_connect_sample/blob/master/app/controllers/connect/clients_controller.rb#L24
      def create
        registrar = OpenIDConnect::Client::Registrar.new(request.url, params)
        client = Api::OpenidConnect::OAuthApplication.register! registrar
        render json: client.as_json(root: false)
      end