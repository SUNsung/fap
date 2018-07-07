
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
        puts 'GC Stats:'
    GC.start(full_mark: true, immediate_sweep: false)
    puts JSON.pretty_generate(GC.stat)
  end
end
    
    def file_contents(path)
  return Pathname.new(path).read
end
    
        # Gets/Sets the extension of this layout.
    attr_accessor :ext
    
        def deprecation_checks
      pagination_included = (site.config['plugins'] || []).include?('jekyll-paginate') ||
        defined?(Jekyll::Paginate)
      if site.config['paginate'] && !pagination_included
        Jekyll::Deprecator.deprecation_message 'You appear to have pagination ' \
          'turned on, but you haven't included the `jekyll-paginate` gem. ' \
          'Ensure you have `plugins: [jekyll-paginate]` in your configuration file.'
      end
    end
  end
end

    
        begin
      raise '#{short_type} does not support dry-run' unless can_dry_run?
      readonly!
      @dry_run_started_at = Time.zone.now
      @dry_run_logger.info('Dry Run started')
      if event
        raise 'This agent cannot receive an event!' unless can_receive_events?
        receive([event])
      else
        check
      end
      @dry_run_logger.info('Dry Run finished')
    rescue => e
      @dry_run_logger.info('Dry Run failed')
      error 'Exception during dry-run. #{e.message}: #{e.backtrace.join('\n')}'
    end
    
        respond_to do |format|
      format.html
      format.json { render json: @events }
    end
  end
    
    class Devise::OmniauthCallbacksController < DeviseController
  prepend_before_action { request.env['devise.skip_timeout'] = true }
    
        if resource.errors.empty?
      set_flash_message!(:notice, :confirmed)
      respond_with_navigational(resource){ redirect_to after_confirmation_path_for(resource_name, resource) }
    else
      respond_with_navigational(resource.errors, status: :unprocessable_entity){ render :new }
    end
  end
    
          # Remembers the given resource by setting up a cookie
      def remember_me(resource)
        return if request.env['devise.skip_storage']
        scope = Devise::Mapping.find_scope!(resource)
        resource.remember_me!
        cookies.signed[remember_key(resource, scope)] = remember_cookie_values(resource)
      end
    
        if record.timedout?(last_request_at) &&
        !env['devise.skip_timeout'] &&
        !proxy.remember_me_is_active?(record)
      Devise.sign_out_all_scopes ? proxy.sign_out : proxy.sign_out(scope)
      throw :warden, scope: scope, message: :timeout
    end
    
          # Configure default email options
      def devise_mail(record, action, opts = {}, &block)
        initialize_from_record(record)
        mail headers_for(action, opts), &block
      end
    
            doc
      end
    end
  end
end

    
        uninstall login_item: 'login item name'
    
        on :receive_entity do |entity, sender, recipient_id|
      Person.by_account_identifier(sender).pod.try(:schedule_check_if_needed)
    
          key = DiasporaFederation.callbacks.trigger(:fetch_public_key, person.diaspora_handle)
      expect(key).to be_a(OpenSSL::PKey::RSA)
      expect(key.to_s).to eq(person.serialized_public_key)
    end