
        
                include ::EachBatch
      end
    
              def nodes
            @path.count('/')
          end
    
              def metadata(metadata)
            @metadata.merge!(metadata)
            self
          end
    
              def self.default
          end
    
        # The path used after confirmation.
    def after_confirmation_path_for(resource_name, resource)
      if signed_in?(resource_name)
        signed_in_root_path(resource)
      else
        new_session_path(resource_name)
      end
    end
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
        include Devise::Controllers::StoreLocation
    
        def replace(index, name)
      @filters[assert_index(index)] = filter_const(name)
    end
    
        def document?
      @content =~ DOCUMENT_RGX
    end
    
        def self.run(urls, options = {}, &block)
      urls = urls.dup
      requester = new(options)
      requester.on_response(&block) if block
      requester.on_response do # cheap hack to ensure root page is processed first
        if urls
          requester.request(urls)
          urls = nil
        end
      end
      requester.request(urls.shift)
      requester.run
      requester
    end
    
          str.truncate(max_length).ljust(max_length) << tag.to_s
    end
    
            css('.filetree').each do |node|
          node.content = node.css('.file').map(&:inner_html).join('\n')
          node.name = 'pre'
          node.remove_attribute('class')
        end
    
            css('pre > code').each do |node|
          node['class'] ||= ''
          lang = if node['class'].include?('lang-html') || node.content =~ /\A</
            'html'
          elsif node['class'].include?('lang-css')
            'css'
          elsif node['class'].include?('lang-js') || node['class'].include?('lang-javascript')
            'javascript'
          end
          node.parent['data-language'] = lang if lang
    
          new_email = resource_params.fetch(:unconfirmed_email)
    
        def resend
      authorize @user, :confirm?
    
            if params[:create_and_unresolve]
          @report.unresolve!
          log_action :reopen, @report
        end
    
      def status_finder
    StatusFinder.new(params[:url])
  end
    
      def show
    render_cached_json('api:v1:instances:activity:show', expires_in: 1.day) { activity }
  end