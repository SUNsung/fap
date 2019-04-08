
        
              def perform(start_id, stop_id)
        update = '
          latest_merge_request_diff_id = (
            SELECT MAX(id)
            FROM merge_request_diffs
            WHERE merge_requests.id = merge_request_diffs.merge_request_id
          )'.squish
    
            def collection_method
          :issues_comments
        end
    
          # Imports all the objects in sequence in the current thread.
      def sequential_import
        each_object_to_import do |object|
          repr = representation_class.from_api_response(object)
    
            attr_reader :attributes
    
            # attributes - A Hash containing the user details. The keys of this
        #              Hash (and any nested hashes) must be symbols.
        def initialize(attributes)
          @attributes = attributes
        end
      end
    end
  end
end

    
          if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
      def hub_callback
    params['hub.callback']
  end
    
      private
    
            expect(path).to have_valid_bash_syntax
      end
    end
  end
end

    
      describe '#userpaths?' do
    it 'returns true if the environment contains :userpaths' do
      env << :userpaths
      expect(env).to use_userpaths
    end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
    Liquid::Template.register_tag('include_code', Jekyll::IncludeCodeTag)

    
      class VideoTag < Liquid::Tag
    @video = nil
    @poster = ''
    @height = ''
    @width = ''
    
      def organization
    @organization ||= current_user.organizations_scope.find_by_permalink!(params[:org_permalink])
  end
    
      before_action { @server = organization.servers.present.find_by_permalink!(params[:server_id]) }
  before_action { params[:id] && @http_endpoint = @server.http_endpoints.find_by_uuid!(params[:id]) }
    
      def destroy
    @ip_pool_rule.destroy
    redirect_to_with_json [organization, @server, :ip_pool_rules]
  end
    
      def update
    if @smtp_endpoint.update(safe_params)
      redirect_to_with_json [organization, @server, :smtp_endpoints]
    else
      render_form_errors 'edit', @smtp_endpoint
    end
  end
    
      def verify
    if request.post?
      if params[:code].to_s.strip == current_user.email_verification_token.to_s || (Rails.env.development? && params[:code].to_s.strip == '123456')
        current_user.verify!
        redirect_to_with_json [:return_to, root_path], :notice => 'Thanks - your e-mail address has been verified successfully.'
      else
        flash_now :alert, 'The code you've entered isn't correct. Please check and try again.'
      end
    end
  end