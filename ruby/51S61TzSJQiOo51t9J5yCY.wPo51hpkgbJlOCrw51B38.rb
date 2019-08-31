
        
            let(:validator) { described_class.new }
    let(:account)   { double(username: username, errors: errors) }
    let(:errors )   { double(add: nil) }
    
          it 'creates a follow request relation between user and target user' do
        expect(user.account.requested?(other_account)).to be true
      end
    
      def eligible_users
    User.emailable
        .where('current_sign_in_at < ?', (FREQUENCY + SIGN_IN_OFFSET).ago)
        .where('last_emailed_at IS NULL OR last_emailed_at < ?', FREQUENCY.ago)
  end
end

    
      # Loaded immediately after dependencies to ensure proper override of their
  # UI methods.
  #
  require 'cocoapods/user_interface'
    
            def create_project(path, object_version, pod_target_subproject)
          object_version ||= Xcodeproj::Constants::DEFAULT_OBJECT_VERSION
          Pod::Project.new(path, false, object_version, :pod_target_subproject => pod_target_subproject)
        end
    
        it 'includes additional entries if requested' do
      generator = Generator::InfoPlistFile.new('1.0.0', Platform.new(:ios, '10.8'), :appl, 'UILaunchStoryboardName' => 'LaunchScreen')
      file = temporary_directory + 'Info.plist'
      generator.save_as(file)
      Xcodeproj::Plist.read_from_path(file).should == {
        'CFBundleDevelopmentRegion' => 'en',
        'CFBundleExecutable' => '${EXECUTABLE_NAME}',
        'CFBundleIdentifier' => '${PRODUCT_BUNDLE_IDENTIFIER}',
        'CFBundleInfoDictionaryVersion' => '6.0',
        'CFBundleName' => '${PRODUCT_NAME}',
        'CFBundlePackageType' => 'APPL',
        'CFBundleShortVersionString' => '1.0.0',
        'CFBundleSignature' => '????',
        'CFBundleVersion' => '${CURRENT_PROJECT_VERSION}',
        'NSPrincipalClass' => '',
        'UILaunchStoryboardName' => 'LaunchScreen',
      }
    end
    
            # Initialize a new instance
        #
        # @param [TargetDefinition] target_definition @see #target_definition
        # @param [Xcodeproj::Project] project @see #project
        # @param [Array<String>] project_target_uuids @see #project_target_uuids
        # @param [Hash{String=>Symbol}] build_configurations @see #build_configurations
        # @param [Platform] platform @see #platform
        # @param [Array<String>] archs @see #archs
        #
        def initialize(target_definition, project, project_target_uuids, build_configurations, platform, archs)
          @target_definition = target_definition
          @project = project
          @project_target_uuids = project_target_uuids
          @build_configurations = build_configurations
          @platform = platform
          @archs = archs
          @client_root = project.project_dir.realpath
        end
      end
    end
  end
end

    
      describe '#name' do
    it { expect(instance.name).to eq 'wemux' }
  end
    
        def build_commands(_prefix, command_yml)
      if command_yml.is_a?(Array)
        command_yml.map do |command|
          '#{tmux_window_command_prefix} #{command.shellescape} C-m' if command
        end.compact
      elsif command_yml.is_a?(String) && !command_yml.empty?
        ['#{tmux_window_command_prefix} #{command_yml.shellescape} C-m']
      else
        []
      end
    end
    
        include_examples :unsupported_version_message, :local
  end