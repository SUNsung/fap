
        
            def initialize(*args)
      if args.empty?
        super(*Array.new(9))
      elsif args.length == 1 && args.first.is_a?(Hash)
        args.first.assert_valid_keys URI::Generic::COMPONENT
        super(*args.first.values_at(*URI::Generic::COMPONENT))
      else
        super
      end
    end
    
            css('.toplang', '#quickview', '.top').remove
    
          def fetch_public_key_from_json(string, jwt)
        json = JSON.parse(string)
        keys = json['keys']
        public_key = get_key_from_kid(keys, jwt.header['kid'])
        public_key
      end
    
            raise t('error.invalid_stage_name', name: invalid, path: stage_config_path.join('#{invalid}.rb'))
      end
    end
  end
end

    
      tasks_dir = Pathname.new('lib/capistrano/tasks')
  config_dir = Pathname.new('config')
  deploy_dir = config_dir.join('deploy')