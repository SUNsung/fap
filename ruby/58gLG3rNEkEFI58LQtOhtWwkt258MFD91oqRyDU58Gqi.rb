
        
          protected
    
        if options['recipients'].present?
      emails = options['recipients']
      emails = [emails] if emails.is_a?(String)
      unless emails.all? { |email| email =~ Devise.email_regexp || email =~ /\{/ }
        errors.add(:base, ''when provided, 'recipients' should be an email address or an array of email addresses')
      end
    end
  end
    }
    
      def tumblr_consumer_secret
    ENV['TUMBLR_OAUTH_SECRET']
  end
    
      def destroy
    @services = current_user.services.find(params[:id])
    @services.destroy
    
        def log_processed(name)
      puts green '    #{name}'
    end
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
    if $0 == __FILE__
  $:.unshift File.expand_path('../../lib', __FILE__)
end
    
            private
    
            END_OF_OUTPUT_SIGNAL = '\n\r'.freeze
    
                report.pods_by_error.each do |message, versions_by_name|
              UI.puts '-> #{message}'.red
              versions_by_name.each { |name, versions| UI.puts '  - #{name} (#{versions * ', '})' }
              UI.puts
            end