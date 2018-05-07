
        
            def find_local(username)
      find_remote(username, nil)
    end
    
        if test_conf['database']&.present?
      ActiveRecord::Base.establish_connection(:test)
      yield
      ActiveRecord::Base.establish_connection(Rails.env.to_sym)
    end
  end
    
      has_one :icon, serializer: ActivityPub::ImageSerializer
    
      end
    
          def fetch_public_key_from_json(string, jwt)
        json = JSON.parse(string)
        keys = json['keys']
        public_key = get_key_from_kid(keys, jwt.header['kid'])
        public_key
      end
    
          # Override `Kernel#puts` to prepend four spaces to each line.
      def puts(string=nil)
        $stdout.puts(string.to_s.gsub(/^/, '    '))
      end
    
      # Implemented by subclasses to hook into Capistrano's deployment flow using
  # using the `before` and `after` DSL methods. Note that `register_hooks` will
  # not be called if the user has opted-out of hooks when installing the plugin.
  #
  # Example:
  #
  #   def register_hooks
  #     after 'deploy:updated', 'my_plugin:do_something'
  #   end
  #
  def register_hooks; end
    
    desc 'Deploy a new release.'
task :deploy do
  set(:deploying, true)
  %w{ starting started
      updating updated
      publishing published
      finishing finished }.each do |task|
    invoke 'deploy:#{task}'
  end
end
task default: :deploy

    
      entries.each do |entry|
    if File.exist?(entry[:file])
      warn '[skip] #{entry[:file]} already exists'
    else
      File.open(entry[:file], 'w+') do |f|
        f.write(ERB.new(File.read(entry[:template])).result(binding))
        puts I18n.t(:written_file, scope: :capistrano, file: entry[:file])
      end
    end
  end
    
            it 'roles defined using the `role` syntax are included' do
          as = dsl.roles(:app).map { |server| '#{server.user}@#{server.hostname}:#{server.port}' }
          expect(as.size).to eq(2)
          expect(as[0]).to eq('deployer@example1.com:1234')
          expect(as[1]).to eq('@example1.com:5678')
        end
      end
    end
    
    module Jekyll
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
    end