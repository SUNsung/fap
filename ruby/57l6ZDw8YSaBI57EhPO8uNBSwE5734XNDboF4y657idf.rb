
        
                it 'does notify' do
          is_expected.to change(Notification, :count)
        end
      end
    end
    
      def set_poll
    @poll = Poll.attached.find(params[:id])
    authorize @poll.status, :show?
  rescue Mastodon::NotPermittedError
    raise ActiveRecord::RecordNotFound
  end
    
      def save
    case action
    when 'unfollow'
      unfollow!
    when 'remove_from_followers'
      remove_from_followers!
    when 'block_domains'
      block_domains!
    when 'approve'
      approve!
    when 'reject'
      reject!
    end
  end
    
      # Default class for inputs
  # config.input_class = nil
    
          it 'ensures recipient is not following sender' do
        expect(recipient.following?(sender)).to be false
      end
    end
  end
end

    
      private
    
        #@posts[:new_public] = Post.where(:type => ['StatusMessage','ActivityStreams::Photo'],
    #                                 :public => true).order('created_at DESC').limit(15).all
    
          def save_params_and_render_consent_form(endpoint)
        @o_auth_application = endpoint.o_auth_application
        @response_type = endpoint.response_type
        @redirect_uri = endpoint.redirect_uri
        @scopes = endpoint.scopes
        save_request_parameters
        @app = UserApplicationPresenter.new @o_auth_application, @scopes
        render :new
      end
    
          def find
        client = Api::OpenidConnect::OAuthApplication.find_by(client_name: params[:client_name])
        if client
          render json: {client_id: client.client_id}
        else
          render json: {error: 'Client with name #{params[:client_name]} does not exist'}
        end
      end
    
        if @contact.present?
      respond_to do |format|
        format.json do
          render json: AspectMembershipPresenter.new(
            AspectMembership.where(contact_id: @contact.id, aspect_id: @aspect.id).first)
          .base_hash
        end
      end
    else
      respond_to do |format|
        format.json do
          render plain: I18n.t('aspects.add_to_aspect.failure'), status: 409
        end
      end
    end
  end
    
        opts = params.require(:message).permit(:text)
    message = current_user.build_message(conversation, opts)
    
    # This is basically a copy of the original bundler 'bundle' shim
# with the addition of the loading of our Bundler patches that
# modify Bundler's caching behaviour.
    
      def warn_local_gems(plugins_with_path)
    puts('Update is not supported for manually defined plugins or local .gem plugin installations, skipping: #{plugins_with_path.join(', ')}')
  end
    
          puts 'Halting #{machines}'
      LogStash::VagrantHelpers.halt(machines, options)
    end
  end
    
            context 'when fetching a gem from rubygems' do
    
        context 'with a specific plugin' do
      let(:plugin_name) { 'logstash-input-stdin' }
      it 'list the plugin and display the plugin name' do
        result = logstash.run_command_in_path('bin/logstash-plugin list #{plugin_name}')
        expect(result).to run_successfully_and_output(/^#{plugin_name}$/)
      end
    
      describe '#old_identifier' do
    let(:source) do
      'alias foo bar'
    end
    
          it { expect(self_class_node.body.begin_type?).to be(true) }
    end
    
          def process_args(args)
        # If there is a trailing hash arg without explicit braces, like this:
        #
        #    method(1, 'key1' => value1, 'key2' => value2)
        #
        # ...then each key/value pair is treated as a method 'argument'
        # when determining where line breaks should appear.
        if (last_arg = args.last)
          if last_arg.hash_type? && !last_arg.braces?
            args = args.concat(args.pop.children)
          end
        end
        args
      end
    
      context 'when a variable is assigned in each branch of if ' \
          'and referenced in the else branch' do
    it 'registers an offense for the assignment in the if branch' do
      expect_offense(<<~RUBY)
        def some_method(flag)
          if flag
            foo = 2
            ^^^ Useless assignment to variable - `foo`.
          else
            foo = 3
            puts foo
          end
        end
      RUBY
    end
  end
    
            check_assignment(node, rhs)
      end
    
            def check_closing_pipe_space(args, closing_pipe)
          last         = args.last.source_range
          last_end_pos = last_end_pos_inside_pipes(last.end_pos)
    
        def URIEncodeSingle(cc, result, index)
      x = (cc >> 12) & 0xF;
      y = (cc >> 6) & 63;
      z = cc & 63;
      octets = Array.new(3);
      if (cc <= 0x007F)
        octets[0] = cc;
      elsif (cc <= 0x07FF)
        octets[0] = y + 192;
        octets[1] = z + 128;
      else
        octets[0] = x + 224;
        octets[1] = y + 128;
        octets[2] = z + 128;
      end
      return URIEncodeOctets(octets, result, index);
    end
    
          def page_name
        @name.gsub('-', ' ')
      end
    
          def page_exists
        @page_exists
      end
    
    # Disable the metadata feature
$METADATA = false
    
      test 'create pages within sub-directories using page file dir' do
    post '/create', :content => 'one two', :page => 'base',
         :path               => 'wiki/Mordor', :format => 'markdown', :message => 'oooh, scary'
    assert_equal 'http://example.org/wiki/Mordor/base', last_response.headers['Location']
    get '/wiki/Mordor/base'
    
      test 'transliteration' do
    # we transliterate only when adapter is grit
    return if defined?(Gollum::GIT_ADAPTER) && Gollum::GIT_ADAPTER != 'grit'
    
            page_dir = settings.wiki_options[:page_file_dir].to_s
        redirect to('/#{clean_url(::File.join(encodeURIComponent(page_dir), encodeURIComponent(path), encodeURIComponent(name)))}')
      rescue Gollum::DuplicatePageError => e
        @message = 'Duplicate page: #{e.message}'
        mustache :error
      end
    end
    
    $TESTING = true
# disable minitest/parallel threads
ENV['N'] = '0'
    
        obj = Helpers.new('HTTP_ACCEPT_LANGUAGE' => 'zh-CN,zh;q=0.8,en-US;q=0.6,en;q=0.4,ru;q=0.2')
    assert_equal 'zh-cn', obj.locale
    
    describe 'job scheduling' do
  describe 'middleware' do
    class SomeScheduledWorker
      include Sidekiq::Worker
      sidekiq_options :queue => :custom_queue
      def perform(x)
      end
    end
    
    @@ layout
<html>
  <head>
    <title>Sinatra + Sidekiq</title>
    <body>
      <%= yield %>
    </body>
</html>
    
            # write header and data to target file.
        target_file.write(header)
        target_file.write(data)
      end
      FileUtils.mv(temporary_file_name, target_path)
    ensure
      file.close()
      target_file.close()
    end
  end