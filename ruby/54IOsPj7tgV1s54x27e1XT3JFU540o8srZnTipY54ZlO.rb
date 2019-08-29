
        
        # Create a temporary directory where test vagrant will run. The reason we save
# this to a constant is so we can clean it up later.
VAGRANT_TEST_CWD = Dir.mktmpdir('vagrant-test-cwd')
    
        it 'should not be equal if version doesn't match' do
      a = described_class.new('a', :foo, '1.0', directory)
      b = described_class.new('a', :foo, '1.1', directory)
    
        it 'returns false if not installed' do
      expect(machine.communicate).to receive(:test).
        with(command, sudo: true).and_return(false)
      expect(subject.chef_installed(machine, 'chef_solo', version)).to be_falsey
    end
  end
end

    
      describe '#chef_installed' do
    let(:version) { '15.0.0' }
    let(:command) { 'if ((&knife --version) -Match \'15.0.0\'){ exit 0 } else { exit 1 }' }
    
          # Set the default working directory to look for the vagrantfile
      opts[:cwd] ||= ENV['VAGRANT_CWD'] if ENV.key?('VAGRANT_CWD')
      opts[:cwd] ||= Dir.pwd
      opts[:cwd] = Pathname.new(opts[:cwd])
      if !opts[:cwd].directory?
        raise Errors::EnvironmentNonExistentCWD, cwd: opts[:cwd].to_s
      end
      opts[:cwd] = opts[:cwd].expand_path
    
          env = environment.create_vagrant_env
      machine = env.machine(:default, :foo)
      expect(machine.config.ssh.port).to eq(200)
    end
    
          it 'stops the container with the set timeout' do
        expect(subject).to receive(:execute).with('docker', 'stop', '-t', '5', cid)
        subject.stop(cid, 5)
      end
    end
    
            it 'updates the proper box' do
          metadata_url.open('w') do |f|
            f.write(<<-RAW)
      {
        'name': 'foo',
        'versions': [
          {
            'version': '1.0'
          },
          {
            'version': '1.1',
            'providers': [
              {
                'name': 'vmware',
                'url': 'bar'
              }
            ]
          }
        ]
      }
            RAW
          end
    
      def target_uri
    value_or_id(@json['target'])
  end
    
            it 'creates a reblog by sender of status' do
          expect(sender.reblogged?(status)).to be true
        end
      end
    
        <div id='backtrace' class='condensed'>
      <h3>BACKTRACE</h3>
      <p><a href='#' id='expando'
            onclick='toggleBacktrace(); return false'>(expand)</a></p>
      <p id='nav'><strong>JUMP TO:</strong>
         <% unless bad_request?(exception) %>
            <a href='#get-info'>GET</a>
            <a href='#post-info'>POST</a>
         <% end %>
         <a href='#cookie-info'>COOKIES</a>
         <a href='#env-info'>ENV</a>
      </p>
      <div class='clear'></div>
    
    namespace :doc do
  task :readmes do
    Dir.glob 'lib/rack/protection/*.rb' do |file|
      excluded_files = %w[lib/rack/protection/base.rb lib/rack/protection/version.rb]
      next if excluded_files.include?(file)
      doc  = File.read(file)[/^  module Protection(\n)+(    #[^\n]*\n)*/m].scan(/^ *#(?!#) ?(.*)\n/).join('\n')
      file = 'doc/#{file[4..-4].tr('/_', '-')}.rdoc'
      Dir.mkdir 'doc' unless File.directory? 'doc'
      puts 'writing #{file}'
      File.open(file, 'w') { |f| f << doc }
    end
  end
    
        it 'sets a session authenticity token if one does not exist' do
      session = {}
      allow(Rack::Protection::AuthenticityToken).to receive(:random_token).and_return(token)
      allow_any_instance_of(Rack::Protection::AuthenticityToken).to receive(:mask_token).and_return(masked_token)
      Rack::Protection::AuthenticityToken.token(session)
      expect(session[:csrf]).to eq(token)
    end
  end
    
        it 'Reads referrer from Host header when Referer header is relative' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => '/valid'}
      expect(subject.referrer(env)).to eq('foo.com')
    end
    
      describe 'DELETE blocks' do
    it 'updates block from input data' do
      block = create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      delete '/blocks/#{block.id}'
      expect(Block.all.size).to eq(0)
    end
  end
end

    
      describe 'PUT /chat_channel_memberships/:id' do
    before do
      user.add_role(:super_admin)
      post '/chat_channel_memberships', params: {
        chat_channel_membership: { user_id: second_user.id, chat_channel_id: chat_channel.id }
      }
    end
    
      def new?
    true
  end