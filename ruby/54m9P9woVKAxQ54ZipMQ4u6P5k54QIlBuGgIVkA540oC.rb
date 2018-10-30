
        
          context 'with a user' do
    let(:user) { Fabricate(:user) }
    
          Dir.chdir(FastlaneCore::FastlaneFolder.path || Dir.pwd) do # context: fastlane subfolder
        # create nice path that we want to print in case of some problem
        relative_path = path.nil? ? '(eval)' : Pathname.new(path).relative_path_from(Pathname.new(Dir.pwd)).to_s
    
        def run(action_named: nil, action_class_ref: nil, parameter_map: nil)
      action_return = runner.execute_action(action_named, action_class_ref, [parameter_map], custom_dir: '.')
      return action_return
    end
    
          it 'adds docset_atom_filename param to command' do
        result = Fastlane::FastFile.new.parse('lane :test do
          appledoc(
            project_name: 'Project Name',
            project_company: 'Company',
            input: 'input/dir',
            docset_atom_filename: 'DocSet atom feed filename'
          )
        end').runner.execute(:test)
    
          it 'handles the exclude_dirs parameter with a single element correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', exclude_dirs: ['.bundle'])
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --exclude-dir .bundle')
      end
    
          it 'works with certificate and password that contain spaces, special chars, or '\'' do
        cert_name = '\' test \'.cer'
        keychain = '\' test \'.keychain'
        password = '\'test pa$$word\''
    
        # wrap in double quotes if contains space
    if str =~ /\s/
      # double quotes have to be doubled if will be quoted
      str.gsub!(''', '''')
      return ''' + str + '''
    else
      return str
    end
  end
  module_function :shellescape
end

    
          describe 'deprecation', focus: true do
        it 'deprecated message changes the description' do
          config_item = FastlaneCore::ConfigItem.new(key: :foo,
                                                     description: 'foo',
                                                     deprecated: 'replaced by bar')
          expect(config_item.description).to eq('**DEPRECATED!** replaced by bar - foo')
        end
    
    require 'vagrant/capability_host'
    
            include Vagrant::Util
    
            # This unregisters a plugin so that its components will no longer
        # be used. Note that this should only be used for testing purposes.
        def unregister(plugin)
          if @registered.include?(plugin)
            @logger.info('Unregistered: #{plugin.name}')
            @registered.delete(plugin)
          end
        end
      end
    end
  end
end

    
      def reject(&block)
    self.class.new(@paths.reject(&block))
  end
    
    module Homebrew
  module_function
    
            self.description = <<-DESC
          Shows the content of the pods cache as a YAML tree output, organized by pod.
          If `NAME` is given, only the caches for that pod will be included in the output.
        DESC
    
        def validate_plugins!
      @plugins_to_package.each do |plugin_name|
        if INVALID_PLUGINS_TO_EXPLICIT_PACK.any? { |invalid_name| plugin_name =~ invalid_name }
          raise UnpackablePluginError, 'Cannot explicitly pack `#{plugin_name}` for offline installation'
        end
      end
    end
    
          def get_installer_for(plugin_name)
        uri = pack_uri(plugin_name)
    
        before do
      logstash.run_command_in_path('bin/logstash-plugin install --no-verify --version #{previous_version} #{plugin_name}')
      # Logstash won't update when we have a pinned version in the gemfile so we remove them
      logstash.replace_in_gemfile(',[[:space:]]'0.1.0'', '')
      expect(logstash).to have_installed?(plugin_name, previous_version)
    end