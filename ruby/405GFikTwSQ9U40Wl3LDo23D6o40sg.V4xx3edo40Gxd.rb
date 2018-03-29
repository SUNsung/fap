  def url_redirect_with_status
    redirect_to('http://www.example.com', status: :moved_permanently)
  end
    
            adapter = adapter.camelize
        adapter = 'PostgreSQL' if adapter == 'Postgresql'
        'ActionCable::SubscriptionAdapter::#{adapter}'.constantize
      end
    end
  end
end

    
                    on.unsubscribe do |chan, count|
                  if count == 0
                    @subscription_lock.synchronize do
                      @raw_client = nil
                    end
                  end
                end
              end
            end
          end
    
        # Returns +text+ wrapped at +len+ columns and indented +indent+ spaces.
    # By default column length +len+ equals 72 characters and indent
    # +indent+ equal two spaces.
    #
    #   my_text = 'Here is a sample text with more than 40 characters'
    #
    #   format_paragraph(my_text, 25, 4)
    #   # => '    Here is a sample text with\n    more than 40 characters'
    def format_paragraph(text, len = 72, indent = 2)
      sentences = [[]]
    
            def restore_test_deliveries
          restore_delivery_method
          ActionMailer::Base.perform_deliveries = @old_perform_deliveries
        end
    
          def create_mailer_file
        template 'mailer.rb', File.join('app/mailers', class_path, '#{file_name}_mailer.rb')
    
            def generate_confirmation_token!
          generate_confirmation_token && save(validate: false)
        end
    
      # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
    class Devise::UnlocksController < DeviseController
  prepend_before_action :require_no_authentication
    
    2) You are testing a Devise controller bypassing the router.
   If so, you can explicitly tell Devise which mapping to use:
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
        def types
      const_get(:TYPES).map(&:constantize)
    end
    
    class Agents::ExampleAgent < Agent
  include LongRunnable
    
        respond_to do |format|
      if !running? && @job.update_attributes!(run_at: Time.now, failed_at: nil)
        format.html { redirect_to jobs_path, notice: 'Job enqueued.' }
        format.json { render json: @job, status: :ok }
      else
        format.html { redirect_to jobs_path, alert: 'Can not enqueue a running job.' }
        format.json { render json: @job.errors, status: :unprocessable_entity }
      end
    end
  end
    
        @services = current_user.services.reorder(table_sort).page(params[:page])
    
        # Validates that {#boundary} is {#valid_ip_or_range? a valid IP address or
    # IP address range}. Due to this not being tested before it was moved here
    # from Mdm, the default workspace does not validate. We always validate boundaries
    # and a workspace may have a blank default boundary.
    #
    # @return [void]
    def boundary_must_be_ip_range
      unless boundary.blank?
        begin
          boundaries = Shellwords.split(boundary)
        rescue ArgumentError
          boundaries = []
        end
    
          when :bye
        sessions.delete(s[:session])
    
          case matched
      when :webhost
        sessions[s[:session]].merge!({k => matches})
        if(s[:get])
          print_status('HTTP GET: #{s[:session]} http://#{s[:webhost]}#{s[:get]}')
          sessions.delete(s[:session])
          return
        end
      when nil
        # No matches, no saved state
      end # end case matched
    end # end of each_key
  end # end of parse
end # end of URL sniffer
    
    clsCreateJar._invoke('createJarArchive', 'Ljava.io.File;[Ljava.io.File;', fileOutJar, filesIn)
    
            def print_version
          output_pipe.puts 'version: '#{Pod::VERSION}''
        end
    
        it 'Returns nil when Referer header is missing and allow_empty_referrer is false' do
      env = {'HTTP_HOST' => 'foo.com'}
      subject.options[:allow_empty_referrer] = false
      expect(subject.referrer(env)).to be_nil
    end
    
          temp_file = File.open('_escaped_params_tmp_file', 'w')
      begin
        temp_file.write('hello world')
        temp_file.close
    
      it 'should not override the header if already set' do
    mock_app with_headers('X-Frame-Options' => 'allow')
    expect(get('/', {}, 'wants' => 'text/html').headers['X-Frame-Options']).to eq('allow')
  end
end

    
          session = {:foo => :bar}
      get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'a'
      get '/', {}, 'rack.session' => session, 'HTTP_USER_AGENT' => 'b'
      expect(session[:foo]).to eq :bar
    end