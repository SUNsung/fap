
        
        describe GivenDailyLike do
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for Staff category!'
        end
    
        def team
      'team'
    end
  end
    
            def name
          @name ||= get_info(:name) || '#{get_info(:first_name)} #{get_info(:last_name)}'
        end
    
          def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
            def raw_coverage
          return unless @pipeline
    
    # include would include the module in Object
# extend only extends the `main` object
extend Sinatra::Delegator
    
          def call(env)
        status, headers, body = @app.call(env)
        header = options[:report_only] ? 'Content-Security-Policy-Report-Only' : 'Content-Security-Policy'
        headers[header] ||= csp_policy if html? headers
        [status, headers, body]
      end
    end
  end
end

    
          def has_vector?(request, headers)
        return false if request.xhr?
        return false if options[:allow_if] && options[:allow_if].call(request.env)
        return false unless headers['Content-Type'].to_s.split(';', 2).first =~ /^\s*application\/json\s*$/
        origin(request.env).nil? and referrer(request.env) != request.host
      end