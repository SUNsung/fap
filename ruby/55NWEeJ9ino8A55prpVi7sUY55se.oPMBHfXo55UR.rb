
        
          # String arguments should be evaluated in the context of the caller.
  it 'accepts a String argument instead of a Proc or block' do
    trace_var :$Kernel_trace_var_global, '$Kernel_trace_var_extra = true'
    
      it 'does not append line-end if last character is line-end' do
    lambda {
      $VERBOSE = true
      warn('this is some simple text with line-end\n')
    }.should output(nil, 'this is some simple text with line-end\n')
  end
    
    When /^I toggle nsfw posts$/ do
  find('.toggle_nsfw_state', match: :first).click
end
    
      def confirm_on_page(page_name)
    if page_name == 'my profile page'
      expect(page).to have_path_in([person_path(@me.person), user_profile_path(@me.username)])
    else
      expect(page).to have_path(path_to(page_name))
    end
  end
end
    
      # checks the page content to see, if the login was successful
  def confirm_login(mobile)
    if mobile
      expect(page).to have_css '#menu-badge'
    else
      expect(find('#user-menu')).to have_content '#{@me.first_name} #{@me.last_name}'
    end
  end
    
    
  config.vm.define 'centos6' do |centos6|
    centos6.vm.box = 'puppetlabs/centos-6.6-64-puppet'
  end
    
        scripts = register_script('post-install',   :after_install,   scripts)
    scripts = register_script('pre-install',   :before_install,  scripts)
    scripts = register_script('pre-upgrade',   :before_upgrade,  scripts)
    scripts = register_script('post-upgrade',   :after_upgrade,  scripts)
    scripts = register_script('pre-deinstall',  :before_remove,   scripts)
    scripts = register_script('post-deinstall', :after_remove,    scripts)
    
        # Replace the shebangs in the executables
    if attributes[:gem_shebang]
      ::Dir.entries(bin_path).each do |file_name|
        # exclude . and ..
        next if ['.', '..'].include?(file_name)
        # exclude everything which is not a file
        file_path = File.join(bin_path, file_name)
        next unless File.ftype(file_path) == 'file'
        # replace shebang in files if there is one
        file = File.read(file_path)
        if file.gsub!(/\A#!.*$/, '#!#{attributes[:gem_shebang]}')
          File.open(file_path, 'w'){|f| f << file}
        end
      end
    end
    
        # npm installs dependencies in the module itself, so if you do
    # 'npm install express' it installs dependencies (like 'connect')
    # to: node_modules/express/node_modules/connect/...
    #
    # To that end, I don't think we necessarily need to include
    # any automatic dependency information since every 'npm install'
    # is fully self-contained. That's why you don't see any bother, yet,
    # to include the package's dependencies in here.
    #
    # It's possible someone will want to decouple that in the future,
    # but I will wait for that feature request.
  end
    
        if attributes[:before_install_given?] or attributes[:after_install_given?]
      write_scripts
      args += ['--scripts', scripts_path]
    end
    args << output_path
    
      option '--channel', 'CHANNEL_URL',
    'The pear channel url to use instead of the default.'
    
      require 'pleaserun/platform/systemd'
  require 'pleaserun/platform/upstart'
  require 'pleaserun/platform/launchd'
  require 'pleaserun/platform/sysv'
    
      option '--group', 'GROUP',
    'Set the group to GROUP in the prototype file.',
    :default => 'root'
    
    task default: %i[rubocop spec]

    
        def write(header)
      @cookies.select { |key, _value| @send_cookies[key] == true }.each do |name, value|
        cookie_value = value.is_a?(Hash) ? value : { value: value }
        Rack::Utils.set_cookie_header! header, name, cookie_value
      end
    end
    
            def document_attribute(names, opts)
          setting = description_field(:params)
          setting ||= description_field(:params, {})
          Array(names).each do |name|
            setting[name[:full_name].to_s] ||= {}
            setting[name[:full_name].to_s].merge!(opts)
    
            unless presenter || env[Grape::Env::GRAPE_ROUTING_ARGS].nil?
          # env['api.endpoint'].route does not work when the error occurs within a middleware
          # the Endpoint does not have a valid env at this moment
          http_codes = env[Grape::Env::GRAPE_ROUTING_ARGS][:route_info].http_codes || []