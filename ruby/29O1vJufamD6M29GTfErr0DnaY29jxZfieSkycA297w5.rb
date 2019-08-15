
        
          # Returns the FQDN of the image URL.
  #
  # @param [String] path
  #
  # @return [String]
  def image_url(path)
    File.join(base_url, image_path(path))
  end
    
              # Create a temporary file to store the data so we can upload it.
          remote_file = File.join(guest_provisioning_path, 'dna.json')
          @machine.communicate.sudo(remove_command(remote_file), error_check: false)
          Tempfile.open('vagrant-chef-provisioner-config') do |f|
            f.binmode
            f.write(json)
            f.fsync
            f.close
            @machine.communicate.upload(f.path, remote_file)
          end
        end
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
    # Load in helpers
require 'unit/support/dummy_communicator'
require 'unit/support/dummy_provider'
require 'unit/support/shared/base_context'
require 'unit/support/shared/action_synced_folders_context'
require 'unit/support/shared/capability_helpers_context'
require 'unit/support/shared/plugin_command_context'
require 'unit/support/shared/virtualbox_context'
    
            expect(box_collection).to receive(:add).with(any_args) { |path, name, version, **opts|
          expect(checksum(path)).to eq(checksum(box_path))
          expect(name).to eq('foo')
          expect(version).to eq('0')
          expect(opts[:metadata_url]).to be_nil
          true
        }.and_return(box)
    
            if !par
          thread.join(THREAD_MAX_JOIN_TIMEOUT) while thread.alive?
        end
        threads << thread
      end
    
        context 'when extra_args is provided as a string' do
      let(:ssh_info) {{
        host: 'localhost',
        port: 2222,
        username: 'vagrant',
        private_key_path: [private_key_path],
        extra_args: '-6'
      }}
    
        # Fallback to the default
    path ||= '~/.vagrant.d'
    
          spec['version'] = Bootstrap::VERSION
    
    get '/stream', :provides => 'text/event-stream' do
  stream :keep_open do |out|
    connections << out
    out.callback { connections.delete(out) }
  end
end
    
                <li class='code <%= frame_class(frame) %>'>
              <% if frame.pre_context %>
              <ol start='<%=h frame.pre_context_lineno + 1 %>'
                  class='pre-context' id='pre-<%= id %>'
                  onclick='toggle(<%= id %>);'>
                <% frame.pre_context.each do |line| %>
                <li class='pre-context-line'><code><%=h line %></code></li>
                <% end %>
              </ol>
              <% end %>
    
          def self.default_reaction(reaction)
        alias_method(:default_reaction, reaction)
      end
    
        headers = get('/', {}, 'wants' => 'text/html').headers
    expect(headers['Content-Security-Policy']).to eq('connect-src 'self'; default-src none; img-src 'self'; script-src 'self'; style-src 'self'')
  end
    
    require 'rspec/core/rake_task'
RSpec::Core::RakeTask.new(:spec) do |spec|
  spec.pattern = 'spec/**/*_spec.rb'
  spec.exclude_pattern = 'spec/integration/**/*_spec.rb'
end
    
        def write(header)
      @cookies.select { |key, _value| @send_cookies[key] == true }.each do |name, value|
        cookie_value = value.is_a?(Hash) ? value : { value: value }
        Rack::Utils.set_cookie_header! header, name, cookie_value
      end
    end
    
            if presenter
          embeds = { env: env }
          embeds[:version] = env[Grape::Env::API_VERSION] if env[Grape::Env::API_VERSION]
          presented_message = presenter.represent(presented_message, embeds).serializable_hash
        end