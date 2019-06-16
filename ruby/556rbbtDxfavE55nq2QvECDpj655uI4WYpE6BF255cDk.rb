
        
          protected
    
        def reset_password_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :reset_password_instructions, opts)
    end
    
          private
    
        unless env['devise.skip_trackable']
      warden.session(scope)['last_request_at'] = Time.now.utc.to_i
    end
  end
end

    
        # Return modules for the mapping.
    def modules
      @modules ||= to.respond_to?(:devise_modules) ? to.devise_modules : []
    end
    
      def maxwidth_or_default
    (params[:maxwidth].presence || 400).to_i
  end
    
      before_action :require_user!
    
        define_method provider do
      @user = User.find_for_oauth(request.env['omniauth.auth'], current_user)
    
      def apply_header_remaining
    response.headers['X-RateLimit-Remaining'] = rate_limit_remaining
  end
    
      private
    
          # Returns an array of all the when branches in the `case` statement.
      #
      # @return [Array<WhenNode>] an array of `when` nodes
      def when_branches
        node_parts[1...-1]
      end
    
            def delimiter_delta
          return 0 if first.same_line?(second)
          return 0 if first.delimiter != second.delimiter
    
            private
    
            field_options.merge!(readonly: options[:readonly],
                             disabled: options[:disabled],
                             size: options[:size])
      end
    
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
    
        args.flatten!.compact!