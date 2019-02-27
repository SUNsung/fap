
        
                def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          WRITE_IF_GREATER_SCRIPT = <<-EOF.strip_heredoc.freeze
      local key, value, ttl = KEYS[1], tonumber(ARGV[1]), ARGV[2]
      local existing = tonumber(redis.call('get', key))
    
          attr_reader :octokit
    
            def importer_class
          DiffNoteImporter
        end
    
            def sidekiq_worker_class
          ImportIssueWorker
        end
    
              Gitlab::Git
            .diff_line_code(file_path, diff_line.new_pos, diff_line.old_pos)
        end
    
            # Builds a user from a GitHub API response.
        #
        # user - An instance of `Sawyer::Resource` containing the user details.
        def self.from_api_response(user)
          new(id: user.id, login: user.login)
        end
    
          it 'deactivates an existing user' do
        visit admin_users_path
        expect(page).to have_no_text('inactive')
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/deactivate']').click
        expect(page).to have_text('inactive')
        users(:bob).reload
        expect(users(:bob)).not_to be_active
      end
    
        it 'html_safes the output unless :skip_safe is passed in' do
      expect(Utils.jsonify({:foo => 'bar'})).to be_html_safe
      expect(Utils.jsonify({:foo => 'bar'}, :skip_safe => false)).to be_html_safe
      expect(Utils.jsonify({:foo => 'bar'}, :skip_safe => true)).not_to be_html_safe
    end
  end
    
      def page_requested?
    params[:page] == 'true'
  end
    
        private
    
            render template: 'admin/reports/show'
      end
    end
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
      def verify_payload?
    payload.present? && VerifySalmonService.new.call(payload)
  end
    
      respond_to :json
    
        render json: @web_subscription, serializer: REST::WebPushSubscriptionSerializer
  end
    
          if @user.persisted?
        sign_in_and_redirect @user, event: :authentication
        set_flash_message(:notice, :success, kind: provider_id.capitalize) if is_navigational_format?
      else
        session['devise.#{provider}_data'] = request.env['omniauth.auth']
        redirect_to new_user_registration_url
      end
    end
  end
    
    module ExportControllerConcern
  extend ActiveSupport::Concern
    
        def URIEncodePair(cc1, cc2, result, index)
      u = ((cc1 >> 6) & 0xF) + 1;
      w = (cc1 >> 2) & 0xF;
      x = cc1 & 3;
      y = (cc2 >> 6) & 0xF;
      z = cc2 & 63;
      octets = Array.new(4);
      octets[0] = (u >> 2) + 240;
      octets[1] = (((u & 3) << 4) | w) + 128;
      octets[2] = ((x << 4) | y) + 128;
      octets[3] = z + 128;
      return URIEncodeOctets(octets, result, index);
    end
    
          def page_name
        @name.gsub('-', ' ')
      end
    
          def content
        content_without_page_header(@content)
      end
    
      test 'extracting paths from URLs' do
    assert_nil extract_path('Eye-Of-Sauron')
    assert_equal 'Mordor', extract_path('Mordor/Sauron')
    assert_equal 'Mordor/Sauron', extract_path('Mordor/Sauron/Evil')
  end
    
    if options[:irb]
  require 'irb'
  # http://jameskilton.com/2009/04/02/embedding-irb-into-your-ruby-application/
  module IRB # :nodoc:
    def self.start_session(binding)
      unless @__initialized
        args = ARGV
        ARGV.replace(ARGV.dup)
        IRB.setup(nil)
        ARGV.replace(args)
        @__initialized = true
      end