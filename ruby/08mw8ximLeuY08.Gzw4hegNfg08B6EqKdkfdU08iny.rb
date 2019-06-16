
        
            it 'accepts jsfiddle link with a / at the end' do
      jsfiddle_link = 'http://jsfiddle.net/link2twenty/v2kx9jcd/'
      expect do
        generate_new_liquid(jsfiddle_link)
      end.not_to raise_error
    end
    
      def edit
    @broadcast = Broadcast.find(params[:id])
  end
    
    # enable logging
FPM::Util.send :module_function, :logger
FPM::Util.logger.level = :info
FPM::Util.logger.subscribe STDERR
    
        # Publish the package.
    repo_path = build_path('#{name}_repo')
    safesystem('pkgrepo', 'create', repo_path)
    safesystem('pkgrepo', 'set', '-s', repo_path, 'publisher/prefix=#{attributes[:p5p_publisher]}')
    safesystem('pkgsend', '-s', repo_path,
      'publish', '-d', '#{staging_path}', '#{build_path}/#{name}.p5m')
    safesystem('pkgrecv', '-s', repo_path, '-a',
      '-d', build_path('#{name}.p5p'), name)
    
      option '--channel', 'CHANNEL_URL',
    'The pear channel url to use instead of the default.'
    
        File.write(build_path('comment'),  self.description + '\n')
    
    class FPM::Package::Puppet < FPM::Package
  def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -m}.chomp
    end
    return @architecture
  end # def architecture
    
        if !attributes[:no_auto_depends?] and attributes[:python_dependencies?]
      metadata['dependencies'].each do |dep|
        dep_re = /^([^<>!= ]+)\s*(?:([~<>!=]{1,2})\s*(.*))?$/
        match = dep_re.match(dep)
        if match.nil?
          logger.error('Unable to parse dependency', :dependency => dep)
          raise FPM::InvalidPackageConfiguration, 'Invalid dependency '#{dep}''
        end
        name, cmp, version = match.captures
    
      # Where we keep metadata and post install scripts and such
  def fpm_meta_path
    @fpm_meta_path ||= begin
                         path = File.join(staging_path, '.fpm')
                         FileUtils.mkdir_p(path)
                         path
                       end
  end
end

    
      def default_output
    v = version
    v = '#{epoch}:#{v}' if epoch
    if iteration
      '#{name}_#{v}-#{iteration}_#{architecture}.#{type}'
    else
      '#{name}_#{v}_#{architecture}.#{type}'
    end
  end # def default_output
end # class FPM::Deb