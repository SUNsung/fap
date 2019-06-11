
        
            self.listener.start
  end
    
              # Decodes the msg_type from an OpenSSL::ASN1::ASN1Data
          #
          # @param input [OpenSSL::ASN1::ASN1Data] the input to decode from
          # @return [Integer]
          def decode_msg_type(input)
            input.value[0].value.to_i
          end
    
      def process_bootstrap
    log_status 'Convert Bootstrap LESS to Sass'
    puts ' repo   : #@repo_url'
    puts ' branch : #@branch_sha #@repo_url/tree/#@branch'
    puts ' save to: #{@save_to.to_json}'
    puts ' twbs cache: #{@cache_path}'
    puts '-' * 60
    
      # Show full error reports and disable caching.
  config.consider_all_requests_local       = true
  config.action_controller.perform_caching = false
    
      # Setup the root logger with the Rails log level and the desired set of
  # appenders. The list of appenders to use should be set in the environment
  # specific configuration file.
  #
  # For example, in a production application you would not want to log to
  # STDOUT, but you would want to send an email for 'error' and 'fatal'
  # messages:
  #
  # => config/environments/production.rb
  #
  #     config.log_to = %w[file email]
  #
  # In development you would want to log to STDOUT and possibly to a file:
  #
  # => config/environments/development.rb
  #
  #     config.log_to = %w[stdout file]
  #
  Logging.logger.root.appenders = config.log_to unless config.log_to.empty?
    
      def remove_duplicates
    where = 'WHERE s1.user_id = s2.user_id AND s1.shareable_id = s2.shareable_id AND '\
      's1.shareable_type = s2.shareable_type AND s1.id > s2.id'
    if AppConfig.postgres?
      execute('DELETE FROM share_visibilities AS s1 USING share_visibilities AS s2 #{where}')
    else
      execute('DELETE s1 FROM share_visibilities s1, share_visibilities s2 #{where}')
    end
  end
end

    
          get :index, params: {conversation_id: @conv1.id}
      save_fixture(html_for('body'), 'conversations_read')
    end
  end
    
      describe '#new' do
    before do
      sign_in alice, scope: :user
    end
    
      describe '#index' do
    before do
      @message = alice.post(:status_message, text: 'hey', to: @alices_aspect.id)
    end
    
          it 'returns reshares without login' do
        bob.reshare!(@post)
        sign_out :user
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body).map {|h| h['id'] }).to match_array(@post.reshares.map(&:id))
      end
    end
  end
end

    
      def create
    @broadcast = Broadcast.new(broadcast_params)
    redirect_to '/internal/broadcasts'
  end
    
      context 'hook value is string' do
    before { project.yaml[hook_name] = 'echo 'on hook'' }
    
      it 'creates an instance' do
    expect(subject).to be_a(Tmuxinator::Pane)
  end
    
        context 'as number' do
      it 'will gracefully handle a name given as a number' do
        rendered = project_with_number_as_name
        expect(rendered.name.to_i).to_not equal 0
      end
    end
    
      'echo '#{standard_options.join('\n')}''
end

    
        before do
      allow(described_class).to receive(:environment?).and_return false
      allow(described_class).to receive(:xdg).and_return fixtures_dir
      allow(described_class).to receive(:home).and_return fixtures_dir
    end