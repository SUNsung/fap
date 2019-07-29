
        
          # Disable automatic flushing of the log to improve performance.
  # config.autoflush_log = false
    
      # Raise exceptions instead of rendering exception templates.
  config.action_dispatch.show_exceptions = false
    
          # @return [Xcodeproj::Project] The Pods Xcode project.
      #
      attr_reader :pods_project
    
              # Generates the contents of the xcconfig file and saves it to disk.
          #
          # @param  [PBXNativeTarget] native_target
          #         the native target to link the module map file into.
          #
          # @return [void]
          #
          def create_xcconfig_file(native_target)
            native_target.build_configurations.each do |configuration|
              next unless target.user_build_configurations.key?(configuration.name)
              path = target.xcconfig_path(configuration.name)
              build_settings = target.build_settings(configuration.name)
              update_changed_file(build_settings, path)
              target.xcconfigs[configuration.name] = build_settings.xcconfig
              xcconfig_file_ref = add_file_to_support_group(path)
              configuration.base_configuration_reference = xcconfig_file_ref
            end
          end
    
            it 'allows specifying linkage' do
          BuildType.new(:linkage => :dynamic).should == BuildType.dynamic_library
        end
    
          # Creates a default launchscreen storyboard.
      #
      # @param  [Project] project
      #         the Xcodeproj to generate the launchscreen storyboard into.
      #
      # @param  [PBXNativeTarget] target
      #         the native target to link the generated launchscreen storyboard into.
      #
      # @param  [Symbol] platform
      #         the platform of the target. Can be `:ios` or `:osx`, etc.
      #
      # @param  [String] deployment_target
      #         the deployment target for the platform.
      #
      # @param  [String] name
      #         The name to use for the target, defaults to 'App'.
      #
      # @return [PBXFileReference] the created file reference of the launchscreen storyboard.
      #
      def self.add_launchscreen_storyboard(project, target, group, deployment_target, name = 'App')
        launch_storyboard_file = AppTargetHelper.create_launchscreen_storyboard_file(project, deployment_target, name)
        launch_storyboard_ref = group.new_file(launch_storyboard_file)
        target.resources_build_phase.add_file_reference(launch_storyboard_ref)
      end
    
          private
    
            it 'cleans up linked libraries and frameworks from the frameworks build phase' do
          @pod_bundle.stubs(:build_type => Target::BuildType.dynamic_framework)
          @target_integrator.integrate!
          target = @target_integrator.send(:native_targets).first
          phase = target.frameworks_build_phase
          phase.files.find { |f| f.file_ref.path == 'Pods.framework' }.should.not.be.nil
          phase.files.find { |f| f.file_ref.path == 'Pods-Something.framework' }.should.be.nil
          @pod_bundle.stubs(:product_name => 'Pods-Something.framework')
          @pod_bundle.stubs(:product_basename => 'Pods-Something')
          @target_integrator.integrate!
          phase.files.find { |f| f.file_ref.path == 'Pods.framework' }.should.be.nil
          phase.files.find { |f| f.file_ref.path == 'Pods-Something.framework' }.should.not.be.nil
        end
    
          # http://stackoverflow.com/questions/9445760/bit-shifting-in-ruby
      def left_shift int, shift
        r = ((int & 0xFF) << (shift & 0x1F)) & 0xFFFFFFFF
        # 1>>31, 2**32
        (r & 2147483648) == 0 ? r : r - 4294967296
      end
    
          def toc_content
        @toc_content
      end
    
      test 'extract destination file name in case of path renaming' do
    view = Precious::Views::LatestChanges.new
    assert_equal 'newname.md', view.extract_renamed_path_destination('oldname.md => newname.md')
    assert_equal 'newDirectoryName/fileName.md', view.extract_renamed_path_destination('{oldDirectoryName => newDirectoryName}/fileName.md')
  end
    
      s.name              = 'gollum'
  s.version           = '4.1.4'
  s.date              = '2018-10-01'
  s.rubyforge_project = 'gollum'
  s.license           = 'MIT'
    
        it 'rejects chat channel invitation' do
      membership = ChatChannelMembership.last
      sign_in second_user
      put '/chat_channel_memberships/#{membership.id}', params: {
        chat_channel_membership: { user_action: 'reject' }
      }
      expect(ChatChannelMembership.find(membership.id).status).to eq('rejected')
    end
    
          it 'renders second and third users if present' do
        user2 = create(:user)
        user3 = create(:user)
        article.update(second_user_id: user2.id, third_user_id: user3.id)
        get article.path
        expect(response.body).to include '<em>with <b><a href=\'#{user2.path}\'>'
      end
    
      context 'when redirected routes' do
    include RSpec::Rails::RequestExampleGroup
    
      describe '#render' do
    it 'renders the template' do
      expect(File).to receive(:read).at_least(:once) { 'wemux ls 2>/dev/null' }