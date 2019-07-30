
        
            should 'include a post with a abbreviated dates' do
      refute_nil(
        @site.posts.index do |post|
          post.relative_path == '_posts/2017-2-5-i-dont-like-zeroes.md'
        end
      )
      assert_exist dest_dir('2017', '02', '05', 'i-dont-like-zeroes.html')
    end
    
          def collections
        @site_collections ||= @obj.collections.values.sort_by(&:label).map(&:to_liquid)
      end
    
    Nullam luctus fermentum est id blandit. Phasellus consectetur ullamcorper
ligula, at finibus eros laoreet id. Etiam sit amet est in libero efficitur
tristique. Ut nec magna augue. Quisque ut fringilla lacus, ac dictum enim.
Aliquam vel ornare mauris. Suspendisse ornare diam tempor nulla facilisis
aliquet. Sed ultrices placerat ultricies.
TEXT
    
          def build_rsync_chown(opts)
        guest_path = Shellwords.escape(opts[:guestpath])
        if(opts[:exclude] && !Array(opts[:exclude]).empty?)
          exclude_base = Pathname.new(opts[:guestpath])
          exclusions = Array(opts[:exclude]).map do |ex_path|
            ex_path = ex_path.slice(1, ex_path.size) if ex_path.start_with?(File::SEPARATOR)
            '-path #{Shellwords.escape(exclude_base.join(ex_path))} -prune'
          end.join(' -o ') + ' -o '
        end
        'find #{guest_path} #{exclusions}' \
          ''!' -type l -a ' \
          ''(' ! -user #{opts[:owner]} -or ! -group #{opts[:group]} ')' -exec ' \
          'chown #{opts[:owner]}:#{opts[:group]} '{}' +'
      end
    end
  end
end

    
    module VagrantPlugins
  module Chef
    module Provisioner
      # This class is a base class where the common functionality shared between
      # chef-solo and chef-client provisioning are stored. This is **not an actual
      # provisioner**. Instead, {ChefSolo} or {ChefServer} should be used.
      class Base < Vagrant.plugin('2', :provisioner)
        include Vagrant::Util
        include Vagrant::Util::Presence
    
          # Add the sub-machine configuration to the loader and keys
      vm_config_key = '#{object_id}_machine_#{name}'
      @loader.set(vm_config_key, sub_machine.config_procs)
      keys << vm_config_key
    
              opts = OptionParser.new do |o|
            o.banner = 'Usage: vagrant box update [options]'
            o.separator ''
            o.separator 'Updates the box that is in use in the current Vagrant environment,'
            o.separator 'if there any updates available. This does not destroy/recreate the'
            o.separator 'machine, so you'll have to do that to see changes.'
            o.separator ''
            o.separator 'To update a specific box (not tied to a Vagrant environment), use the'
            o.separator '--box flag.'
            o.separator ''
            o.separator 'Options:'
            o.separator ''
    
      if ARGV.include? '--no-ansi'
    STDERR.puts <<-DOC
    WARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
          # @return [Array<Pathname>] the files of the specification to preserve.
      #
      def preserve_paths
        paths_for_attribute(:preserve_paths, true)
      end
    
              # @!group Private helpers
          #-------------------------------------------------------------------#
    
      describe 'GET blocks index' do
    it 'renders proper blocks index' do
      create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      get '/blocks'
      expect(response.body).to include('color: blue')
    end
  end
    
        it 'denies chat channel invitation to non-authorized user' do
      expect do
        post '/chat_channel_memberships', params: {
          chat_channel_membership: {
            user_id: second_user.id, chat_channel_id: chat_channel.id
          }
        }
      end.to raise_error(Pundit::NotAuthorizedError)
    end
  end
    
      context 'when redirected routes' do
    include RSpec::Rails::RequestExampleGroup
    
      def self.upbuff!(buffer_update_id, admin_id, body_text, status)
    buffer_update = BufferUpdate.find(buffer_update_id)
    if status == 'confirmed'
      buffer_response = send_to_buffer(body_text, buffer_update.buffer_profile_id_code)
      buffer_update.update!(buffer_response: buffer_response, status: status, approver_user_id: admin_id, body_text: body_text)
    else
      buffer_update.update!(status: status, approver_user_id: admin_id)
    end
  end
    
        def layout
      yaml['layout'] ? yaml['layout'].shellescape : nil
    end
    
      before do
    allow(project).to receive(:name).and_return 'foo'
    allow(project).to receive(:base_index).and_return 0
    allow(project).to receive(:pane_base_index).and_return 1
    
            it 'still gets the correct pre_window command' do
          expect(project.pre_window).to eq 'rvm use ruby-2.0.0-p247'
        end
      end
    
      match do
    result = is_pane
    
    describe Tmuxinator::Cli do
  shared_context :local_project_setup do
    let(:local_project_config) { '.tmuxinator.yml' }
    let(:content_fixture) { '../../fixtures/sample.yml' }
    let(:content_relpath) { File.join(File.dirname(__FILE__), content_fixture) }
    let(:content_path) { File.expand_path(content_relpath) }
    let(:content) { File.read(content_path) }
    let(:working_dir) { FileUtils.pwd }
    let(:local_project_relpath) { File.join(working_dir, local_project_config) }
    let(:local_project_path) { File.expand_path(local_project_relpath) }