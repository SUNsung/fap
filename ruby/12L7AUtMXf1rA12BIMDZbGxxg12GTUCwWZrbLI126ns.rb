
        
            def slug
      @slug ||= subpath.sub(/\A\//, '').remove(/\.html\z/)
    end
    
            css('.filetree .children').each do |node|
          node.css('.file').each do |n|
            n.content = '  #{n.content}'
          end
        end
    
            # Remove examples
        css('.runnable-example').each do |node|
          node.parent.remove
        end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
    # Each time a record is set we check whether its session has already timed out
# or not, based on last request time. If so, the record is logged out and
# redirected to the sign in page. Also, each time the request comes and the
# record is set, we set the last request time inside its scoped session to
# verify timeout in the following request.
Warden::Manager.after_set_user do |record, warden, options|
  scope = options[:scope]
  env   = warden.request.env
    
        def default_controllers(options)
      mod = options[:module] || 'devise'
      @controllers = Hash.new { |h,k| h[k] = '#{mod}/#{k}' }
      @controllers.merge!(options[:controllers]) if options[:controllers]
      @controllers.each { |k,v| @controllers[k] = v.to_s }
    end
    
        def form_status_batch_params
      params.require(:form_status_batch).permit(status_ids: [])
    end
    
      def show
    @status = status_finder.status
    render json: @status, serializer: OEmbedSerializer, width: maxwidth_or_default, height: maxheight_or_default
  end
    
          weeks << {
        week: week.to_time.to_i.to_s,
        statuses: Redis.current.get('activity:statuses:local:#{week_id}') || '0',
        logins: Redis.current.pfcount('activity:logins:#{week_id}').to_s,
        registrations: Redis.current.get('activity:accounts:local:#{week_id}') || '0',
      }
    end
    
      def show
    raise ActiveRecord::RecordNotFound if @web_subscription.nil?
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
    Then(/^references in the remote repo are listed$/) do
  expect(@output).to include('refs/heads/master')
end
    
            @response = (gets || '').chomp
      end