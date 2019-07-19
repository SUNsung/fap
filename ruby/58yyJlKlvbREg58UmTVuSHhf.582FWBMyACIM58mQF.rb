
        
        helpers do
  # Returns a segment tracking ID such that local development is not
  # tracked to production systems.
  def segmentId()
    if (ENV['ENV'] == 'production')
      'wFMyBE4PJCZttWfu0pNhYdWr7ygW0io4'
    else
      '0EXTgkNx0Ydje2PGXVbRhpKKoe5wtzcE'
    end
  end
    
            def verify_binary(binary)
          # Checks for the existence of chef binary and error if it
          # doesn't exist.
          if windows?
            command = 'if ((&'#{binary}' -v) -Match 'Chef*'){ exit 0 } else { exit 1 }'
          else
            command = 'sh -c 'command -v #{binary}''
          end
    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'test -x /opt/chef_solo/bin/knife&& /opt/chef_solo/bin/knife --version | grep '15.0.0'' }
    
        it 'returns true if installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(true)
      subject.chef_installed(machine, 'chef_solo', version)
    end
    
    # Disable checkpoint
Checkpoint.disable!

    
        it 'raises an exception if docker is not available' do
      allow(VagrantPlugins::DockerProvider::Driver).to receive(:new).and_return(driver_obj)
      allow(provider_config).to receive(:compose).and_return(false)
      allow(platform).to receive(:windows?).and_return(false)
      allow(platform).to receive(:darwin?).and_return(false)
    
          env[:box_name] = 'foo'
      env[:box_url] = box_path.to_s
      env[:box_version] = '1'
    
        it 'should sort them in order of name, version, provider' do
      a = described_class.new('a', :foo, '1.0', directory)
      b = described_class.new('a', :foo2, '1.0', directory)
      c = described_class.new('a', :foo2, '1.1', directory)
      d = described_class.new('b', :foo2, '1.0', directory)
    
              begin
            if action.is_a?(Proc)
              action.call(machine)
            else
              machine.send(:action, action, options)
            end
          rescue Exception => e
            # If we're not parallelizing, then raise the error. We also
            # don't raise the error if we've forked, because it'll hang
            # the process.
            raise if !par && Process.pid == start_pid
    
          expect { described_class.exec(ssh_info) }.
        to raise_error Vagrant::Errors::SSHUnavailableWindows
    end
    
          def execute
        options = {}
    
          spec['version'] = Bootstrap::VERSION
    
        def str_to_byte_pos(pos)
      @s.string.slice(0, pos).bytesize
    end
  end
end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
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
    
    MESSAGE
      end
    end
  end
end

    
          def partial(name)
        if name == :author_template
          self.class.partial('history_authors/#{@wiki.user_icons}')
        else
          super
        end
      end
    
        assert_no_match /Edit/, last_response.body, ''Edit' link not blocked in history template'
    
    
    
    context 'Precious::Views::LatestChanges' do
  include Rack::Test::Methods
  
  def app
    Precious::App
  end
  
  setup do
    @path = cloned_testpath('examples/lotr.git')
    @wiki = Gollum::Wiki.new(@path)
    Precious::App.set(:gollum_path, @path)
    Precious::App.set(:wiki_options, {:latest_changes_count => 10})
  end
    
        class MapGollum
      def initialize(base_path)
        @mg = Rack::Builder.new do
          
          map '/#{base_path}' do
            run Precious::App
          end
          map '/' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          map '/*' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          
        end
      end
    
        it 'returns nil if an except is provided' do
      valid_article = create(:article, tags: 'explainlikeimfive')
      expect(described_class.new(valid_article, 'explainlikeimfive').tag).to eq(nil)
    end
    
          it 'renders to appropriate if article belongs to org' do
        article.update(organization_id: create(:organization).id)
        get article.path
        expect(response.body).to include CGI.escapeHTML(article.title)
      end
    
        context 'when amount is 10 dollars' do
      it 'adds level_2_member role' do
        valid_instance(user_one, 1000).subscribe_customer
        expect(user_one.has_role?(:level_2_member)).to eq(true)
      end
    end