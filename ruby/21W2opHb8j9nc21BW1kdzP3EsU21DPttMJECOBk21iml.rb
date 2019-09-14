
        
            # @param config [FastlaneCore::Configuration] is used to gather required information about the configuration
    # @param path [String] The path to the configuration file to use
    def initialize(config, path, block_for_missing, skip_printing_values = false)
      self.available_keys = config.all_keys
      self.configfile_path = path
      self.options = {}
    
            paths.sort.each do |path|
          UI.message('Uploading screenshot #{path}...')
          client.upload_image(image_path: File.expand_path(path),
                              image_type: screenshot_type,
                                language: language)
        end
      end
    end
    
      context 'instances' do
    let(:build) { Spaceship::TestFlight::Build.find(app_id: 'some-app-id', build_id: 'some-build-id') }
    
          if class_ref
        if class_ref.respond_to?(:run)
          # Action is available, now execute it
          return self.execute_action(method_sym, class_ref, arguments, custom_dir: custom_dir, from_action: from_action)
        else
          UI.user_error!('Action '#{method_sym}' of class '#{class_name}' was found, but has no `run` method.')
        end
      end
    
              project = Xcodeproj::Project.open(project_path)
          project.targets.each do |target|
            target.build_configuration_list.build_configurations.each do |build_configuration|
              current = build_configuration.build_settings
              next if test_target?(current)
              sdkroot = build_configuration.resolve_build_setting('SDKROOT', target)
              next unless same_platform?(sdkroot)
              next unless specified_configuration == build_configuration.name
    
          def resolve_result_bundle_path(language, locale)
        Snapshot.cache[:result_bundle_path] = {}
        language_key = locale || language
    
            begin
          Actions.sh(command)
    
          def self.example_code
        [
          'make_changelog_from_jenkins(
            # Optional, lets you set a changelog in the case is not generated on Jenkins or if ran outside of Jenkins
            fallback_changelog: 'Bug fixes and performance enhancements'
          )'
        ]
      end
    
          # Maps the bundle identifier to the appropriate provisioning profile
      # This is used in the _gym_ action as part of the export options
      # e.g.
      #
      #   export_options: {
      #     provisioningProfiles: { 'me.themoji.app.beta': 'match AppStore me.themoji.app.beta' }
      #   }
      #
      def self.define_provisioning_profile_mapping(params)
        mapping = Actions.lane_context[SharedValues::MATCH_PROVISIONING_PROFILE_MAPPING] || {}
    
        let(:default_add_tester_options) do
      FastlaneCore::Configuration.create(Pilot::Options.available_options, {
        apple_id: '123456789',
        email: fake_tester.email,
        first_name: fake_tester.first_name,
        last_name: fake_tester.last_name
      })
    end
    
      describe '#recursive_basic_literal?' do
    let(:node) { RuboCop::ProcessedSource.new(src, ruby_version).ast }
    
            def extract_heredoc(node)
          return node if heredoc_node?(node)
          return node.receiver if single_line_send_with_heredoc_receiver?(node)
    
          module_function
    
              it 'does not autocorrect' do
            new_source = autocorrect_source(source)
            expect(new_source).to eq(source)
          end
        end
    
          it 'should have the correct version' do
        pending('Ruby 1.x and 2.0.x are unsupported for Snap because it lacks Psych::safe_load') if is_old_ruby
        insist { input.version } == original.version
      end
    
        @name = nil
    @architecture = 'native'
    @description = 'no description given'
    @version = nil
    @epoch = nil
    @iteration = nil
    @url = nil
    @category = 'default'
    @license = 'unknown'
    @vendor = 'none'
    
        # Create a temporary config file
    logger.debug('Creating pear config file')
    config = File.expand_path(build_path('pear.config'))
    installroot = attributes[:prefix] || '/usr/share'
    safesystem('pear', 'config-create', staging_path(installroot), config)
    
      require 'pleaserun/platform/systemd'
  require 'pleaserun/platform/upstart'
  require 'pleaserun/platform/launchd'
  require 'pleaserun/platform/sysv'