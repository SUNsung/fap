
        
        RSpec.describe FileStore::BaseStore do
  fab!(:upload) { Fabricate(:upload, id: 9999, sha1: Digest::SHA1.hexdigest('9999')) }
    
      context '#set_traps' do
    it 'sets traps for INT TERM and QUIT' do
      agent_runner = AgentRunner.new
      mock(Signal).trap('INT')
      mock(Signal).trap('TERM')
      mock(Signal).trap('QUIT')
      agent_runner.set_traps
    
        it 'strips punctuation' do
      expect(AgentsExporter.new(:name => 'foo,bar').filename).to eq('foo-bar.json')
    end
    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end
    
        it 'should generate the correct last checkpoint url' do
      @checker.options['path'] = 'last_checkpoint/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/last_checkpoint/usps/9361289878905919630610')
    end
  end
    
      describe 'check' do
    it 'should command targets' do
      stub(Agent).async_check(target.id).once { nil }
      agent.check
    end
  end
    
      describe '#build_rsync_chown' do
    let(:opts) {{:type=>:rsync,
                 :guestpath=>'/vagrant',
                 :hostpath=>'/home/user/syncfolder',
                 :disabled=>false,
                 :__vagrantfile=>true,
                 :exclude=>['.vagrant'],
                 :owner=>'vagrant',
                 :group=>'vagrant'}}
    
        def byte_to_str_pos(pos)
      @s.string.byteslice(0, pos).length
    end
    
      def setup
    tmp_dir = File.join GEM_PATH, 'tmp/node-mincer'
    success = Dir.chdir DUMMY_PATH do
      silence_stdout_if !ENV['VERBOSE'] do
        system 'node', 'manifest.js', tmp_dir
      end
    end
    assert success, 'Node.js Mincer compilation failed'
    manifest = JSON.parse(File.read('#{tmp_dir}/manifest.json'))
    css_name = manifest['assets']['application.css']
    @css = File.read('#{tmp_dir}/#{css_name}')
  end
end

    
          # Checks the client's masked token to see if it matches the
      # session token.
      def valid_token?(session, token)
        return false if token.nil? || token.empty?
    
          def instrument(env)
        return unless i = options[:instrumenter]
        env['rack.protection.attack'] = self.class.name.split('::').last.downcase
        i.instrument('rack.protection', env)
      end
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
      it 'allows for a custom authenticity token param' do
    mock_app do
      use Rack::Protection::AuthenticityToken, :authenticity_param => 'csrf_param'
      run proc { |e| [200, {'Content-Type' => 'text/plain'}, ['hi']] }
    end
    
      s.add_dependency 'erubis', '~> 2.6'
  s.add_dependency 'thor', '~> 0.19', '>= 0.15.0'
  s.add_dependency 'xdg', '~> 2.2', '>= 2.2.5'
    
        def tmux_split_command
      path = if tab.root?
               '#{Tmuxinator::Config.default_path_option} #{tab.root}'
             end
      '#{project.tmux} splitw #{path} -t #{tab.tmux_window_target}'
    end
    
          def validate(options = {})
        name = options[:name]
        options[:force_attach] ||= false
        options[:force_detach] ||= false
        project_config = options.fetch(:project_config) { false }
        project_file = if valid_project_config?(project_config)
                         project_config
                       elsif valid_local_project?(name)
                         local_project
                       elsif valid_standard_project?(name)
                         project(name)
                       else
                         # This branch should never be reached,
                         # but just in case ...
                         raise NO_PROJECT_FOUND_MSG
                       end
    
          it 'returns true' do
        expect(described_class.shell?).to be_truthy
      end
    end