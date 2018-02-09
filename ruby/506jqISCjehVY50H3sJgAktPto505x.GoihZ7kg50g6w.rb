
        
            def self.parse(url)
      return url if url.kind_of? self
      new(*PARSER.split(url), PARSER)
    end
    
    def list_login_items_for_app(app_path)
  out, err, status = Open3.capture3(
    '/usr/bin/osascript', '-e',
    'tell application \'System Events\' to get the name of every login item ' \
    'whose path contains \'#{File.basename(app_path)}\''
  )
  if status.exitstatus > 0
    $stderr.puts err
    exit status.exitstatus
  end
  puts out.gsub(', ', '\n')
end
    
              retry
        end
      end
    end
  end
    
          it 'processes payload with sender if no signature exists' do
        expect_any_instance_of(ActivityPub::LinkedDataSignature).not_to receive(:verify_account!)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), forwarder, instance_of(Hash))
    
      def collection_presenter
    page = ActivityPub::CollectionPresenter.new(
      id: account_followers_url(@account, page: params.fetch(:page, 1)),
      type: :ordered,
      size: @account.followers_count,
      items: @follows.map { |f| ActivityPub::TagManager.instance.uri_for(f.account) },
      part_of: account_followers_url(@account),
      next: page_url(@follows.next_page),
      prev: page_url(@follows.prev_page)
    )
    if params[:page].present?
      page
    else
      ActivityPub::CollectionPresenter.new(
        id: account_followers_url(@account),
        type: :ordered,
        size: @account.followers_count,
        first: page
      )
    end
  end
end

    
          format.json do
        render json: collection_presenter,
               serializer: ActivityPub::CollectionSerializer,
               adapter: ActivityPub::Adapter,
               content_type: 'application/activity+json'
      end
    end
  end
    
      def icon
    object.image
  end
    
        HTTP.get(source).to_s.split('\n').each do |line|
      next if line.start_with? '#'
      parts = line.split(';').map(&:strip)
      next if parts.size < 2
      codes << [parts[0], parts[1].start_with?('fully-qualified')]
    end
    
      #forward some requests to status message, because a poll is just attached to a status message and is not sharable itself
  delegate :author_id, :diaspora_handle, :public?, :subscribers, to: :status_message
    
          private
    
          def all_gem_names
        core_gem_names + plugin_gem_names
      end
    
        # @abstract
    #
    # Update the clone on the deployment target
    #
    # @return void
    #
    def update
      raise NotImplementedError, 'Your SCM strategy module should provide a #update method'
    end
    
          describe 'using the :port property' do
        it 'takes precedence over in the host string' do
          dsl.server 'db@example1.com:9090', roles: %w{db}, active: true, port: 1234
          expect(subject).to eq('db@example1.com:1234')
        end
      end
    end
  end