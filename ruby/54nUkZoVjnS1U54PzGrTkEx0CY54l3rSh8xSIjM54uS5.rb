
        
        module Scheduler
    
      def self.get(user, key, sequence)
    d = find_draft(user, key)
    d.data if d && d.sequence == sequence
  end
    
    class ContentSecurityPolicy
  class Builder
    EXTENDABLE_DIRECTIVES = %i[
      base_uri
      object_src
      script_src
      worker_src
    ].freeze
    
        RailsMultisite::ConnectionManagement.with_hostname(params[:hostname]) do
      theme_ids = params[:theme_ids].split(',').map(&:to_i)
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
      require 'rbconfig'
  host_os = RbConfig::CONFIG['host_os']
  add_filter %r{/os/mac} if host_os !~ /darwin/
  add_filter %r{/os/linux} if host_os !~ /linux/
    
    Given(/^file '(.*?)' does not exist in shared path$/) do |file|
  file_shared_path = TestApp.shared_path.join(file)
  run_vagrant_command('mkdir -p #{TestApp.shared_path}')
  run_vagrant_command('touch #{file_shared_path} && rm #{file_shared_path}')
end
    
      describe '#directories' do
    context 'without TMUXINATOR_CONFIG environment' do
      before do
        allow(described_class).to receive(:environment?).and_return false
      end
    
    describe Tmuxinator::Doctor do
  describe '.installed?' do
    context 'tmux is installed' do
      before do
        allow(Kernel).to receive(:system) { true }
      end
    
      describe '#stop' do
    before do
      ARGV.replace(['stop', 'foo'])
      allow(Tmuxinator::Config).to receive_messages(validate: project)
      allow(Tmuxinator::Config).to receive_messages(version: 1.9)
      allow(Kernel).to receive(:exec)
    end
    
    describe Tmuxinator::WemuxSupport do
  let(:klass) { Class.new }
  let(:instance) { klass.new }