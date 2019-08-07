
        
                  theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
          # Sign in a user that already was authenticated. This helper is useful for logging
      # users in after sign up. All options given to sign_in is passed forward
      # to the set_user method in warden.
      # If you are using a custom warden strategy and the timeoutable module, you have to
      # set `env['devise.skip_timeout'] = true` in the request to use this method, like we do
      # in the sessions controller: https://github.com/plataformatec/devise/blob/master/app/controllers/devise/sessions_controller.rb#L7
      #
      # Examples:
      #
      #   sign_in :user, @user                      # sign_in(scope, resource)
      #   sign_in @user                             # sign_in(resource)
      #   sign_in @user, event: :authentication     # sign_in(resource, options)
      #   sign_in @user, store: false               # sign_in(resource, options)
      #
      def sign_in(resource_or_scope, *args)
        options  = args.extract_options!
        scope    = Devise::Mapping.find_scope!(resource_or_scope)
        resource = args.last || resource_or_scope
    
              recoverable.reset_password_token = original_token if recoverable.reset_password_token.present?
          recoverable
        end
    
            # Initialize a new instance from its attributes.
        #
        # @param [Array<Specification>] specs      @see #specs
        # @param [Array<Specification>] test_specs @see #test_specs
        # @param [Array<Specification>] app_specs  @see #app_specs
        # @param [Platform] platform               @see #platform
        # @param [Target::BuildType] build_type    @see #build_type
        #
        def initialize(specs, test_specs, app_specs, platform, build_type = Target::BuildType.static_library)
          @specs = specs
          @test_specs = test_specs
          @app_specs = app_specs
          @platform = platform
          @build_type = build_type
          @hash = [specs, platform, build_type].hash
        end
    
                spec_names = specs.map do |spec|
              spec.root? ? '.root' : spec.name.split('/')[1..-1].join('_')
            end.sort
            if spec_names.empty?
              omit_common_specs ? '.common' : nil
            else
              if omit_common_specs
                spec_names.unshift('.common')
              elsif omit_default_specs
                spec_names.unshift('.default')
              end
              spec_names.reduce('') do |acc, name|
                '#{acc}#{acc.empty? || name[0] == '.' ? '' : '-'}#{name}'
              end
            end
          end
        end
    
              # Creates a script that copies the resources to the bundle of the client
          # target.
          #
          # @note   The bridge support file needs to be created before the prefix
          #         header, otherwise it will not be added to the resources script.
          #
          # @return [void]
          #
          def create_copy_resources_script
            path = target.copy_resources_script_path
            generator = Generator::CopyResourcesScript.new(target.resource_paths_by_config, target.platform)
            update_changed_file(generator, path)
            add_file_to_support_group(path)
          end
    
    require 'rubygems'
require 'bundler/setup'
require 'bacon'
require 'mocha-on-bacon'
require 'pretty_bacon'
require 'pathname'
    
    module Pod
  class Target
    describe BuildType do
      describe '#initialize' do
        it 'returns static library by default' do
          BuildType.new.should == BuildType.static_library
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
    
          def ==(other)
        if other.class == self.class
          other.source_path == @source_path && other.dsym_path == @dsym_path && other.bcsymbolmap_paths == @bcsymbolmap_paths
        else
          false
        end
      end
    
            it 'does not remove existing embed frameworks build phases from integrated framework targets' do
          @pod_bundle.stubs(:build_type => Target::BuildType.dynamic_framework)
          @target_integrator.integrate!
          @pod_bundle.stubs(:requires_frameworks? => false)
          target = @target_integrator.send(:native_targets).first
          @target_integrator.integrate!
          phase = target.shell_script_build_phases.find { |bp| bp.name == @embed_framework_phase_name }
          phase.should.not.be.nil
        end
    
    def bump_version
  old_file = File.read('lib/#{name}.rb')
  old_version_line = old_file[/^\s*VERSION\s*=\s*.*/]
  new_version = next_version
  # replace first match of old vesion with new version
  old_file.sub!(old_version_line, '  VERSION = '#{new_version}'')
    
        def self.private_key
      @private_key ||= OpenSSL::PKey::RSA.new(File.open(Postal.lets_encrypt_private_key_path))
    end
    
      #
  # SPF
  #
    
      expansion(:attachments) {
    o.attachments.map do |attachment|
      {
        :filename => attachment.filename.to_s,
        :content_type => attachment.mime_type,
        :data => Base64.encode64(attachment.body.to_s),
        :size => attachment.body.to_s.bytesize,
        :hash => Digest::SHA1.hexdigest(attachment.body.to_s)
      }
    end
  }
    
      def safe_params
    params.require(:ip_address).permit(:ipv4, :ipv6, :hostname)
  end
    
      def deliveries
    render :json => {:html => render_to_string(:partial => 'deliveries', :locals => {:message => @message})}
  end
    
      def destroy
    unless current_user.authenticate(params[:password])
      respond_to do |wants|
        wants.html do
          redirect_to [:delete, organization, @server], :alert => 'The password you entered was not valid. Please check and try again.'
        end
        wants.json do
          render :json => {:alert => 'The password you entere was invalid. Please check and try again'}
        end
      end
      return
    end
    @server.soft_destroy
    redirect_to_with_json organization_root_path(organization), :notice => '#{@server.name} has been deleted successfully'
  end