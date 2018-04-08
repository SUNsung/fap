
        
            def types
      const_get(:TYPES).map(&:constantize)
    end
    
        def cron(*args, &blk)
      schedule(:cron, args, &blk)
    end
    
      def destroy
    @job = Delayed::Job.find(params[:id])
    
      def process_status_params
    {
      uri: @object['id'],
      url: object_url || @object['id'],
      account: @account,
      text: text_from_content || '',
      language: detected_language,
      spoiler_text: @object['summary'] || '',
      created_at: @options[:override_timestamps] ? nil : @object['published'],
      reply: @object['inReplyTo'].present?,
      sensitive: @object['sensitive'] || false,
      visibility: visibility_from_audience,
      thread: replied_to_status,
      conversation: conversation_from_uri(@object['conversation']),
      media_attachment_ids: process_attachments.take(4).map(&:id),
    }
  end
    
            render json: collection_presenter,
               serializer: ActivityPub::CollectionSerializer,
               adapter: ActivityPub::Adapter,
               content_type: 'application/activity+json'
      end
    end
  end
    
        context 'when tag exists' do
      it 'returns http success' do
        get :show, params: { id: 'test', max_id: late.id }
        expect(response).to have_http_status(:success)
      end
    
          expect(response).to redirect_to(settings_preferences_path)
      user.reload
      expect(user.settings['boost_modal']).to be true
      expect(user.settings['delete_modal']).to be false
    end
  end
end

    
        def insert_default_vars(scss)
      log_transform
      scss.gsub(/^(\$.+);/, '\1 !default;')
    end
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
            self.summary = 'The repl listens to commands on standard input'
        self.description = <<-DESC
          The repl listens to commands on standard input and prints their
          result to standard output.
          It accepts all the other ipc subcommands. The repl will signal the
          end of output with the the ASCII CR+LF `\\n\\r`.
        DESC
    
            extend Executable
        executable :git