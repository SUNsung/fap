
        
            # DEPRECATED.
    def fix_common_issues
      self
    end
    
          def convert(content)
        document = Kramdown::Document.new(content, @config)
        html_output = document.to_html.chomp
        if @config['show_warnings']
          document.warnings.each do |warning|
            Jekyll.logger.warn 'Kramdown warning:', warning.sub(%r!^Warning:\s+!, '')
          end
        end
        html_output
      end
    end
  end
end

    
      def destroy_all
    Delayed::Job.where(locked_at: nil).delete_all
    
        def initialize(username, domain)
      @username = username
      @domain = domain
    end
    
      task :ensure_id_sequences_exist do
    each_schema_load_environment do
      Mastodon::Snowflake.ensure_id_sequences_exist
    end
  end
end

    
      def type
    'Emoji'
  end
    
        it 'tracks when sign in is older than one day' do
      user.update(current_sign_in_at: 2.days.ago)
      sign_in user, scope: :user
      get :show
    
          private