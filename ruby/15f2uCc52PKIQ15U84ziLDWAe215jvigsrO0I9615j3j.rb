
        
          def help
    Helper.instance
  end
    
          def rss_request?
        current_request.path.ends_with?('.atom') || current_request.format.atom?
      end
    
              <<-SQL.strip_heredoc
            (CASE
              WHEN (#{builds}) = (#{skipped}) AND (#{warnings}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{skipped}) THEN #{STATUSES[:skipped]}
              WHEN (#{builds}) = (#{success}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{created}) THEN #{STATUSES[:created]}
              WHEN (#{builds}) = (#{success}) + (#{skipped}) THEN #{STATUSES[:success]}
              WHEN (#{builds}) = (#{success}) + (#{skipped}) + (#{canceled}) THEN #{STATUSES[:canceled]}
              WHEN (#{builds}) = (#{created}) + (#{skipped}) + (#{pending}) THEN #{STATUSES[:pending]}
              WHEN (#{running}) + (#{pending}) > 0 THEN #{STATUSES[:running]}
              WHEN (#{manual}) > 0 THEN #{STATUSES[:manual]}
              WHEN (#{created}) > 0 THEN #{STATUSES[:running]}
              ELSE #{STATUSES[:failed]}
            END)
          SQL
        end
      end
    
        if resource.errors.empty?
      set_flash_message! :notice, :unlocked
      respond_with_navigational(resource){ redirect_to after_unlock_path_for(resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']