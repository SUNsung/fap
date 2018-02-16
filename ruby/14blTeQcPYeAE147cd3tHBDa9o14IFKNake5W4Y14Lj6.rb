
        
            def to_json
      JSON.generate(as_json)
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
        def normalized_path
      path == '' ? '/' : path
    end
    
      def preview_url
    if object.needs_redownload?
      media_proxy_url(object.id, :small)
    else
      full_asset_url(object.file.url(:small))
    end
  end
    
      def show
    @tag = Tag.find_by!(name: params[:id].downcase)
    
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

    
    describe Settings::NotificationsController do
  render_views
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
          rescue_from Rack::OAuth2::Server::Authorize::BadRequest,
                  JSON::JWT::InvalidFormat, JSON::JWK::UnknownAlgorithm do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_request, error_description: e.message, status: 400}
      end
      rescue_from JSON::JWT::VerificationFailed do |e|
        logger.info e.backtrace[0, 10].join('\n')
        render json: {error: :invalid_grant, error_description: e.message, status: 400}
      end
    end
  end
end

    
        def cropping dst, ratio, scale
      if ratio.horizontal? || ratio.square?
        '%dx%d+%d+%d' % [ dst.width, dst.height, 0, (self.height * scale - dst.height) / 2 ]
      else
        '%dx%d+%d+%d' % [ dst.width, dst.height, (self.width * scale - dst.width) / 2, 0 ]
      end
    end
    
            def has_column?
          @subject.column_names.include?('#{@attachment_name}_file_name')
        end
      end
    end
  end
end

    
            def failure_message_when_negated
          'Attachment #{@attachment_name} cannot be between #{@low} and #{@high} bytes'
        end
        alias negative_failure_message failure_message_when_negated
    
          expect('.all-buttons-hover').to have_ruleset(ruleset)
    end
  end
end

    
    describe 'padding' do
  before(:all) do
    ParserSupport.parse_file('library/padding')
  end
    
          expect('.position-implied-left').to have_ruleset(ruleset)
    end
  end