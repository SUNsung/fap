
        
        module Docs
  class PageDb
    attr_reader :pages
    
        def with_filters(*filters)
      stack = FilterStack.new
      stack.push(*filters)
      pipeline.instance_variable_set :@filters, stack.to_a.freeze
      yield
    ensure
      @pipeline = nil
    end
    
        def load_capybara_selenium
      require 'capybara/dsl'
      require 'selenium/webdriver'
      Capybara.register_driver :chrome do |app|
        options = Selenium::WebDriver::Chrome::Options.new(args: %w[headless disable-gpu])
        Capybara::Selenium::Driver.new(app, browser: :chrome, options: options)
      end
      Capybara.javascript_driver = :chrome
      Capybara.current_driver = :chrome
      Capybara.run_server = false
      Capybara
    end
    
              node.remove_attribute('path')
          node.remove_attribute('region')
          node.remove_attribute('linenums')
          node.remove_attribute('title')
          node.remove_attribute('language')
          node.remove_attribute('hidecopy')
          node.remove_attribute('class')
        end
    
            doc
      end
    end
  end
end

    
          INDEX = Set.new
    
            css('img[src]').each do |node|
          node['src'] = node['src'].gsub(%r{angularjs\.org/([\d\.]+)/docs/partials/(\w+)/}, 'angularjs.org/\1/docs/\2/')
        end
    
        # The path used after resending confirmation instructions.
    def after_resending_confirmation_instructions_path_for(resource_name)
      is_navigational_format? ? new_session_path(resource_name) : '/'
    end
    
      protected
    
      protected
    
          def expire_data_after_sign_in!
        # session.keys will return an empty array if the session is not yet loaded.
        # This is a bug in both Rack and Rails.
        # A call to #empty? forces the session to be loaded.
        session.empty?
        session.keys.grep(/^devise\./).each { |k| session.delete(k) }
      end
    
    require 'uri'
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
        alias :name :singular
    
        # Include the chosen devise modules in your model:
    #
    #   devise :database_authenticatable, :confirmable, :recoverable
    #
    # You can also give any of the devise configuration values in form of a hash,
    # with specific values for this model. Please check your Devise initializer
    # for a complete description on those values.
    #
    def devise(*modules)
      options = modules.extract_options!.dup
    
          def extend_remember_period
        self.class.extend_remember_period
      end
    
          if @email_domain_block.save
        log_action :create, @email_domain_block
        redirect_to admin_email_domain_blocks_path, notice: I18n.t('admin.email_domain_blocks.created_msg')
      else
        render :new
      end
    end
    
      def update
    if subscription.verify(body, request.headers['HTTP_X_HUB_SIGNATURE'])
      ProcessingWorker.perform_async(@account.id, body.force_encoding('UTF-8'))
    end
    
      def setting
    @_setting ||= ::Web::Setting.where(user: current_user).first_or_initialize(user: current_user)
  end
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
    
      def send_export_file
    respond_to do |format|
      format.csv { send_data export_data, filename: export_filename }
    end
  end
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
            self.description = <<-DESC
          Lints the spec-repo `NAME`. If a directory is provided it is assumed
          to be the root of a repo. Finally, if `NAME` is not provided this
          will lint all the spec-repos known to CocoaPods.
        DESC
    
            self.description = <<-DESC
          Prints the content of the podspec(s) whose name matches `QUERY` to standard output.
        DESC
    
    
    {          frame
        else
          nil
        end
      }.compact
    
          def report(env)
        warn env, 'attack reported by #{self.class}'
        env[options[:report_key]] = true
      end
    
        context 'when is not a system pipeline' do
      it 'returns false if the pipeline is not a system pipeline' do
        expect(subject.system?).to be_falsey
      end
    end
  end
end

    
              it 'fails when installing a non logstash plugin' do
            command = logstash.run_command_in_path('bin/logstash-plugin install  bundler')
            expect(command).not_to install_successfully
          end
    
    SpecsHelper.configure(selected_boxes)
    
          def field_container(model, method, options = {}, &block)
        css_classes = options[:class].to_a
        css_classes << 'field'
        css_classes << 'withError' if error_message_on(model, method).present?
        content_tag(
          :div, capture(&block),
          options.merge(class: css_classes.join(' '), id: '#{model}_#{method}_field')
        )
      end
    
          def link_to_edit_url(url, options = {})
        options[:data] = { action: 'edit' }
        options[:class] = 'btn btn-primary btn-sm'
        link_to_with_icon('edit', Spree.t(:edit), url, options)
      end
    
    namespace :gem do
  def version
    require 'spree/core/version'
    Spree.version
  end
    
          mandatory(@command.args.any? || @command.inputs || @command.input_type == 'empty',
                'No parameters given. You need to pass additional command ' \
                'arguments so that I know what you want to build packages ' \
                'from. For example, for '-s dir' you would pass a list of ' \
                'files and directories. For '-s gem' you would pass a one' \
                ' or more gems to package from. As a full example, this ' \
                'will make an rpm of the 'json' rubygem: ' \
                '`fpm -s gem -t rpm json`')
    end # def validate
    
          # major/minor
      header[TAR_MAJOR_START..TAR_MAJOR_END] = '0'.rjust(8, '0')
      header[TAR_MINOR_START..TAR_MINOR_END] = '0'.rjust(8, '0')
      header[TAR_MAJOR_END] = '\0'
      header[TAR_MINOR_END] = '\0'
    else
      header[TAR_UNAME_START..TAR_UNAME_END] = pad_string_to('root', 32)
      header[TAR_GNAME_START..TAR_GNAME_END] = pad_string_to('root', 32)
    end
    
        # Publish the package.
    repo_path = build_path('#{name}_repo')
    safesystem('pkgrepo', 'create', repo_path)
    safesystem('pkgrepo', 'set', '-s', repo_path, 'publisher/prefix=#{attributes[:p5p_publisher]}')
    safesystem('pkgsend', '-s', repo_path,
      'publish', '-d', '#{staging_path}', '#{build_path}/#{name}.p5m')
    safesystem('pkgrecv', '-s', repo_path, '-a',
      '-d', build_path('#{name}.p5p'), name)
    
      def output(output_path)
    output_check(output_path)
    
        ::Dir.chdir staging_path do
      # Should create a package directory named by the package name.
      safesystem('pkgmk', '-o', '-f', '#{build_path}/Prototype', '-d', build_path)
    end
    
        desc 'Package #{@name}' unless ::Rake.application.last_description
    
          prefix = ''
      unless version_prefix.empty?
        prefix = version_prefix + '.'
      end