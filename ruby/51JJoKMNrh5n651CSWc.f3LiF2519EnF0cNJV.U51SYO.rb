
        
              inspector = GhInspector::Inspector.new('fastlane', 'fastlane', verbose: FastlaneCore::Globals.verbose?)
      delegate = Fastlane::InspectorReporter.new
      if message_or_error.kind_of?(String)
        inspector.search_query(message_or_error, delegate)
      else
        inspector.search_exception(message_or_error, delegate)
      end
    rescue => ex
      FastlaneCore::UI.error('Error finding relevant GitHub issues: #{ex}') if FastlaneCore::Globals.verbose?
    end
  end
end

    
            [
          'This will automatically tag your build with the following format: `<grouping>/<lane>/<prefix><build_number>`, where:'.markdown_preserve_newlines,
          list,
          'For example, for build 1234 in the 'appstore' lane, it will tag the commit with `builds/appstore/1234`.'
        ].join('\n')
      end
    
            result = Fastlane::FastFile.new.parse('lane :test do
          add_git_tag ({
            tag: '#{tag}',
            message: '#{message}',
            force: true
          })
        end').runner.execute(:test)
    
          context 'as string with wildcards' do
        it 'executes the correct git command' do
          allow(Fastlane::Actions).to receive(:sh).with('git add *.txt', anything).and_return('')
          result = Fastlane::FastFile.new.parse('lane :test do
            git_add(path: '*.txt', shell_escape: false)
          end').runner.execute(:test)
        end
      end
    
          update_code_gen_default_value_if_able!
    end
    # rubocop:enable Metrics/ParameterLists
    
          opts.on('-T', '--to FORMAT',
        'The format to convert to. Can be scss or sass.',
        'By default, this is inferred from the output filename.',
        'If there is none, defaults to sass.') do |name|
        @options[:to] = name.downcase.to_sym
        unless [:scss, :sass].include?(@options[:to])
          raise 'Unknown format for sass-convert --to: #{name}'
        end
      end
    
          # A hash from file extensions to the syntaxes for those extensions.
      # The syntaxes must be `:sass` or `:scss`.
      #
      # This can be overridden by subclasses that want normal filesystem importing
      # with unusual extensions.
      #
      # @return [{String => Symbol}]
      def extensions
        {'sass' => :sass, 'scss' => :scss}
      end
    
          def field_container(model, method, options = {}, &block)
        css_classes = options[:class].to_a
        css_classes << 'field'
        css_classes << 'withError' if error_message_on(model, method).present?
        content_tag(
          :div, capture(&block),
          options.merge(class: css_classes.join(' '), id: '#{model}_#{method}_field')
        )
      end
    
    desc 'Generates a dummy app for testing for every Spree engine'
task :test_app do
  SPREE_GEMS.each do |gem_name|
    Dir.chdir('#{File.dirname(__FILE__)}/#{gem_name}') do
      sh 'rake test_app'
    end
  end
end
    
                return if after_update_attributes
    
            def show
          expires_in 15.minutes, public: true
          headers['Surrogate-Control'] = 'max-age=#{15.minutes}'
          headers['Surrogate-Key'] = 'product_id=1'
          respond_with(@product)
        end
    
              count_on_hand = 0
          if params[:stock_item].key?(:count_on_hand)
            count_on_hand = params[:stock_item][:count_on_hand].to_i
            params[:stock_item].delete(:count_on_hand)
          end
    
          # Parse through mail to get the from/sender headers
      mail = Mail.new(raw_message.split('\r\n\r\n', 2).first)
      from_headers = {'from' => mail.from, 'sender' => mail.sender}
      authenticated_domain = identity.server.find_authenticated_domain_from_headers(from_headers)
    
      def organization
    @organization ||= current_user.organizations_scope.find_by_permalink!(params[:org_permalink])
  end
    
      def update
    if @credential.update(params.require(:credential).permit(:name, :hold))
      redirect_to_with_json [organization, @server, :credentials]
    else
      render_form_errors 'edit', @credential
    end
  end
    
    end

    
      def destroy
    unless current_user.authenticate(params[:password])
      respond_to do |wants|
        wants.html do
          redirect_to [:delete, organization, @server], :alert => 'The password you entered was not valid. Please check and try again.'
        end
        wants.json do
          render :json => {:alert => 'The password you entere was invalid. Please check and try again'}
        end
      end
      return
    end
    @server.soft_destroy
    redirect_to_with_json organization_root_path(organization), :notice => '#{@server.name} has been deleted successfully'
  end
    
        if @user.authenticate_with_previous_password_first(params[:password])
      @password_correct = true
    else
      respond_to do |wants|
        wants.html do
          flash.now[:alert] = 'The current password you have entered is incorrect. Please check and try again.'
          render 'edit'
        end
        wants.json do
          render :json => {:alert => 'The current password you've entered is incorrect. Please check and try again'}
        end
      end
      return
    end
    
          http_endpoints = server.http_endpoints.order(:name).to_a
      if http_endpoints.present?
        s << '<optgroup label='HTTP Endpoints'>'
        for endpoint in http_endpoints
          value = '#{endpoint.class}##{endpoint.uuid}'
          selected = value == selected_value ? 'selected='selected'' : ''
          s << '<option value='#{value}' #{selected}>#{endpoint.description}</option>'
        end
        s << '</optgroup>'
      end