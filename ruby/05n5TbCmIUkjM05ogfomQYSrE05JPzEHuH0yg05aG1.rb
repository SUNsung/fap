
        
                    first_param, second_param = parameters(method_node)
            next if !node_equals?(first_param, 'npm') ||
                    !node_equals?(second_param, 'install')
    
        it 'allows specifying dependencies after certain version' do
      spec.uses_from_macos('foo', after: :el_capitan)
    
      describe '#suggestion' do
    context 'without specific version' do
      its(:suggestion) { is_expected.to match(/brew cask install adoptopenjdk/) }
      its(:cask) { is_expected.to eq('adoptopenjdk') }
    end
    
          def minimum_version
        case MacOS.version
        when '10.15' then '11.0.0'
        when '10.14' then '10.0.0'
        when '10.13' then '9.0.0'
        when '10.12' then '8.0.0'
        else              '1.0.0'
        end
      end
    
            new_cask.config = Config.global.merge(old_config)
    
    describe Cask::Cmd::Cache, :cask do
  let(:local_transmission) {
    Cask::CaskLoader.load(cask_path('local-transmission'))
  }
    
      # When false, do not use translations for labels.
  # config.translate_labels = true
    
        ActivityTracker.increment('activity:interactions')
    
        return if skip_distribution?
    
      def signed_payload
    @signed_payload ||= Oj.dump(serialize_payload(@account, ActivityPub::UpdateSerializer, signer: @account, sign_with: @options[:sign_with]))
  end
end

    
      before do
    sign_in user, scope: :user
  end
    
          context 'reserved_username?' do
        let(:reserved_username) { true }
    
    RSpec.describe UrlValidator, type: :validator do
  describe '#validate_each' do
    before do
      allow(validator).to receive(:compliant?).with(value) { compliant }
      validator.validate_each(record, attribute, value)
    end
    
    describe FPM::Package::Snap do
  let(:target) { Stud::Temporary.pathname + '.snap' }
  after do
    subject.cleanup
    File.unlink(target) if File.exist?(target)
  end
    
      config.vm.define 'freebsd10' do |freebsd10|
    freebsd10.vm.box = 'tjay/freebsd-10.1'
  end
    
      def to_s(format=nil)
    return super('NAME_FULLVERSION_ARCH.TYPE') if format.nil?
    return super(format)
  end
    
        logger.info('Installing pear package', :package => input_package,
                  :directory => staging_path)
    ::Dir.chdir(staging_path) do
      safesystem('pear', '-c', config, 'install', '-n', '-f', input_package)
    end
    
      option '--group', 'GROUP',
    'Set the group to GROUP in the prototype file.',
    :default => 'root'
    
        def tmux_pre_command
      _send_target(tab.pre.shellescape) if tab.pre
    end
    
      factory :nowindows_project, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/nowindows.yml') }
    end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
      describe '#socket' do
    context 'socket path is present' do
      before do
        allow(project).to receive_messages(socket_path: '/tmp')
      end
    
    # Copied from minitest.
def capture_io
  require 'stringio'