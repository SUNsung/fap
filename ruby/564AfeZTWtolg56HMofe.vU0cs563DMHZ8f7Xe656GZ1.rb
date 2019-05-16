
        
            def initialize
      @pages = {}
    end
    
        def effective_path
      @effective_path ||= effective_url.path
    end
  end
end

    
        delegate :puts, :print, :tty?, to: :$stdout
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
      # Update version.rb file with BOOTSTRAP_SHA
  def store_version
    path    = 'lib/bootstrap-sass/version.rb'
    content = File.read(path).sub(/BOOTSTRAP_SHA\s*=\s*[''][\w]+['']/, 'BOOTSTRAP_SHA = '#@branch_sha'')
    File.open(path, 'w') { |f| f.write(content) }
  end
end

    
        def log_transform(*args, from: caller[1][/`.*'/][1..-2].sub(/^block in /, ''))
      puts '    #{cyan from}#{cyan ': #{args * ', '}' unless args.empty?}'
    end
    
      # Execute this command. See Clamp::Command#execute and Clamp's documentation
  def execute
    logger.level = :warn
    logger.level = :info if verbose? # --verbose
    logger.level = :debug if debug? # --debug
    if log_level
      logger.level = log_level.to_sym
    end
    
        pkginfo = ''
    
        npm_flags = []
    settings.each do |key, value|
      # npm lets you specify settings in a .npmrc but the same key=value settings
      # are valid as '--key value' command arguments to npm. Woo!
      logger.debug('Configuring npm', key => value)
      npm_flags += [ '--#{key}', value ]
    end
    
      def architecture
    case @architecture
      when nil
        return %x{uname -m}.chomp   # default to current arch
      when 'amd64' # debian and pacman disagree on architecture names
        return 'x86_64'
      when 'native'
        return %x{uname -m}.chomp   # 'native' is current arch
      when 'all', 'any', 'noarch'
        return 'any'
      else
        return @architecture
    end
  end # def architecture