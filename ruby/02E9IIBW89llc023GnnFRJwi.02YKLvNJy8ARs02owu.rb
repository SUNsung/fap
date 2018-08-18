
        
            def build_for_type(type, user, attributes = {})
      attributes.delete(:type)
    
        if options['recipients'].present?
      emails = options['recipients']
      emails = [emails] if emails.is_a?(String)
      unless emails.all? { |email| email =~ Devise.email_regexp || email =~ /\{/ }
        errors.add(:base, ''when provided, 'recipients' should be an email address or an array of email addresses')
      end
    end
  end
    }
    
      def index
    set_table_sort sorts: %w[provider name global], default: { provider: :asc }
    
      OVERRIDE_FIELDS_ON_FB_UPDATE = [:contact_id, :person_id, :request_id, :invitation_id, :photo_url, :name, :username]
  MAX_CHARACTERS = 63206
    
        it 'returns nil when the post has no facebook_id' do
      expect(@service.post_opts(@post)).to be_nil
    end
  end
    
          respond_with do |format|
        format.html do
          gon.preloads[:pods] = pods_json
          gon.unchecked_count = Pod.unchecked.count
          gon.version_failed_count = Pod.version_failed.count
          gon.error_count = Pod.check_failed.count
    
      def dashboard
    gon.push(pod_version: pod_version)
  end
    
        def handle_gist_redirecting(data)
      redirected_url = data.header['Location']
      if redirected_url.nil? || redirected_url.empty?
        raise ArgumentError, 'GitHub replied with a 302 but didn't provide a location in the response headers.'
      end
    
    module Jekyll
    
          origin = caller[1]
      if origin =~ /rubygems\/custom_require/
        origin = caller[3]
        if origin.nil?
          STDERR.puts 'Unknown origin'
          STDERR.puts caller.join('\n')
        end
      end
      origin = origin.gsub(/:[0-9]+:in .*/, '') if origin