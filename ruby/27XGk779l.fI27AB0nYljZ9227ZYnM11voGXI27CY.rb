
        
              [poll type=regular]
      * Hello
      * World
      [/poll]
    MD
    
        it 'should import branch from ssh url' do
      Discourse::Utils.expects(:execute_command).with({
        'GIT_SSH_COMMAND' => 'ssh -i #{@ssh_folder}/id_rsa -o StrictHostKeyChecking=no'
      }, 'git', 'clone', '--single-branch', '-b', branch, ssh_url, @temp_folder)
    
        def fetch_group(group_name)
      group_name = group_name.downcase
      group = @groups[group_name]
    
        post_action_types = PostActionType.where(id: PostActionType.flag_types.values).order('id')
    
    class Admin::GroupsController < Admin::AdminController
  def bulk
  end
    
            /^#{path}[^\/]*\.t?gz$/i
      end
    end
    
              s3_helper.expects(:s3_bucket).returns(s3_bucket).at_least_once
          s3_bucket.expects(:object).with('uploads/second/original/1X/#{upload.sha1}.png').returns(s3_object)
          s3_object.expects(:acl).returns(s3_object)
          s3_object.expects(:put).with(acl: 'private').returns(s3_object)
    
        desc 'Get the list of the available license template' do
      detail 'This feature was introduced in GitLab 8.7.'
      success ::API::Entities::License
    end
    params do
      optional :popular, type: Boolean, desc: 'If passed, returns only popular licenses'
      use :pagination
    end
    get 'templates/licenses' do
      popular = declared(params)[:popular]
      popular = to_boolean(popular) if popular.present?
    
          encrypted_token = settings.first.runners_registration_token_encrypted
      decrypted_token = ::Gitlab::CryptoHelper.aes256_gcm_decrypt(encrypted_token)
    
          context 'and user cannot admin_group_member' do
        before do
          allow(presenter).to receive(:can?).with(user, :admin_group_member, group).and_return(false)
        end
    
            it { expect(presenter.can_resend_invite?).to eq(true) }
      end
    
            new(sandbox, sandbox.root.to_s, pods_project, umbrella_targets_descriptions)
      end
    
          # @return [Boolean] whether the target is built as a framework
      #
      def framework?
        packaging == :framework
      end
    
    ENV['SKIP_SETUP'] = 'true'
if ENV['SKIP_XCODEBUILD'].nil? && Pod::Executable.which('xcodebuild').nil?
  ENV['SKIP_XCODEBUILD'] = 'true'
end
    
            it 'can be initialized with specs, platform and whether it requires frameworks' do
          variant = PodVariant.new(@specs, [], [], @platform, @type)
          variant.specs.should == @specs
          variant.platform.should == @platform
          variant.build_type.should == @type
        end
    
              it 'does not require a host target, if there is no user project (manual integration)' do
            @target.stubs(:user_project).returns(nil)
            @target.stubs(:user_target_uuids).returns([])
            @target.requires_host_target?.should == false
          end
    
              it 'saves the xcconfig' do
            path = temporary_directory + 'sample.xcconfig'
            @generator.save_as(path)
            generated = Xcodeproj::Config.new(path)
            generated.class.should == Xcodeproj::Config
          end
    
          def updates
        @updates ||= begin
          ensure_external_podspecs_present!
          spec_sets.map do |set|
            spec = set.specification
            source_version = set.versions.first
            pod_name = spec.root.name
            lockfile_version = lockfile.version(pod_name)
            if source_version > lockfile_version
              matching_spec = unlocked_pods.find { |s| s.name == pod_name }
              matching_version =
                matching_spec ? matching_spec.version : '(unused)'
              [pod_name, lockfile_version, matching_version, source_version]
            end
          end.compact.uniq
        end
      end
    
    Gem::Specification.new do |gem|
  gem.name          = 'capistrano'
  gem.version       = Capistrano::VERSION
  gem.authors       = ['Tom Clements', 'Lee Hambley']
  gem.email         = ['seenmyfate@gmail.com', 'lee.hambley@gmail.com']
  gem.description   = 'Capistrano is a utility and framework for executing commands in parallel on multiple remote machines, via SSH.'
  gem.summary       = 'Capistrano - Welcome to easy deployment with Ruby over SSH'
  gem.homepage      = 'http://capistranorb.com/'
    
    Given(/^a custom task to generate a file$/) do
  TestApp.copy_task_to_test_app('spec/support/tasks/database.rake')
end
    
        (stdout + stderr).each_line { |line| puts '[vagrant] #{line}' }
    
        private
    
        def configure_backend
      backend.configure do |sshkit|
        configure_sshkit_output(sshkit)
        sshkit.output_verbosity = fetch(:log_level)
        sshkit.default_env      = fetch(:default_env)
        sshkit.backend          = fetch(:sshkit_backend, SSHKit::Backend::Netssh)
        sshkit.backend.configure do |backend|
          backend.pty                = fetch(:pty)
          backend.connection_timeout = fetch(:connection_timeout)
          backend.ssh_options        = (backend.ssh_options || {}).merge(fetch(:ssh_options, {}))
        end
      end
    end
    
          ServerKey = Struct.new(:hostname, :port)
    
          def keys
        values.keys
      end
    
    # Exit cleanly from an early interrupt
Signal.trap('INT') { exit 1 }
    
      it 'records when the config was read' do
    expect(subject.read_at).to be <= Time.now
  end