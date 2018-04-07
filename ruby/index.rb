
        
            def execute(args)
      topic_id = args[:topic_id]
      raise Discourse::InvalidParameters.new(:topic_id) unless topic_id.present?
    
    class ApplicationSerializer < ActiveModel::Serializer
  embed :ids, include: true
    
      included do
    validate :validate_type
  end
    
      included do
    self.validate :validate_email_options
  end
    
      def complete_option(method)
    if self.respond_to? 'complete_#{method}'.to_sym
      self.send('complete_#{method}'.to_sym)
    end
  end
    
    Note that you will likely need to have opened the app at least
once for any login items to be present.
    
    # Scheduled processing
    
      def as_json(options={})
    {
      poll_id:             id,
      post_id:             status_message.id,
      question:            question,
      poll_answers:        poll_answers,
      participation_count: participation_count
    }
  end
    
          def validation_fail_as_json(e)
        render json: {error: :invalid_client_metadata, error_description: e.message}, status: 400
      end
    
          def accepts?(env)
        cookie_header = env['HTTP_COOKIE']
        cookies = Rack::Utils.parse_query(cookie_header, ';,') { |s| s }
        cookies.each do |k, v|
          if k == session_key && Array(v).size > 1
            bad_cookies << k
          elsif k != session_key && Rack::Utils.unescape(k) == session_key
            bad_cookies << k
          end
        end
        bad_cookies.empty?
      end
    
        it 'accepts #{method} requests with whitelisted Origin' do
      mock_app do
        use Rack::Protection::HttpOrigin, :origin_whitelist => ['http://www.friend.com']
        run DummyApp
      end
      expect(send(method.downcase, '/', {}, 'HTTP_ORIGIN' => 'http://www.friend.com')).to be_ok
    end
  end
end
