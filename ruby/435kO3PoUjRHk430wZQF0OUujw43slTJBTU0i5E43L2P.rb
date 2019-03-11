
        
          loglevels = %w(error warn info debug)
  option '--log', 'LEVEL', 'Set the log level. Values: #{loglevels.join(', ')}.',
    :attribute_name => :log_level do |val|
    val.downcase.tap do |v|
      if !loglevels.include?(v)
        raise FPM::Package::InvalidArgument, 'Invalid log level, #{v.inspect}. Must be one of: #{loglevels.join(', ')}'
      end
    end
  end # --log
  option '--verbose', :flag, 'Enable verbose output'
  option '--debug', :flag, 'Enable debug output'
  option '--debug-workspace', :flag, 'Keep any file workspaces around for ' \
    'debugging. This will disable automatic cleanup of package staging and ' \
    'build paths. It will also print which directories are available.'
  option ['-v', '--version'], 'VERSION', 'The version to give to the package',
    :default => 1.0
  option '--iteration', 'ITERATION',
    'The iteration to give to the package. RPM calls this the 'release'. ' \
    'FreeBSD calls it 'PORTREVISION'. Debian calls this 'debian_revision''
  option '--epoch', 'EPOCH',
    'The epoch value for this package. RPM and Debian calls this 'epoch'. ' \
    'FreeBSD calls this 'PORTEPOCH''
  option '--license', 'LICENSE',
    '(optional) license name for this package'
  option '--vendor', 'VENDOR',
    '(optional) vendor name for this package'
  option '--category', 'CATEGORY',
    '(optional) category this package belongs to', :default => 'none'
  option ['-d', '--depends'], 'DEPENDENCY',
    'A dependency. This flag can be specified multiple times. Value is ' \
    'usually in the form of: -d 'name' or -d 'name > version'',
    :multivalued => true, :attribute_name => :dependencies
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    when 'all'
      @architecture = 'i386 value=sparc'
    end
    
        # Create a temporary config file
    logger.debug('Creating pear config file')
    config = File.expand_path(build_path('pear.config'))
    installroot = attributes[:prefix] || '/usr/share'
    safesystem('pear', 'config-create', staging_path(installroot), config)
    
        File.write(build_path('comment'),  self.description + '\n')
    
    require 'pleaserun/cli'
    
        begin
      json_test_code = [
        'try:',
        '  import json',
        'except ImportError:',
        '  import simplejson as json'
      ].join('\n')
      safesystem('#{attributes[:python_bin]} -c '#{json_test_code}'')
    rescue FPM::Util::ProcessFailed => e
      logger.error('Your python environment is missing json support (either json or simplejson python module). I cannot continue without this.', :python => attributes[:python_bin], :error => e)
      raise FPM::Util::ProcessFailed, 'Python (#{attributes[:python_bin]}) is missing simplejson or json modules.'
    end
    
        # Unpack the tarball to the staging path
    args = ['-cf', output_path, '-C', staging_path]
    tar_compression_flag(output_path).tap do |flag|
      args << flag unless flag.nil?
    end
    args << '.'
    
        # use dir to set stuff up properly, mainly so I don't have to reimplement
    # the chdir/prefix stuff special for zip.
    dir = convert(FPM::Package::Dir)
    if attributes[:chdir]
      dir.attributes[:chdir] = File.join(build_path, attributes[:chdir])
    else
      dir.attributes[:chdir] = build_path
    end
    
      private
    
      def redirect_to_with_json(url, flash_messages = {})
    if url.is_a?(Array) && url[0] == :return_to
      url = url_with_return_to(url[1])
    else
      url = url_for(url)
    end
    
      def organization
    @organization ||= current_user.organizations_scope.find_by_permalink!(params[:org_permalink])
  end
    
      private
    
      private
    
      def create_with_token
    result = JWT.decode(params[:token], Postal.signing_key.to_s, 'HS256')[0]
    if result['timestamp'] > 1.minute.ago.to_f
      login(User.find(result['user'].to_i))
      redirect_to root_path
    else
      destroy
    end
  rescue JWT::VerificationError
    destroy
  end
    
      def create
    @smtp_endpoint = @server.smtp_endpoints.build(safe_params)
    if @smtp_endpoint.save
      flash[:notice] = params[:return_notice] if params[:return_notice].present?
      redirect_to_with_json [:return_to, [organization, @server, :smtp_endpoints]]
    else
      render_form_errors 'new', @smtp_endpoint
    end
  end
    
      def toggle_ssl
    @track_domain.update(:ssl_enabled => !@track_domain.ssl_enabled)
    redirect_to_with_json [organization, @server, :track_domains], :notice => 'SSL settings for #{@track_domain.full_name} updated successfully.'
  end
    
      def endpoint_options_for_select(server, selected_value = nil, options = {})
    String.new.tap do |s|
      s << '<option></option>'