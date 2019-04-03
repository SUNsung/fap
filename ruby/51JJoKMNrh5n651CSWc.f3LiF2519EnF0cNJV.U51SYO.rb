
        
        # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
              # WebSockets requests will have a Connection: Upgrade header
          if parser.http_method != 'GET' || parser.upgrade?
            super
          elsif parser.request_url =~ %r!^\/livereload.js!
            headers = [
              'HTTP/1.1 200 OK',
              'Content-Type: application/javascript',
              'Content-Length: #{reload_size}',
              '',
              '',
            ].join('\r\n')
            send_data(headers)
    
    (allow file-write*
  (literal
    '/dev/dtracehelper'
    '/dev/null'
  )
  (regex
    #'^<%= Pod::Config.instance.project_root %>'
    #'^<%= Pod::Config.instance.repos_dir %>'
    #'^/Users/[^.]+/Library/Caches/CocoaPods/*'
    #'^/dev/tty'
    #'^/private/var'
  )
)
    
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
    
      config.vm.define 'debian6' do |debian6|
    debian6.vm.box = 'puppetlabs/debian-6.0.10-64-puppet'
  end
    
          # Verify the types requested are valid
      types = FPM::Package.types.keys.sort
      @command.input_type.tap do |val|
        next if val.nil?
        mandatory(FPM::Package.types.include?(val),
                  'Invalid input package -s flag) type #{val.inspect}. ' \
                  'Expected one of: #{types.join(', ')}')
      end
    
    class FPM::Package::Pacman < FPM::Package
    
        # Create a temporary config file
    logger.debug('Creating pear config file')
    config = File.expand_path(build_path('pear.config'))
    installroot = attributes[:prefix] || '/usr/share'
    safesystem('pear', 'config-create', staging_path(installroot), config)
    
      end
    
      # Returns the path to the tar file containing the packed up staging directory
  def payload
    payload_tar = build_path('payload.tar')
    logger.info('Creating payload tar ', :path => payload_tar)
    
      option '--user', 'USER',
    'Set the user to USER in the prototype files.',
    :default => 'root'