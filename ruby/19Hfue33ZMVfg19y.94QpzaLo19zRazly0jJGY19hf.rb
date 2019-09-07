
        
            def run(path, color = nil)
      unless color
        color = Frameit::Color::BLACK
        color = Frameit::Color::SILVER if Frameit.config[:white] || Frameit.config[:silver]
        color = Frameit::Color::GOLD if Frameit.config[:gold]
        color = Frameit::Color::ROSE_GOLD if Frameit.config[:rose_gold]
      end
    
        it 'detects the build configuration from selected scheme', requires_xcode: true do
      workspace_path = 'gym/spec/fixtures/projects/cocoapods/Example.xcworkspace'
      project = FastlaneCore::Project.new({ workspace: workspace_path })
      csm = Gym::CodeSigningMapping.new(project: project)
      Gym.config[:scheme] = 'Example (Debug)'
      expect(csm.detect_project_profile_mapping).to eq({ 'family.wwdc.app' => 'match Development family.wwdc.app', 'family.wwdc.app.watchkitapp' => 'match Development family.wwdc.app.watchkitapp', 'family.wwdc.app.watchkitapp.watchkitextension' => 'match Development family.wwdc.app.watchkitappextension' })
    end
    
        context 'no builds' do
      let(:fake_builds) { make_fake_builds(0) }
      it 'throws a UI error' do
        expect do
          review_submitter.find_build(fake_builds)
        end.to raise_error(FastlaneCore::Interface::FastlaneError, 'Could not find any available candidate builds on App Store Connect to submit')
      end
    end
    
          def verify_devices_share_os(device_names)
        # Get device types based off of device name
        devices = get_device_type_with_simctl(device_names)
    
          def pipe(device_type, language, locale)
        log_path = xcodebuild_log_path(device_type: device_type, language: language, locale: locale)
        return ['| tee #{log_path.shellescape} | xcpretty #{Snapshot.config[:xcpretty_args]}']
      end
    
            # Allows adding of additional multiple dsym_paths since :dsym_path can be autoset by other actions
        dsym_paths += params[:dsym_paths] if params[:dsym_paths]
    
            if Helper.test?
          Actions.lane_context[SharedValues::IPA_OUTPUT_PATH] = File.join(absolute_dest_directory, 'test.ipa')
          Actions.lane_context[SharedValues::DSYM_OUTPUT_PATH] = File.join(absolute_dest_directory, 'test.app.dSYM.zip')
          return build_args
        end
    
          template.resolve!(
        project_name: params[:project].presence,
        fullname: params[:fullname].presence || current_user&.name
      )
    
            def list_files_for(dir)
          dir = '#{dir}/' unless dir.end_with?('/')
          Dir.glob(File.join(dir, '*#{@extension}')).select { |f| f =~ self.class.filter_regex(@extension) }
        end
    
              File.join(category_directory(directory), file_name)
        end
    
          private
    
          context 'when user can update_group_member' do
        before do
          allow(presenter).to receive(:can?).with(user, :update_group_member, presenter).and_return(true)
        end
    
            def self.default_options
          ::Commit.max_diff_options.merge(ignore_whitespace_change: false, expanded: false, include_stats: true)
        end
    
    shared_examples 'unfoldable diff' do
  let(:subject) { described_class.new(diffable, diff_options: nil) }
    
              present_badges(source, badge)
        end
    
      # Time interval you can access your account before confirming your account.
  # nil - allows unconfirmed access for unlimited time
  mattr_accessor :allow_unconfirmed_access_for
  @@allow_unconfirmed_access_for = 0.days
    
          private
    
          private
    
        # Creates configuration values for Devise and for the given module.
    #
    #   Devise::Models.config(Devise::Models::DatabaseAuthenticatable, :stretches)
    #
    # The line above creates:
    #
    #   1) An accessor called Devise.stretches, which value is used by default;
    #
    #   2) Some class methods for your model Model.stretches and Model.stretches=
    #      which have higher priority than Devise.stretches;
    #
    #   3) And an instance method stretches.
    #
    # To add the class methods you need to have a module ClassMethods defined
    # inside the given class.
    #
    def self.config(mod, *accessors) #:nodoc:
      class << mod; attr_accessor :available_configs; end
      mod.available_configs = accessors
    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'test -x /opt/chef_solo/bin/knife&& /opt/chef_solo/bin/knife --version | grep '15.0.0'' }
    
        it 'returns the host machine object' do
      allow(machine.provider_config).to receive(:vagrant_vagrantfile).and_return('/path/to/Vagrantfile')
      allow(machine.provider_config).to receive(:vagrant_machine).and_return(:default)
      allow(machine).to receive(:env).and_return(true)
      allow(machine.env).to receive(:root_path).and_return('/.vagrant.d')
      allow(machine.env).to receive(:home_path).and_return('/path/to')
      allow(machine.env).to receive(:ui_class).and_return(true)
    
        it 'raises an exception if checksum given but not correct' do
      box_path = iso_env.box2_file(:virtualbox)
      tf = Tempfile.new(['vagrant-test-bad-checksum', '.json']).tap do |f|
        f.write(<<-RAW)
        {
          'name': 'foo/bar',
          'versions': [
            {
              'version': '0.5'
            },
            {
              'version': '0.7',
              'providers': [
                {
                  'name': 'virtualbox',
                  'url':  '#{box_path}',
                  'checksum_type': 'sha1',
                  'checksum': 'thisisnotcorrect'
                }
              ]
            }
          ]
        }
        RAW
        f.close
      end
    
        it 'raises an exception if virtualbox is the wrong version' do
      allow(VagrantPlugins::ProviderVirtualBox::Driver::Meta).to receive(:new).
        and_raise(Vagrant::Errors::VirtualBoxInvalidVersion, supported_versions: '1,2,3')
    
          it 'should exit the process if exit_code has been set' do
        subject.custom(machine) { |m| Thread.current[:exit_code] = 1}
        subject.custom(machine) { |*_| }
        expect(Process).to receive(:exit!).with(1)
        subject.run
      end
    end
  end
end
