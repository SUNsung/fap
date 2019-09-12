
        
          has_many :posts_with_extension, -> { order(:title) }, class_name: 'Post' do
    def extension_method; end
  end
    
          def test_declare_missing_helper
        e = assert_raise AbstractController::Helpers::MissingHelperError do
          AbstractHelpers.helper :missing
        end
        assert_equal 'helpers/missing_helper.rb', e.path
      end
    
          # Determines what how a Trigger should behave if it runs into an error.
      # Defaults to :halt, otherwise can only be set to :continue.
      #
      # @return [Symbol]
      attr_accessor :on_error
    
            def verify_binary(binary)
          # Checks for the existence of chef binary and error if it
          # doesn't exist.
          if windows?
            command = 'if ((&'#{binary}' -v) -Match 'Chef*'){ exit 0 } else { exit 1 }'
          else
            command = 'sh -c 'command -v #{binary}''
          end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
    # Configure VAGRANT_CWD so that the tests never find an actual
# Vagrantfile anywhere, or at least this minimizes those chances.
ENV['VAGRANT_CWD'] = VAGRANT_TEST_CWD
    
      describe '#host_vm' do
    let(:host_env) { double('host_env', root_path: '/vagrant.d', default_provider: :virtualbox) }
    
          expect(app).to receive(:call).with(env)
    
          iso_env.box3('base', '1.0', :foo, vagrantfile: <<-VF)
      Vagrant.configure('2') do |config|
        config.ssh.port = 123
      end
      VF
    
              # If we forked during the process run, we need to do a hard
          # exit here. Ruby's fork only copies the running process (which
          # would be us), so if we return from this thread, it results
          # in a zombie Ruby process.
          if Process.pid != start_pid
            # We forked.
    
                if trigger.run_remote
              run_remote(trigger.run_remote, trigger.on_error, trigger.exit_codes)
            end
    
        it 'halts on error' do
      allow(Vagrant::Util::Subprocess).to receive(:execute).
        and_raise('Fail!')
    
          # Include environment specific specification if enabled
      if env_plugin_gem_path
        plugin_specs += Dir.glob(env_plugin_gem_path.join('specifications/*.gemspec').to_s).map do |spec_path|
          Gem::Specification.load(spec_path)
        end
      end
    
        before do
      iso_env.machine_index.set(new_entry('foo'))
      iso_env.machine_index.set(new_entry('bar'))
      allow($stdout).to receive(:puts)
    end
    
          def csp_policy
        directives = []
    
    begin
  require 'escape_utils'
rescue LoadError
end
    
    module Rack
  module Protection
    ##
    # Prevented attack::   CSRF
    # Supported browsers:: all
    # More infos::         http://flask.pocoo.org/docs/0.10/security/#json-security
    #                      http://haacked.com/archive/2008/11/20/anatomy-of-a-subtle-json-vulnerability.aspx
    #
    # JSON GET APIs are vulnerable to being embedded as JavaScript when the
    # Array prototype has been patched to track data. Checks the referrer
    # even on GET requests if the content type is JSON.
    #
    # If request includes Origin HTTP header, defers to HttpOrigin to determine
    # if the request is safe. Please refer to the documentation for more info.
    #
    # The `:allow_if` option can be set to a proc to use custom allow/deny logic.
    class JsonCsrf < Base
      default_options :allow_if => nil
    
        it 'redirects requests with sneaky encoded session cookies' do
      get '/path', {}, 'HTTP_COOKIE' => 'rack.%73ession=EVIL_SESSION_TOKEN; rack.session=SESSION_TOKEN'
      expect(last_response).to be_redirect
      expect(last_response.location).to eq('/path')
    end
  end
    
          diff   = variant.amount_in(current_currency) - product_amount
      amount = Spree::Money.new(diff.abs, currency: current_currency).to_html
      label  = diff > 0 ? :add : :subtract
      '(#{Spree.t(label)}: #{amount})'.html_safe
    end
    
      def self.load_translations(hash, root = [])
    hash.each do |k, v|
      if v.is_a?(Hash)
        load_translations(v, root.dup << k)
      else
        key = (root + [k]).join('.')
        unused_translations << key
      end
    end
  end
    
            def fire
          inventory_unit.send('#{@event}!') if @event
        end
    
            private
    
        def tmux_select_first_pane
      '#{project.tmux} select-pane -t #{tmux_window_target}.#{panes.first.index + project.pane_base_index}'
    end
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      it { expect(subject.tmux_window_and_pane_target).to eql 'foo:0.1' }
end

    
        context 'with deprecations' do
      context 'rbenv option is present' do
        before do
          allow(project).to receive_messages(rbenv?: true)
          allow(project).to \
            receive_message_chain(:yaml, :[]).and_return('2.0.0-p247')
        end
    
        result
  end
    
        include_examples :unsupported_version_message, :local
  end
    
        context 'pre is not present' do
      before do
        yaml['editor'].delete('pre')
      end
    
    desc 'Test the paperclip plugin.'
RSpec::Core::RakeTask.new(:spec)
    
    class PaperclipGenerator < ActiveRecord::Generators::Base
  desc 'Create a migration to add paperclip-specific fields to your model. ' +
       'The NAME argument is the name of your model, and the following ' +
       'arguments are the name of the attachments'
    
    require 'paperclip/railtie' if defined?(Rails::Railtie)
    
        def geometry_string
      begin
        orientation = Paperclip.options[:use_exif_orientation] ?
          '%[exif:orientation]' : '1'
        Paperclip.run(
          Paperclip.options[:is_windows] ? 'magick identify' : 'identify',
          '-format '%wx%h,#{orientation}' :file', {
            :file => '#{path}[0]'
          }, {
            :swallow_stderr => true
          }
        )
      rescue Terrapin::ExitStatusError
        ''
      rescue Terrapin::CommandNotFoundError => e
        raise_because_imagemagick_missing
      end
    end